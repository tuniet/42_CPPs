#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const WrongAnimal* wrongMeta = new WrongAnimal();
const Animal* j = new Dog();
const Animal* i = new Cat();
const WrongAnimal* wrongI = new WrongCat();
const WrongCat* wrongJ = new WrongCat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound();
j->makeSound();
meta->makeSound();
wrongI->makeSound();
wrongJ->makeSound();
wrongMeta->makeSound();

delete meta;
delete wrongMeta;
delete j;
delete i;
delete wrongI;
delete wrongJ;
return 0;
}