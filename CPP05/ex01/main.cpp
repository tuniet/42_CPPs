#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	// invalid form construction
	try
	{
		Form badForm("BadForm", 0, 200);
	}
	catch (std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	// valid form + signing with sufficient grade
	try
	{
		Bureaucrat highGrade("Boss", 1);
		Form form1("TaxForm", 50, 25);
		std::cout << form1 << std::endl;
		highGrade.signForm(form1);
		std::cout << form1 << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	// signing with insufficient grade
	try
	{
		Bureaucrat lowGrade("Intern", 100);
		Form form2("SecretForm", 10, 5);
		lowGrade.signForm(form2);
		std::cout << form2 << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	return (0);
}
