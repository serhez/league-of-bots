/**
 * Copyright (C) Sergio Hernandez - All Rights Reserved
 * Author: Sergio Hernandez <contact.sergiohernandez@gmail.com>
 * Date  : 30.07.2020
 */

#include "elem.hpp"
#include <cmath>
#include <mutex>
#include <vector>

using namespace adamant::logic::elements;
using namespace adamant::graphics;
using namespace adamant::graphics::elements;

Elem::Elem(ElemType type, bool alive, ConvexPolygon* shape, Coord center, Team team, 
        int bounding_sphere_radius): m_type{type}, m_alive{alive}, m_shape{shape},
        m_team{team}, m_bounding_sphere_radius{bounding_sphere_radius} {
    m_shape->setCenter(center);
}

ElemType Elem::getType() {
    return m_type;
}

bool Elem::isAlive() {
    return m_alive;
}

ConvexPolygon* Elem::getShape() {
    return m_shape;
}

void Elem::setShape(ConvexPolygon* shape) {
    m_shape = shape;
}

Coord Elem::getCenter() {
    return m_shape->getCenter();
}

void Elem::setCenter(Coord center) {
    m_shape->setCenter(center);
}

Team Elem::getTeam() {
    return m_team;
}

int Elem::getBoundingSphereRadius() {
    return m_bounding_sphere_radius;
}

void Elem::setBoundingSphereRadius(int radius) {
    m_bounding_sphere_radius = radius;
}

void Elem::kill() {
    m_alive = false;
}
