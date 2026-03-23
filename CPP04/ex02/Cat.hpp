#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
public:
    Cat();
    Cat(const Cat& other);
    ~Cat();
    Cat& operator=(const Cat& other);
    void makeSound() const;
    std::string getIdea(int index) const;
    void setIdea(int index, const std::string& idea);
private:
    Brain* brain;
};

#endif