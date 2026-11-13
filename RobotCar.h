
#ifndef ROBOTCAR_H
#define ROBOTCAR_H

#include "Motor.h"

// This class controls the movement of the robot car.
// It uses two motors to move forward, turn, and stop.
class RobotCar {
private:
    Motor leftMotor;
    Motor rightMotor;
    int speed;

public:
    // Creates the robot car.
    RobotCar();

    // Moves the car forward.
    void moveForward();

    // Turns the car left.
    void turnLeft();

    // Turns the car right.
    void turnRight();

    // Stops the car.
    void stop();

    // Changes the speed of the car.
    void setSpeed(int newSpeed);
};

#endif
