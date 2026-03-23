#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap* diamond = new DiamondTrap("Diamondy");
    diamond->attack("Target1");
    diamond->takeDamage(5);
    diamond->beRepaired(3);
    diamond->whoAmI();

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
    
    delete diamond;
    delete scav;
    delete frag;
    return 0;
}