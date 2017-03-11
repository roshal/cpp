
#include <iostream>

std::string upper_words(std::string string) {
	int i;
	for (i = 1; i < string.length(); i += 1) {
		if (std::isspace(string[i - 1]) && std::islower(string[i])) {
			string[i] = toupper(string[i]);
		}
	}
	return string;
}

bool is_hex(std::string && string) {
	int i;
	for (i = 0; i < string.length(); i += 1) {
		if (0
		|| string[i] < 48
		|| 57 < string[i] && string[i] < 65
		|| 70 < string[i] && string[i] < 97
		|| 102 < string[i]
	) {
			return false;
		}
	}
	return true;
}

int main() {
	std::string string;
	//
	string = "Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
	//
	std::cout << "исходная строка" << std::endl;
	std::cout << string << std::endl;
	std::cout << std::endl;
	//
	std::cout << "замена первых букв каждого слова со строчной на заглавную" << std::endl;
	string = upper_words(string);
	std::cout << std::endl;
	//
	std::cout << "новая строка" << std::endl;
	std::cout << string << std::endl;
	std::cout << std::endl;
	//
	string = "0123456789abcdefABCDEF";
	//
	std::cout << "исходная строка" << std::endl;
	std::cout << string << std::endl;
	std::cout << std::endl;
	//
	std::cout << "является ли строка представлением числа в шестнадцатеричной системе счисления" << std::endl;
	if (is_hex(string)) {
		std::cout << "да" << std::endl;
	} else {
		std::cout << "нет" << std::endl;
	}
	std::cout << std::endl;
	//
	string = "0123456789abcdefABCDEFgh";
	//
	std::cout << "исходная строка" << std::endl;
	std::cout << string << std::endl;
	std::cout << std::endl;
	//
	std::cout << "является ли строка представлением числа в шестнадцатеричной системе счисления" << std::endl;
	if (is_hex(string)) {
		std::cout << "да" << std::endl;
	} else {
		std::cout << "нет" << std::endl;
	}
	std::cout << std::endl;
}
