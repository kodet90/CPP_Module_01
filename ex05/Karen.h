#ifndef CPP_MODULE_01_KAREN_H
#define CPP_MODULE_01_KAREN_H
#include <iostream>

class Karen {

public:
	Karen();
	Karen(Karen const & karen);
	virtual ~Karen();
	Karen &	operator=(Karen const & karen);

	void	complain(std::string level);

private:
	void	debug();
	void	info();
	void	warning();
	void	error();
	void	ignore();

};

#endif //CPP_MODULE_01_KAREN_H
