#include "Weapon.hpp"

Weapon::Weapon()
{
    type = "Unknown";
}

Weapon::Weapon(std::string weaponType)
{
    type = weaponType;
}

Weapon::~Weapon()
{
}

const std::string& Weapon::getType(void) const
{
    return type;
}

void Weapon::setType(std::string newType)
{
    type = newType;
}