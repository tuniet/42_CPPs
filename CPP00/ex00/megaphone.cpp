#include <iostream>
#include <cctype>

void	to_upper(char **str)
{
	int i;

	i = 0;
	while ((*str)[i])
	{
		if ((*str)[i] >= 'a' && (*str)[i] <= 'z')
			(*str)[i] = std::toupper((*str)[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)		
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 1;
		while (argv[i])
		{
			to_upper(&argv[i]);
			std::cout << argv[i];
			i++;
		}
		std::cout << "\n";
	}
	return (0);
}