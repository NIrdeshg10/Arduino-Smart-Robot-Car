
#ifndef PATHFOLLOWER_H
#define PATHFOLLOWER_H

#include "Sensor.h"

// This class helps the robot car follow a black line.
// It uses sensor readings to decide which direction to move.
class PathFollower {
private:
    Sensor sensor;

public:
    // Creates the path follower.
    PathFollower();

    // Checks the sensor and follows the black line.
    void followLine();

    // Decides which direction the car should move.
    int decideDirection();
};

#endif
