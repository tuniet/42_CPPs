#include <iostream>
#include <string>

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class Zombie
{
private:
    std::string name;
public:
    Zombie(std::string zombieName);
    Zombie();
    ~Zombie();
    void setName(std::string newName);
    void announce(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif