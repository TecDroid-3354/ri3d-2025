//
// Created by ayimany on 1/5/25.
//

#include "drivetrain.hh"

namespace tecdroid
{
    drivetrain::drivetrain(const std::uint8_t front_right_id, const std::uint8_t front_left_id,
                           const std::uint8_t back_left_id, const std::uint8_t back_right_id)
        : front_right_(front_right_id)
        , front_left_(front_left_id)
        , back_left_(back_left_id)
        , back_right_(back_right_id)
    {
        front_right_.SetInverted(true);
        front_left_.SetInverted(false);
        back_right_.Follow(front_right_);
        back_left_.Follow(front_left_);
    }

    auto drivetrain::drive(const double x_power, const double omega_power) -> void
    {
        front_right_.Set(x_power + omega_power);
        back_right_.Set(x_power - omega_power);
    }
}
