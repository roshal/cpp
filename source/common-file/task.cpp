
#include <fstream>
#include <iostream>

#include "./common"

int main() {
	std::fstream stream;
	std::string buffer;
	std::cout << std::endl;
	//
	stream.open("file.txt", std::ios_base::out);
	stream << "text";
	stream.close();
	//
	stream.open("file.txt", std::ios_base::in);
	stream >> buffer;
	stream.close();
	//
	std::cout << buffer << std::endl;
}
