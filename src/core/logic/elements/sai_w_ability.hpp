#ifndef SAI_W_ABILITY_HPP
#define SAI_W_ABILITY_HPP

#include "ability.hpp"

class SaiWAbility: public Ability {        
    public:                        
        SaiWAbility(class Bot* bot);
        bool cast(Coord target) override;
        void update(float ms) override;
        void handleBotCollision(Bot* bot) override;
};

#endif