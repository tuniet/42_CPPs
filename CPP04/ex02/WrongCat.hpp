#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include "Brain.hpp"

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(const WrongCat& other);
    ~WrongCat();
    WrongCat& operator=(const WrongCat& other);
    void makeSound() const;
    std::string getIdea(int index) const;
    void setIdea(int index, const std::string& idea);
private:
    Brain* brain;
    bool ownsBrain;
};

#endif