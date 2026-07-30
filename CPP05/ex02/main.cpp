#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat boss("Zaphod", 1);
	Bureaucrat lowGrade("Arthur", 150);

	// Shrubbery: execute without signing -> should fail
	{
		ShrubberyCreationForm form("garden");
		boss.executeForm(form);
	}

	// Shrubbery: sign then execute -> should succeed and create a file
	{
		ShrubberyCreationForm form("home");
		boss.signForm(form);
		boss.executeForm(form);
	}

	// Robotomy: low grade bureaucrat can't sign
	{
		RobotomyRequestForm form("Bender");
		lowGrade.signForm(form);
	}

	// Robotomy: sign and execute with sufficient grade
	{
		RobotomyRequestForm form("Bender");
		boss.signForm(form);
		boss.executeForm(form);
	}

	// Presidential pardon: low grade can't sign or execute
	{
		PresidentialPardonForm form("Rimmer");
		lowGrade.signForm(form);
		lowGrade.executeForm(form);
	}

	// Presidential pardon: full success
	{
		PresidentialPardonForm form("Rimmer");
		boss.signForm(form);
		boss.executeForm(form);
	}

	return (0);
}
