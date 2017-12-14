#include "WPILib.h"
#include "MyHeader.h"

using namespace frc;

// From MyHeader.h
int add(int a, int b) {
    return a + b;
}

class Robot: public IterativeRobot {
public:
   Talon *left_motor;//create pointer
   Talon *right_motor;
   RobotDrive *my_robot;
   joystick *driveStick;
   int left_motor_port = 1, right_motor_port = 2, joystick = 3;

    Robot() { }

    void RobotInit() {
      left_motor = new Talon(left_motor_port);//use constructor
     right_motor = new Talon(right_motor_port);//use constructor
        my_robot = new RobotDrive(left_motor, right_motor);
      driveStick = new joystick(driveStick);
    }

    void DisabledInit() { }
    void AutonomousInit() { }
    void TeleopInit() { }
    void TestInit() { }

    void DisabledPeriodic() { }
    void AutonomousPeriodic() { }
    void TeleopPeriodic() { }
    void TestPeriodic() {
    my_robot->TankDrive(0.5,0.5);//telling the robot to move forwards
     }
};

START_ROBOT_CLASS(Robot)
