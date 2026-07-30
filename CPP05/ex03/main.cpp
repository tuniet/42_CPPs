#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "AForm.hpp"

int main()
{
	Intern intern;
	Bureaucrat boss("Zaphod", 1);

	AForm* form1 = intern.makeForm("shrubbery creation", "garden");
	if (form1)
	{
		boss.signForm(*form1);
		boss.executeForm(*form1);
		delete form1;
	}

	AForm* form2 = intern.makeForm("robotomy request", "Bender");
	if (form2)
	{
		boss.signForm(*form2);
		boss.executeForm(*form2);
		delete form2;
	}

	AForm* form3 = intern.makeForm("presidential pardon", "Rimmer");
	if (form3)
	{
		boss.signForm(*form3);
		boss.executeForm(*form3);
		delete form3;
	}

	AForm* form4 = intern.makeForm("time travel authorization", "Marty");
	if (form4)
		delete form4;

	return (0);
}
