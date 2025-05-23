# 🌿🐘WildGuard
An Edge AI-Powered Wildlife Monitoring and Anti-Poaching System

# 🧠Overview
WildGuard is an edge AI system to combat wildlife poaching, built for the Hackster.io "Getting Edgy with Machine Learning" contest. Using the Infineon PSoC™ 6 AI Evaluation Kit (CY8CKIT-062S2-AI), it leverages the DEEPCRAFT™ Siren Detection Ready Model to detect poaching-related sounds (🔫 gunshots, 🚙 vehicle engines) via the onboard MEMS microphone. Integrated IMU and barometric pressure sensors monitor movement and environmental changes, enabling comprehensive threat detection. Alerts are sent to rangers via Wi-Fi/BLE 📡, ensuring rapid response in remote wildlife reserves 🌍. This low-power, cost-effective solution addresses the global poaching crisis, protecting endangered species 🐘🦏.

# 💡Motivation
Over 100,000 elephants 🐘 were poached in Africa between 2010 and 2012, highlighting the urgent need for affordable monitoring systems. Traditional solutions like satellites 🛰️ or drones 🚁 are costly and impractical for vast reserves. WildGuard uses edge AI ⚙️ to deliver real-time, low-latency detection, empowering conservationists with a scalable tool to safeguard biodiversity 🌱.

# 🔍Features
🔊Sound Detection: Identifies gunshots/vehicle sounds using the DEEPCRAFT™ Siren Detection Ready Model.

🧭Movement Tracking: Detects intruder movements via the onboard IMU (accelerometer, gyroscope, magnetometer).

🌡️Environmental Monitoring: Tracks changes using the barometric pressure sensor.

⚠️Real-Time Alerts: Sends notifications to rangers via Wi-Fi/BLE using Avnet IoTConnect libraries.

🔋Low-Power Design: Powered by a 3.7V LiPo battery for remote deployment.

# 🧾Bill of Materials
# 🔌Hardware:
🧠 Infineon PSoC™ 6 AI Evaluation Kit (CY8CKIT-062S2-AI)

🔋 3.7V LiPo Battery (1000mAh)

⚡ TP4056 Battery Charger Module

🔌 Connecting Wires/Jumper Cables

🔄 USB-A to USB-C Cable

🌧️ Weatherproof Enclosure (optional)


# 💻Software:
🧠 DEEPCRAFT™ Studio (Windows) 
🔗 imagimob.com/studio

🧰 ModusToolbox™ v3.4 
🔗 infineon.com/modustoolbox

🚨 DEEPCRAFT™ Siren Detection Ready Model 

🌐 Avnet IoTConnect Libraries 
🔗 github.com/avnet-iotconnect

🎵 Royalty-Free Audio Files (CC0) 
🔗 freesound.org

# ⚙️Setup Instructions
# 🔧Hardware Setup:
🔗 Connect the PSoC™ 6 AI Kit to a Windows PC via USB-C.

🔋 Attach the LiPo battery and TP4056 charger module to the kit’s power pins.

🛠️ Update firmware to Tensor Streaming Protocol v2 (see Infineon’s tutorial: infineon.com).

# 🖥️Software Installation:
💻 Install DEEPCRAFT™ Studio and ModusToolbox™ v3.4 on Windows 10/11.

📥 Download the Siren Detection Ready Model from DEEPCRAFT™ Studio.

# 🧑‍💻Code Setup:
1. Clone this repository: git clone https://github.com/SujaydRNSIT/WildGuard.git.

2. Open /src/main.c in ModusToolbox™.

3. Configure Wi-Fi credentials in /src/config.h for alert transmission.

# 📲Program the Kit:
Use ModusToolbox™ Programmer to flash /src/main.c to the PSoC™ 6 AI Kit.

# 🧪Testing:
1. Play royalty-free 🔫gunshot/🚙vehicle sounds (from /tests/audio/) near the kit.

2. Monitor alerts via a serial terminal (e.g., PuTTY, 115200 baud) or a smartphone.

3. Simulate movement to test IMU detection.

# 🌍Deployment:
Place the kit in a weatherproof enclosure and deploy in a wildlife reserve.

# 🛠️How It Works
WildGuard processes audio from the MEMS microphone using the DEEPCRAFT™ Siren Detection Ready Model to detect poaching sounds. The IMU tracks movement patterns (e.g., human intruders), and the barometric pressure sensor monitors environmental changes. All processing occurs on the PSoC™ 6 MCU for low latency. Upon detection, the system sends Wi-Fi/BLE alerts to rangers using Avnet IoTConnect libraries. The code in /src/main.c integrates these components, adapted from ModusToolbox™ sound recognition examples.


# 📁Repository Structure
📁/src: Source code (main.c, config.h) for ModusToolbox™.

📁/docs: Documentation (setup guide, schematics).

📁/assets: Images (kit photo, DEEPCRAFT™ Studio screenshot).

📁/tests: Test audio files (optional).

📁README.md: Project overview.

📄LICENSE: MIT License.


# ✅ Results
✅ Accurate detection of 🔫gunshots and 🚙vehicle sounds using royalty-free audio

✅ Validated IMU + barometric sensor detection

✅ Near-instant Wi-Fi alerts to smartphone 💬📱


# 🔮Future Improvements
☀️ Add solar power for sustainable operation.

🧠 Train a custom ML model for specific poaching sounds (e.g., chainsaws, fireworks).

🚁 Integrate with drone systems for broader coverage.


# 📚Resources
🔗Code: ModusToolbox™ project files (this repository).

📦Model: DEEPCRAFT™ Siren Detection Ready Model (imagimob.com/studio).

📽️Tutorials:
“Using DEEPCRAFT Ready Models in ModusToolbox” (hackster.io).

“Updating the PSoC™ 6 AI Eval Kit Firmware” (infineon.com).

🌐Community: Infineon Developer Community (community.infineon.com).

# 📄License
MIT License :)

