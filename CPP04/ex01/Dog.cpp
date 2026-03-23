#include "Dog.hpp"

Dog::Dog() {
    type = "Dog";
    brain = new Brain();
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
    brain = new Brain(*other.brain);
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog() {
    delete brain;
    std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {
        Animal::operator=(other);
        *brain = *other.brain;
    }
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Woof" << std::endl;
}

std::string Dog::getIdea(int index) const {
    return brain->getIdea(index);
}

void Dog::setIdea(int index, const std::string& idea) {
    brain->setIdea(index, idea);
}