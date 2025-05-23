## 🌿🐘WildGuard
**An Edge AI-Powered Wildlife Monitoring and Anti-Poaching System**

![WildGaurd.jpg](assets/WildGaurd.jpg)

# 🧠Overview
**WildGuard** is an **edge AI system to combat wildlife poaching**, built for the Hackster.io **"Getting Edgy with Machine Learning"** contest. Using the **Infineon PSoC™ 6 AI Evaluation Kit (CY8CKIT-062S2-AI)**, it leverages the **DEEPCRAFT™ Siren Detection Ready Model** to detect poaching-related sounds (🔫 gunshots, 🚙 vehicle engines) via the onboard MEMS microphone. Integrated IMU and barometric pressure sensors monitor movement and environmental changes, enabling comprehensive threat detection. Alerts are sent to rangers via Wi-Fi/BLE 📡, ensuring rapid response in remote wildlife reserves 🌍. This low-power, cost-effective solution addresses the global poaching crisis, protecting endangered species 🐘🦏.

# 💡Motivation
Over **100,000 elephants** 🐘 were **poached in Africa between 2010 and 2012**, highlighting the urgent need for **affordable monitoring systems**. Traditional solutions like satellites 🛰️ or drones 🚁 are costly and impractical for vast reserves. **WildGuard uses edge AI ⚙️ to deliver real-time, low-latency detection, empowering conservationists with a scalable tool to safeguard biodiversity** 🌱.

# 🔍Features
**🔊Sound Detection:** 
Identifies 🔫gunshots and 🚙vehicle sounds using the DEEPCRAFT™ Siren Detection Ready Model.

**🧭Movement Tracking:**
Detects intruder movements via the onboard IMU (accelerometer, gyroscope, magnetometer).

**🌡️Environmental Monitoring:** 
Tracks changes using the barometric pressure sensor.

**⚠️Real-Time Alerts:**
Sends notifications to rangers via Wi-Fi/BLE using Avnet IoTConnect libraries.

**🔋Low-Power Design:**
Powered by a 3.7V LiPo battery for remote deployment.


# 🧾List of Materials
# 🔌Hardware Requiremnts:
🧠 Infineon PSoC™ 6 AI Evaluation Kit (CY8CKIT-062S2-AI)

🔋 3.7V LiPo Battery (1000mAh)

⚡ TP4056 Battery Charger Module

🔌 Connecting Wires/Jumper Cables

🔄 USB-A to USB-C Cable

🌧️ Weatherproof Enclosure (optional)


