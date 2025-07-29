# Project: LED Pedestrian Crosswalk Prototype


Developed a prototype LED light system designed to improve pedestrian safety at crosswalks during low-visibility conditions such as nighttime and adverse weather. The system uses an Arduino microcontroller to control a sequence of LEDs embedded along a crosswalk, simulating directional lighting to alert drivers and guide pedestrians safely across.

Designed and implemented sequential LED control logic that illuminates LEDs in both forward and backward patterns, enhancing visibility and driver awareness.

Programmed using Arduino IDE with digitalWrite() and timing functions to create smooth and clear LED transitions.

Selected red LEDs to reduce glare and improve visibility under different environmental conditions.

Structured the code modularly to easily scale the number of LEDs and adjust timing parameters.

Encased the hardware prototype in a protective housing for demonstration and testing purposes.


Testing:

Applied unit testing using the ArduinoUnit (Unity) framework to verify the correctness of core sequencing functions responsible for LED activation order.

Created test cases to validate that the logic functions return accurate LED pin numbers for both forward and backward sequences.

Although hardware control functions (digitalWrite, delay) cannot be fully tested via unit tests, the logic validation ensures that the sequence control operates as intended.

Conducted manual functional testing on the physical prototype by observing LED behavior in real-time under various simulated conditions.

Tested the visibility and effectiveness of the LED sequences during different lighting scenarios, including dim and foggy environments.

The combined testing approach ensures both software reliability and hardware functionality, contributing to a safer pedestrian crossing solution.
