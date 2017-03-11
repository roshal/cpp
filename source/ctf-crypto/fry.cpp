
#include <fstream>
#include <iostream>

int main() {
	std::fstream stream;
	std::string buffer;
	std::cout << std::endl;
	//
	//	stream.open("file.txt", std::ios_base::out);
	//	stream << "text";
	//	stream.close();
	//
	stream.open("encrypted.txt", std::ios_base::in);
	stream >> buffer;
	stream.close();
	//
	std::cout << "_" << buffer << "_" << std::endl;
	std::cout << "_" << buffer.length() << "_" << std::endl;
}
