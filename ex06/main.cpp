#include "main.h"

int	main(int ac, char *av[]) {
	if (ac != 2) {
		std::cerr << "1 argument expected" << std::endl;
		return 1;
	}

	Karen	karen;

	karen.complain(std::string(av[1]));

	return 0;
}