#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    std::string baseName = name;
    if (N <= 0)
        return NULL;
    Zombie* horde = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        name = baseName;
        name = name + "_" + std::to_string(i + 1);
        horde[i].setName(name);
    }
    return horde;
}