#include "main.h"

void	replace(std::string & str, size_t pos, size_t len,
				std::string const & replace) {
	str.erase(pos, len);
	str.insert(pos, replace);
}

int	main(int ac, char *av[]) {
	if (ac != 4) {
		std::cerr << "3 arguments expected" << std::endl;
		return 1;
	}

	std::string		filename = std::string(av[1]);
	std::string		s1 = std::string(av[2]);
	std::string		s2 = std::string(av[3]);

	std::ifstream	ifs(filename);

	if (!ifs.good()) {
		std::cerr << "file does not exist or read permission not set" << std::endl;
		return 2;
	}

	ifs.seekg(0, std::ios::end);
	size_t size = ifs.tellg();
	std::string buffer(size, ' ');
	ifs.seekg(0);
	ifs.read(&buffer[0], size);
	ifs.close();

	if (!ifs.good()) {
		std::cerr << "file is a directory" << std::endl;
		return 3;
	}

	std::ofstream	ofs(filename + ".replace");

	if (!ofs.good()) {
		std::cerr << "failed to create output file" << std::endl;
		return 4;
	}

	if (!s1.empty()) {
		size_t pos = buffer.find(s1);

		while (std::string::npos != pos) {
			replace(buffer, pos, s1.length(), s2);
			pos = buffer.find(s1);
		}
	}

	ofs << buffer;
	ofs.close();

	return 0;
}