#include "Bureaucrat.hpp"

int main()
{
	// valid construction
	try
	{
		Bureaucrat b1("Jean-Michel", 50);
		std::cout << b1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	// grade too high (< 1)
	try
	{
		Bureaucrat b2("Overachiever", 0);
		std::cout << b2 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	// grade too low (> 150)
	try
	{
		Bureaucrat b3("Slacker", 151);
		std::cout << b3 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	// boundaries: 1 and 150 are valid
	try
	{
		Bureaucrat b4("TopDog", 1);
		Bureaucrat b5("BottomDog", 150);
		std::cout << b4 << std::endl;
		std::cout << b5 << std::endl;

		b4.incrementGrade();
		b5.decrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	// increment/decrement normal use
	try
	{
		Bureaucrat b7("Climber", 100);
		b7.incrementGrade();
		std::cout << b7 << std::endl;
		b7.decrementGrade();
		b7.decrementGrade();
		std::cout << b7 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	return (0);
}
