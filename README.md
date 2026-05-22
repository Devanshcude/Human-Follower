#  Human Follower Robot using Arduino

An autonomous **Human Follower Robot** built using **Arduino Uno**, **Ultrasonic Sensor**, **IR Sensors**, **Servo Motor**, and **L298D Motor Driver**.  
The robot detects and follows a human/object while avoiding obstacles in real time.

---

##  Features

- Human/object following mechanism
- Obstacle detection and avoidance
- Autonomous navigation
- Servo-based environmental scanning
- Real-time distance measurement
- Differential drive motor control
- Low-cost robotics implementation

---

##  Components Used

| Component | Quantity |
|-----------|-----------|
| Arduino Uno | 1 |
| L298D Motor Driver | 1 |
| DC Motors | 4 |
| Ultrasonic Sensor (HC-SR04) | 1 |
| IR Sensors | 2 |
| Servo Motor (SG90) | 1 |
| Robot Chassis | 1 |
| Wheels | 4 |
| Battery Pack | 1 |
| Jumper Wires | Multiple |

---

##  Working Principle

1. The ultrasonic sensor continuously measures the distance of nearby objects.
2. The servo motor rotates the sensor for wider scanning coverage.
3. IR sensors assist in obstacle and directional detection.
4. The Arduino processes sensor data and controls motor movement:
   - Move Forward → Target detected
   - Turn Left/Right → Target direction changes
   - Stop → No target or obstacle too close
5. The L298D motor driver controls motor speed and direction.

---

##  Circuit Connections

### Ultrasonic Sensor

| HC-SR04 Pin | Arduino Pin |
|-------------|-------------|
| VCC | 5V |
| GND | GND |
| TRIG | Digital Pin |
| ECHO | Digital Pin |

### Servo Motor

| Servo Pin | Arduino Pin |
|------------|-------------|
| VCC | 5V |
| GND | GND |
| Signal | PWM Pin |

### L298D Motor Driver

| L298D Pin | Arduino Pin |
|------------|-------------|
| IN1 - IN4 | Digital Pins |
| ENA / ENB | PWM Pins |

---

##  Technologies Used

- Arduino IDE
- Embedded C/C++
- Robotics
- Sensor Integration
- Autonomous Navigation

---

##  Applications

- Human tracking robots
- Smart surveillance systems
- Educational robotics projects
- Industrial assistance robots
- Autonomous robotic systems

---

##  Project Output

The robot autonomously follows a human/object while maintaining a safe distance and avoiding obstacles.

---

##  Author

**Devansh Khanna**  
B.Tech – Electronics and Communication Engineering (ECE)  
Embedded Systems & Robotics Enthusiast
