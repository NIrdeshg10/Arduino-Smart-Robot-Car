
#ifndef MOTOR_H
#define MOTOR_H

// This class controls the speed and movement of a motor.
// It can start, stop, and change the motor speed.
class Motor {
private:
    int speed;
    bool running;
    int motorPin;

public:
    // Creates a motor.
    Motor();

    // Changes the speed of the motor.
    void setSpeed(int newSpeed);

    // Starts the motor.
    void start();

    // Stops the motor.
    void stop();

    // Checks if the motor is running.
    bool isRunning() const;
};

#endif