# 💻Software Requirements:
🧠 DEEPCRAFT™ Studio (Windows)
🔗 [imagimob.com/studio](https://www.imagimob.com/studio)

🧰 ModusToolbox™ v3.4 
🔗 [infineon.com/modustoolbox](https://www.infineon.com/cms/en/design-support/tools/sdk/modustoolbox-software/)

🚨 DEEPCRAFT™ Siren Detection Ready Model 
🔗 [infineon.com/deepcraft-ready-model-for-siren-detection](https://www.infineon.com/cms/en/product/gated-document/deepcraft-ready-model-for-siren-detection-product-brief-from-imagimob-8ac78c8c93dda25b0194abad03e03494/)

🌐 Avnet IoTConnect Libraries 
🔗 [github.com/avnet-iotconnect](https://github.com/avnet-iotconnect)

🎵 Royalty-Free Audio Files (CC0) 
🔗 [freesound.org](https://freesound.org/search/?q=FOREST+GUNSHOTS&f=&s=Automatic+by+relevance&si_tags=0&si_name=0&si_description=0&si_packname=0&si_sound_id=0&si_username=0&d0=0&d1=*&ig=0&r=0&g=1&dp=0&cm=0&mm=0)


# ⚙️Setup Instructions
# Step 1: 🔧Hardware Setup
🔗 Connect the PSoC™ 6 AI Kit to a Windows PC via USB-C.

🔋 Attach the LiPo battery and TP4056 charger module to the kit’s power pins.

🛠️ Update firmware to Tensor Streaming Protocol v2 (Here is the Infineon’s tutorial: [infineon.com](https://www.hackster.io/clark-jarvis/updating-the-psoc-6-ai-eval-kit-streaming-protocol-firmware-b027b1)).

# Step 2: 🖥️Software Installation
💻 Install DEEPCRAFT™ Studio and ModusToolbox™ v3.4 on Windows 10/11.

📥 Download the Siren Detection Ready Model from DEEPCRAFT™ Studio.

# Step 3: 🧑‍💻Code Setup 
1. Clone this repository: git clone https://github.com/SujaydRNSIT/WildGuard.git.

2. Open /src/main.c in ModusToolbox™.

3. Configure Wi-Fi credentials in /src/config.h for alert transmission.

# Step 4: 📲Program the PSoC™ 6 AI Kit
💻 Use ModusToolbox™ Programmer to flash /src/main.c to the PSoC™ 6 AI Kit.

# Step 5: 🧪Testing
1. Play royalty-free 🔫gunshot/🚙vehicle sounds (from /tests/audio/) near the kit.

2. Monitor alerts via a serial terminal (e.g., PuTTY, 115200 baud) or a smartphone.

3. Simulate movement to test IMU detection.

# Step 6: 🌍Deployment
🐘 Place the kit in a weatherproof enclosure and deploy in a wildlife reserve.


# 🛠️How It Works
WildGuard processes audio from the MEMS microphone using the DEEPCRAFT™ Siren Detection Ready Model to detect poaching sounds. The IMU tracks movement patterns (e.g., human intruders), and the barometric pressure sensor monitors environmental changes. All processing occurs on the PSoC™ 6 MCU for low latency. Upon detection, the system sends Wi-Fi/BLE alerts to rangers using Avnet IoTConnect libraries. The code in /src/main.c integrates these components, adapted from ModusToolbox™ sound recognition examples.


# 📁Repository Structure
📁**src:** Source code (main.c, config.h) for ModusToolbox™.

📁**docs:** Documentation (setup guide, schematics).

📁**assets:** Images

📁**tests:** Test audio files (optional).

📁**README.md:** Project overview.

📄**LICENSE:** MIT License.


# ✅ Results
✅ Accurate detection of 🔫gunshots and 🚙vehicle sounds using royalty-free audio

✅ Validated IMU + barometric sensor detection

✅ Near-instant Wi-Fi alerts to smartphone 💬📱


# 🔮Future Improvements
☀️ Add solar power for sustainable operation.

🧠 Train a custom ML model for specific poaching sounds (e.g., chainsaws, fireworks).

🚁 Integrate with drone systems for broader coverage.


# 📚Resources

**🔗Code:** ModusToolbox™ project files (this repository).

**📦Model:** DEEPCRAFT™ Siren Detection Ready Model

🔗 [infineon.com/deepcraft-ready-model-for-siren-detection](https://www.infineon.com/cms/en/product/gated-document/deepcraft-ready-model-for-siren-detection-product-brief-from-imagimob-8ac78c8c93dda25b0194abad03e03494/)

**📽️Tutorials:**

1.Using DEEPCRAFT Ready Models in ModusToolbox (hackster.io).

https://www.hackster.io/clark-jarvis/using-deepcraft-ready-models-in-modustoolbox-4a054e


2.Updating the PSoC™ 6 AI Eval Kit Firmware (infineon.com).

https://www.hackster.io/clark-jarvis/updating-the-psoc-6-ai-eval-kit-streaming-protocol-firmware-b027b1


🌐Community: Infineon Developer Community

https://community.infineon.com/

# 📄License
MIT License :)

# 🙏 Acknowledgments

🌍 **WildGuard** was developed for the Hackster.io **"Getting Edgy with Machine Learning"** contest, sponsored by **Infineon Technologies**, to showcase innovative edge AI solutions for real-world challenges in environmental, safety, and industrial domains.

![Getting_Edgy_with_Machine_Learning.jpg](assets/GettingEdgywithMachineLearning.jpg)

🔧 Powered by the **PSoC™ 6 AI Evaluation Kit** and **DEEPCRAFT™ Studio**, this project aims to combat wildlife poaching through a real-time, low-power monitoring system deployed at the edge.

💙 A heartfelt thank you to **Infineon Technologies** for providing cutting-edge hardware and software tools, and to the amazing **Hackster.io community** for the resources, guidance, and encouragement that made this project possible.

🐘 Let’s continue to innovate and protect our planet’s precious wildlife — one model at a time!


