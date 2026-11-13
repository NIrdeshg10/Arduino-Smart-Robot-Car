
#ifndef CARCONTROLLER_H
#define CARCONTROLLER_H

#include "RobotCar.h"
#include "PathFollower.h"

// This class controls the whole robot car.
// It connects the motors and sensors to help the car
// follow a black line automatically.
class CarController {
private:
    // Stores the robot car.
    RobotCar car;

    // Helps the car follow the path.
    PathFollower pathFollower;

    // Checks if the car is active.
    bool active;

public:
    // Creates the car controller.
    CarController();

    // Starts the robot car.
    void startCar();

    // Reads the sensors and updates the car movement.
    void update();

    // Stops the robot car.
    void stopCar();
};

#endif
