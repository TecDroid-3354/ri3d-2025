//
// Created by ayimany on 1/5/25.
//

#ifndef DRIVETRAIN_HH
#define DRIVETRAIN_HH

#include <ctre/phoenix/motorcontrol/can/WPI_VictorSPX.h>
#include <frc2/command/SubsystemBase.h>

using ctre::phoenix::motorcontrol::can::WPI_VictorSPX;

namespace tecdroid
{
    class drivetrain final : public frc2::SubsystemBase
    {
    public:
        explicit drivetrain(
            std::uint8_t front_right_id,
            std::uint8_t front_left_id,
            std::uint8_t back_left_id,
            std::uint8_t back_right_id
        );

        auto drive(double x_power, double omega_power) -> void;

    private:
        WPI_VictorSPX front_right_;
        WPI_VictorSPX front_left_;
        WPI_VictorSPX back_left_;
        WPI_VictorSPX back_right_;
    };
}

#endif //DRIVETRAIN_HH
