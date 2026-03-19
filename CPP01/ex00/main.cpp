#include "Zombie.hpp"


int main()
{
    Zombie* zombie1 = newZombie("Zombie1");
    Zombie* zombie2 = newZombie("Zombie2");
    Zombie* zombie3 = newZombie("Zombie3");

    randomChump("RandomChump");

    zombie1->announce();
    zombie2->announce();
    zombie3->announce();

    delete zombie1;
    delete zombie2;
    delete zombie3;

    return 0;
}
