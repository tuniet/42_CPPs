#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
public:
    Brain();
    Brain(const Brain& other);
    ~Brain();
    Brain& operator=(const Brain& other);
    std::string getIdea(int index) const;
    void setIdea(int index, const std::string& idea);
private:
    std::string ideas[100];
};

#endif