/**
 * Copyright (C) Sergio Hernandez - All Rights Reserved
 * Author: Sergio Hernandez <contact.sergiohernandez@gmail.com>
 * Date  : 30.07.2020
 */

#include "sai_w_ability.hpp"
#include "bot.hpp"

using namespace adamant::logic::elements;
using namespace adamant::graphics;
using namespace adamant::graphics::elements;

SaiWAbility::SaiWAbility(Bot* bot): Ability(ability_t, false,
        new ConvexPolygon({{0,1}, {1,0}, {1,1}, {0,1}}), {0,0}, bot->getTeam(), bot, 2000, 0) {}

bool SaiWAbility::cast(Coord target) {
    return true; 
}

void SaiWAbility::update(float ms) {

}

void SaiWAbility::handleBotCollision(Bot* bot) {

}

