#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const int size = 10;
	Animal* animals[size];

	for (int i = 0; i < size / 2; ++i)
		animals[i] = new Dog();
	for (int i = size / 2; i < size; ++i)
		animals[i] = new Cat();

	for (int i = 0; i < size; ++i)
		animals[i]->makeSound();

	Dog originalDog;
	originalDog.setIdea(0, "chase ball");
	Dog copiedDog(originalDog);
	originalDog.setIdea(0, "eat");
	std::cout << "originalDog idea[0]: " << originalDog.getIdea(0) << std::endl;
	std::cout << "copiedDog idea[0]: " << copiedDog.getIdea(0) << std::endl;

	Cat originalCat;
	originalCat.setIdea(0, "sleep");
	Cat copiedCat;
	copiedCat = originalCat;
	originalCat.setIdea(0, "scratch sofa");
	std::cout << "originalCat idea[0]: " << originalCat.getIdea(0) << std::endl;
	std::cout << "copiedCat idea[0]: " << copiedCat.getIdea(0) << std::endl;

	WrongCat originalWrongCat;
	originalWrongCat.setIdea(0, "fish");
	WrongCat copiedWrongCat(originalWrongCat);
	originalWrongCat.setIdea(0, "bird");
	std::cout << "originalWrongCat idea[0]: " << originalWrongCat.getIdea(0) << std::endl;
	std::cout << "copiedWrongCat idea[0]: " << copiedWrongCat.getIdea(0) << std::endl;

	for (int i = 0; i < size; ++i)
		delete animals[i];

	return 0;
}