#include "Cat.hpp"

Cat::Cat() {
    type = "Cat";
    brain = new Brain();
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : AAnimal(other) {
    brain = new Brain(*other.brain);
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat() {
    delete brain;
    std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        AAnimal::operator=(other);
        *brain = *other.brain;
    }
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Meow" << std::endl;
}

std::string Cat::getIdea(int index) const {
    return brain->getIdea(index);
}

void Cat::setIdea(int index, const std::string& idea) {
    brain->setIdea(index, idea);
}