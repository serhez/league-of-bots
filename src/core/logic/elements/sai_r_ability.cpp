/**
 * Copyright (C) Sergio Hernandez - All Rights Reserved
 * Author: Sergio Hernandez <contact.sergiohernandez@gmail.com>
 * Date  : 30.07.2020
 */

#include "sai_r_ability.hpp"
#include "bot.hpp"

using namespace adamant::logic::elements;
using namespace adamant::graphics;
using namespace adamant::graphics::elements;

SaiRAbility::SaiRAbility(Bot* bot): Ability(ability_t, false,
        new ConvexPolygon({{0,1}, {1,0}, {1,1}, {0,1}}), {0,0}, bot->getTeam(), bot, 2000, 0) {}

bool SaiRAbility::cast(Coord target) {
    return true; 
}

void SaiRAbility::update(float ms) {

}

void SaiRAbility::handleBotCollision(Bot* bot) {

}
