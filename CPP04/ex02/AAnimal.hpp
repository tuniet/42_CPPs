#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>

class AAnimal
{
public:
    AAnimal();
    AAnimal(const AAnimal& other);
    virtual ~AAnimal();
    AAnimal& operator=(const AAnimal& other);
    virtual void makeSound() const = 0;
    std::string getType() const { return type; }
protected:
    std::string type;
};

#endif