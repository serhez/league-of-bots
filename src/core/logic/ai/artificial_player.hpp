/**
 * Copyright (C) Sergio Hernandez - All Rights Reserved
 * Author: Sergio Hernandez <contact.sergiohernandez@gmail.com>
 * Date  : 30.07.2020
 */

#ifndef ARTIFICIAL_PLAYER_HPP
#define ARTIFICIAL_PLAYER_HPP

#include <chrono>
#include "../elements/bot.hpp"

namespace adamant {
namespace logic {
namespace ai {

typedef enum ArtificialMovementPolicy {
    random_movement = 0
} ArtificialMovementPolicy;

typedef enum ArtificialAimingPolicy {
    random_aiming = 0
} ArtificialAimingPolicy;

class ArtificialPlayer {
    public:
        ArtificialPlayer(logic::elements::Bot* bot, float update_interval,
                ArtificialMovementPolicy movement_policy, ArtificialAimingPolicy aiming_policy);
        float getUpdateInterval();
        void setUpdateInterval(float update_interval);
        ArtificialMovementPolicy getMovementPolicy();
        void setMovementPolicy(ArtificialMovementPolicy movement_policy);
        ArtificialAimingPolicy getAimingPolicy();
        void setAimingPolicy(ArtificialAimingPolicy aiming_policy);
        void play();

    private:
        logic::elements::Bot* m_bot;
        float m_update_interval;  // In ms
        std::chrono::steady_clock::time_point m_last_played;
        ArtificialMovementPolicy m_movement_policy;
        ArtificialAimingPolicy m_aiming_policy;
        void moveBotRandomly();
        // TODO: add accuracy when implementing ability-casting
};

}  // namespace ai
}  // namespace logic
}  // namespace adamant

#endif
