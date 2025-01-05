// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "robot.hh"

#include <frc2/command/CommandScheduler.h>

namespace tecdroid
{
robot::robot() {}

void robot::RobotPeriodic() {
    frc2::CommandScheduler::GetInstance().Run();
}

void robot::DisabledInit() {}

void robot::DisabledPeriodic() {}

void robot::DisabledExit() {}

void robot::AutonomousInit() {
}

void robot::AutonomousPeriodic() {}

void robot::AutonomousExit() {}

void robot::TeleopInit() {
}

void robot::TeleopPeriodic() {}

void robot::TeleopExit() {}

void robot::TestInit() {
    frc2::CommandScheduler::GetInstance().CancelAll();
}

void robot::TestPeriodic() {}

void robot::TestExit() {}
}