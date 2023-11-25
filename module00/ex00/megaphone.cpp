
#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
	int i;
	int j;

	j = 1;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	while (argc > j){
		i = -1;
		while (argv[j][++i] != '\0')
			argv[j][i] = std::toupper(argv[j][i]);
		std::cout << argv[j];
		j++;
	}
	std::cout << std::endl;
	return (0);
}
