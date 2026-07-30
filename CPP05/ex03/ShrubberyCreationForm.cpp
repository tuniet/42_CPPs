#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("shrubbery creation", 145, 137), _target("target")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
	: AForm(target + " shrubbery creation", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
	: AForm(other), _target(other._target)
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	if (this != &other)
		AForm::operator=(other);
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::action() const
{
	std::ofstream file((_target + "_shrubbery").c_str());

	if (!file.is_open())
	{
		std::cout << "Could not create shrubbery file for " << _target << std::endl;
		return ;
	}
	file << "       ,@@@@@@@,\n";
	file << "   ,@@@@@@@@@@@@@@@\n";
	file << "  @@@@@@@@@@@@@@@@@@@\n";
	file << "    ,@@@@@@@/@@@ @@@@@\n";
	file << "         ||*      \\   \\\n";
	file << "        |||        |,.,\n";
	file << "        ||| ((       ((\n";
	file << "                   (a shrubbery for " << _target << ")\n";
	file.close();
}
