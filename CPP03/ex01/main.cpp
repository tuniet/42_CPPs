#include "ScavTrap.hpp"

int main()
{
    ScavTrap* scav = new ScavTrap("Scavvy");

    scav->attack("Target1");
    scav->takeDamage(5);
    scav->beRepaired(3);
    scav->takeDamage(10);
    scav->beRepaired(5);
    scav->guardGate();

    ClapTrap clap("Clappy");
    clap.attack("Target2");
    clap.takeDamage(3);
    clap.takeDamage(8);
    clap.beRepaired(2);
    
    delete scav;
    return 0;
}