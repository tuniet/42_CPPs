#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	AAnimal *dog = new Dog();
	//AAnimal *animal = new AAnimal();

	dog->makeSound();

	delete dog;

	return 0;
}