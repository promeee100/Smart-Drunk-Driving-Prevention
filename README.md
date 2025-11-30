SMART DRUNK DRIVING PREVENTION

Driving under the influence of alcohol significantly impairs judgment and reaction speed. Existing safety systems do not always prevent drivers from operating vehicles after consuming alcohol. This project focuses on developing an automated technology that ensures the engine only operates when the driver is sober. The system continuously monitors the driver’s breath, and upon detecting alcohol, it instantly activates visual and audible alerts and cuts off the engine. This ensures accident prevention, driver safety, and public security.

Objective
•	To detect alcohol levels using an alcohol sensor (MQ-3 series).
•	To automatically turn off the engine if alcohol is detected.
•	To alert the driver through a buzzer and LCD display.
•	To design a low-cost and reliable drunk driving prevention system.
•	To integrate the system with real vehicle safety modules.

  System Overview
A.	The system uses:
•	Alcohol Sensor to detect ethanol level in breath
•	Arduino microcontroller for decision making
•	LCD Display to show system status
•	Buzzer for audible alert
•	Engine control output (Relay/Pin) to start or shut down the vehicle
B.	When alcohol is detected, the system:
1.	Displays “ALCOHOL DETECTED”
2.	Turns engine OFF
3.	Activates multiple buzzer alerts
4.	Prevents vehicle from being driven
C.	 When no alcohol is detected, the engine is allowed to start normally

Block Diagram

<img width="529" height="391" alt="image" src="https://github.com/user-attachments/assets/8d36c639-94e2-4fe8-aaa9-403766c894f3" />


Circuit Components
Hardware
•	Arduino UNO/Nano
•	MQ-3 alcohol sensor
•	16×2 LCD (I2C Module)
•	Buzzer
•	Engine control relay/module
•	Connecting wires
•	Power supply (5V)

Software
•	Arduino IDE
•	LiquidCrystal_I2C Library
•	Wire Library

Cicuit Diagram
<img width="775" height="504" alt="image" src="https://github.com/user-attachments/assets/212ba104-4615-4ba0-8e5d-0caca5637ab9" />

Working Principle
1.	The alcohol sensor continuously monitors the driver’s breath.

2.	If alcohol is detected (LOW signal):
o	LCD warns: “ALCOHOL DETECTED”
o	Engine output turns OFF
o	Buzzer sounds repeatedly

3.	If no alcohol is detected:
o	LCD shows: “NO ALCOHOL – ENGINE ON”
o	Engine output stays ON
This ensures that a drunk driver cannot operate the vehicle.

Flowchart
<img width="1024" height="1024" alt="image" src="https://github.com/user-attachments/assets/37f05dc6-0227-4feb-801b-15fe0a514923" />


Results & Output
•	When the sensor detects alcohol, the engine immediately turns OFF.
•	The system successfully displays warnings and activates the buzzer.
•	When alcohol is not detected, normal engine operation continues.
•	The system performed accurately in multiple tests

Visualization

<img width="703" height="466" alt="image" src="https://github.com/user-attachments/assets/35535598-4d35-4d42-8beb-7e4cdb11081b" />

Advantages
•	Prevents drunk driving accidents
•	Low-cost and easy to implement
•	Automatic detection without human intervention
•	Reliable and fast response
•	Increases road and passenger safety

 Applications
•	Cars, Motorcycles and Private Vehicles
•	Public Transportation (Buses, Microbuses)
•	Trucks and Heavy Vehicles
•	Driver Training Institutes
•	Fleet Management Systems

Conclusion
The Smart Drunk Driving Prevention System ensures that a vehicle cannot be operated under the influence of alcohol. This automated safety mechanism can significantly reduce road accidents and save valuable human lives. By implementing this system in real vehicles, drunk driving accidents can be significantly reduced, helping to save thousands of lives every year.
Its low cost, simplicity, and reliability make it highly suitable for real-world implementation in modern vehicles

References
 
1] Arduino, “Arduino UNO Rev3 — Technical Specifications,” Arduino Documentation. Available: https://docs.arduino.cc/hardware/uno-r3/
[2] Hanwei Electronics Co., “MQ-3 Gas Sensor Datasheet,” Winsen Sensor, 2023. Available: https://www.winsen-sensor.com
[3] M. Schwartz, “LiquidCrystal_I2C Library for Arduino,” GitHub Repository, 2014. Available: https://github.com/fdebrabander/Arduino-LiquidCrystal-I2C-library
[4] N. Kumar, “Basics of Actuators and Outputs in Microcontroller Systems,” Embedded Systems Journal, 2021.
[5] World Health Organization, “Global Status Report on Road Safety,” WHO, 2023. Available: https://www.who.int
[6] A. Sharma, “Alcohol Detection and Engine Locking System Using Arduino,” International Journal of Engineering Research, 2022.
[7] S. Monk, Programming Arduino: Getting Started with Sketches, McGraw-Hill Education, 2016.
[8] Adafruit Industries, “Using I2C LCD with Microcontrollers,” Adafruit Learning System. Available: https://learn.adafruit.com
 
Connect Beyond Code -

Email: sanjanatasnim18@cse.pstu.ac.bd
GitHub: https://github.com/promeee100

Made by Sanjana Tasnim Prome | © 2025 All rights reserved.






