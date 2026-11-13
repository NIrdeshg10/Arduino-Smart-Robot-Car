
#ifndef SENSOR_H
#define SENSOR_H

// This class reads the sensors on the robot car.
// It helps the car detect and follow a black line.
class Sensor {
private:
    int leftValue;
    int rightValue;

public:
    // Creates the sensor.
    Sensor();

    // Reads the left and right sensors.
    void readSensors();

    // Checks if a black line is detected.
    bool detectLine() const;

    // Returns the left sensor value.
    int getLeftValue() const;

    // Returns the right sensor value.
    int getRightValue() const;
};

#endif
