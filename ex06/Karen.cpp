#include "Karen.h"

Karen::Karen() {

}

Karen::Karen(Karen const & karen) {
	*this = karen;
}

Karen::~Karen() {

}

Karen &	Karen::operator=(Karen const & karen) {
	if (this != &karen) {

	}
	return *this;
}

void	Karen::complain(std::string level) {
	std::string	levels[] = {
			"DEBUG",
			"INFO",
			"WARNING",
			"ERROR"
	};

	int i = 0;
	for (; level != levels[i] && i < 4; i++);
	switch (i) {
		case 0: this->debug();
		case 1: this->info();
		case 2: this->warning();
		case 3: this->error();
		break;
		default: std::cout << "[ Probably complaining about "
							  "insignificant problems ]" << std::endl;
	}
}

void	Karen::debug() {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-"
				 "pickle-special- ketchup burger. I really do!" << std::endl;
	std::cout << std::endl;
}

void	Karen::info() {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You "
				 "didn’t put enough bacon in my burger! If you did, I wouldn’t "
				 "be asking for more!" << std::endl;
	std::cout << std::endl;
}

void	Karen::warning() {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve "
				 "been coming for years whereas you started working here since "
				 "last month." << std::endl;
	std::cout << std::endl;
}

void	Karen::error() {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now."
	<< std::endl;
	std::cout << std::endl;
}
