#include "WrongCat.hpp"

WrongCat::WrongCat() : brain(new Brain()), ownsBrain(true) {
    type = "WrongCat";
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other), brain(other.brain), ownsBrain(false) {
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat() {
    if (ownsBrain)
        delete brain;
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
    if (this != &other) {
        if (ownsBrain)
            delete brain;
        WrongAnimal::operator=(other);
        brain = other.brain;
        ownsBrain = false;
    }
    std::cout << "WrongCat assignment operator called" << std::endl;
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << "WrongCat sound" << std::endl;
}

std::string WrongCat::getIdea(int index) const {
    return brain->getIdea(index);
}

void WrongCat::setIdea(int index, const std::string& idea) {
    brain->setIdea(index, idea);
}