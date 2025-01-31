// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "robot.hh"
#include "constants/drive_constants.hh"
#include "constants/controller_constants.hh"

#include <frc2/command/CommandScheduler.h>
#include <frc2/command/Commands.h>

namespace tecdroid
{
    robot::robot()
        : autonomousCommand_(std::nullopt)
        , controller_(constants::controller_port)
        , drivetrain_(constants::front_right_motor_id,
                      constants::front_left_motor_id,
                      constants::back_left_motor_id,
                      constants::back_right_motor_id)
    {
    }

    void robot::RobotPeriodic()
    {
        frc2::CommandScheduler::GetInstance().Run();
    }

    void robot::DisabledInit()
    {
    }

    void robot::DisabledPeriodic()
    {
    }

    void robot::DisabledExit()
    {
    }

    void robot::AutonomousInit()
    {
    }

    void robot::AutonomousPeriodic()
    {
    }

    void robot::AutonomousExit()
    {
    }

    void robot::TeleopInit()
    {
        drivetrain_.SetDefaultCommand(frc2::cmd::Run([this]()
        {
            drivetrain_.drive(-controller_.GetLeftY(), controller_.GetRightX());
        }));
    }

    void robot::TeleopPeriodic()
    {
    }

    void robot::TeleopExit()
    {
    }

    void robot::TestInit()
    {
        frc2::CommandScheduler::GetInstance().CancelAll();
    }

    void robot::TestPeriodic()
    {
    }

    void robot::TestExit()
    {
    }
}
