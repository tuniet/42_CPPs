#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap* frag = new FragTrap("Fraggy");

    frag->attack("Target1");
    frag->takeDamage(5);
    frag->beRepaired(3);
    frag->takeDamage(10);
    frag->beRepaired(5);
    frag->highFivesGuys();

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
    delete frag;
    return 0;
}