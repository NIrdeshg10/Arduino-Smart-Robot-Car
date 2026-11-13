# Arduino-Smart-Robot-Car 
## Project Description

For my CIS 35 major project, I am building a Smart Robot Car
using Arduino and C++. The car will use sensors to detect and
follow a black line automatically.

## Main Features

1. Move forward, left, right, and   stop.
2. Detect a black line using sensors.
3. Automatically follow the line.
4. Stop when the line is lost.

## Classes

- RobotCar: Controls the car movement.
- Motor: Controls the motors and speed.
- Sensor: Detects the black line.
- PathFollower: Decides which direction to move.
- CarController: Controls the whole system.

## Class Diagram

**```**mermaid
classDiagram
    class RobotCar {
        -Motor leftMotor
        -Motor rightMotor
        -int speed
        +moveForward() void
        +turnLeft() void
        +turnRight() void
        +stop() void
        +setSpeed(int) void
    }

    class Motor {
        -int speed
        -bool running
        -int motorPin
        +isRunning() bool
        +setSpeed(int) void
        +start() void
        +stop() void
    }

    class Sensor {
        -int leftValue
        -int rightValue
        +readSensors() void
        +detectLine() bool
        +getLeftValue() int
        +getRightValue() int
    }

    class PathFollower {
        -Sensor sensor
        +followLine() void
        +decideDirection() int
    }

    class CarController {
        -RobotCar car
        -PathFollower pathFollower
        -bool active
        +startCar() void
        +update() void
        +stopCar() void
    }

    RobotCar "1" *-- "2" Motor
    PathFollower "1" *-- "1" Sensor
    CarController "1" *-- "1" RobotCar
    CarController "1" *-- "1" PathFollower
**```**