#include "cy_pdl.h"
#include "cyhal.h"
#include "deepcraft_siren_model.h" // DEEPCRAFT™ Siren Detection Ready Model
#include "cy_wcm.h" // Wi-Fi connectivity
#include "cy_iotconnect.h" // Avnet IoTConnect for alerts

#define BUFFER_SIZE 512
#define ALERT_THRESHOLD 0.9 // Confidence threshold for siren detection

// Wi-Fi configuration
#define WIFI_SSID "your_wifi_ssid"
#define WIFI_PASSWORD "your_wifi_password"

// Initialize hardware and connectivity
void init_system(void) {
    cyhal_pdm_pcm_init(); // Initialize MEMS microphone
    cyhal_imu_init(); // Initialize IMU
    cyhal_barometer_init(); // Initialize barometric pressure sensor
    cy_wcm_config_t wifi_config = { .interface = CY_WCM_INTERFACE_TYPE_STA };
    cy_wcm_init(&wifi_config);
    cy_wcm_connect_params_t connect_param = {
        .ssid = WIFI_SSID,
        .password = WIFI_PASSWORD
    };
    cy_wcm_connect_ap(&connect_param);
}

// Process sensor data and send alerts
void process_data(void) {
    float audio_buffer[BUFFER_SIZE];
    float imu_data[6]; // Accelerometer + gyroscope
    float pressure;

    // Read sensor data
    cyhal_pdm_pcm_read(audio_buffer, BUFFER_SIZE);
    cyhal_imu_read(imu_data);
    cyhal_barometer_read(&pressure);

    // Run ML inference for sound detection
    float confidence = deepcraft_siren_model_predict(audio_buffer);
    if (confidence > ALERT_THRESHOLD) {
        cy_iotconnect_send_alert("Suspicious sound detected!");
        cyhal_gpio_write(CYHAL_GPIO_LED, 1); // Blink LED
    }

    // Check for suspicious movement (basic threshold-based)
    if (imu_data[0] > 1.5 || imu_data[3] > 1.0) { // Accel X, Gyro X thresholds
        cy_iotconnect_send_alert("Intruder movement detected!");
    }

    // Log environmental changes (optional)
    if (pressure > 1015.0 || pressure < 995.0) { // Example thresholds
        cy_iotconnect_send_alert("Environmental anomaly detected!");
    }
}

int main(void) {
    cyhal_system_init();
    init_system();
    while (1) {
        process_data();
        cyhal_system_delay_ms(100); // Process every 100ms
    }
    return 0;
}
