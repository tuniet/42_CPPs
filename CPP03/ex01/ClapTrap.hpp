#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
class ClapTrap
{
public:
    ClapTrap();
    ClapTrap(const ClapTrap& other);
    ClapTrap(const std::string& name);
    ~ClapTrap();
    ClapTrap& operator=(const ClapTrap& other);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    std::string getName() const;
    int getHitPoints() const;
    int getEnergyPoints() const;
    int getAttackDamage() const;
    void setEnergyPoints(int energy);
    void setHitPoints(int hitPoints);
    void setAttackDamage(int attackDamage);

private:
    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;
};

#endif
