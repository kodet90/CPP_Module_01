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
	void	(Karen::*functions[])() = {
			&Karen::debug,
			&Karen::info,
			&Karen::warning,
			&Karen::error,
			&Karen::ignore
	};

	std::string	levels[] = {
			"DEBUG",
			"INFO",
			"WARNING",
			"ERROR"
	};

	int i = 0;
	for (; level != levels[i] && i < 4; i++);
	(this->*(functions[i]))();
}

void	Karen::debug() {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-"
				 "pickle-special- ketchup burger. I really do!" << std::endl;
}

void	Karen::info() {
	std::cout << "I cannot believe adding extra bacon costs more money. You "
				 "didn’t put enough bacon in my burger! If you did, I wouldn’t "
				 "be asking for more!" << std::endl;
}

void	Karen::warning() {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve "
				 "been coming for years whereas you started working here since "
				 "last month." << std::endl;
}

void	Karen::error() {
	std::cout << "This is unacceptable! I want to speak to the manager now."
	<< std::endl;
}

void	Karen::ignore() {

}