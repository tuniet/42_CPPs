#include "Zombie.hpp"

Zombie::Zombie()
{
    name = "Unnamed";
}
Zombie::Zombie(const std::string& zombieName)
{
    name = zombieName;
}

Zombie::~Zombie()
{
    std::cout << name << " has been destroyed." << std::endl;
}

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
