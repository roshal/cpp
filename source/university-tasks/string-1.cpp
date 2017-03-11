
#include <iostream>

void inverse_words(std::string && string) {
	int i, j, l, h;
	std::string symbol;
	for (i = 0; i < string.length(); i += 1) {
		if (std::isalpha(string[i])) {
			l = i;
			do {
				i += 1;
			} while (std::isalpha(string[i]));
			h = (i - l) / 2;
			for (j = 0; j < h; j += 1) {
				std::swap(string[l + j], string[i - j - 1]);
			}
		}
	}
}

void remove_repetition(std::string && string) {
	int i, j;
	for (i = 0; i < string.length(); i += 1) {
		for (j = i + 1; j < string.length(); j += 1) {
			if (string[i] == string[j]) {
				string.replace(j, 1, "");
				j -= 1;
			}
		}
	}
}

std::string get_max_length_word(std::string string) {
	int i, max_length, length, right;
	max_length = 0;
	length = 0;
	right = 0;
	for (i = 0; i < string.length(); i += 1) {
		if (isalpha(string[i])) {
			length += 1;
		} else {
			length = 0;
		}
		if (max_length < length) {
			max_length = length;
			right = i + 1;
		}
	}
	return string.substr(right - max_length, max_length);
}

int main() {
	std::string string, word;
	string = "Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
	word = get_max_length_word(string);
	std::cout << std::endl;
	//
	std::cout << "исходная строка" << std::endl;
	std::cout << string << std::endl;
	std::cout << std::endl;
	//
	std::cout << "слово с наибольшим количеством символов" << std::endl;
	std::cout << word << std::endl;
	std::cout << std::endl;
	//
	std::cout << "инверсия слов" << std::endl;
	inverse_words(string);
	std::cout << std::endl;
	//
	std::cout << "строка" << std::endl;
	std::cout << string << std::endl;
	std::cout << std::endl;
	//
	std::cout << "удаление повторяющихся символов" << std::endl;
	remove_repetition(string);
	std::cout << std::endl;
	//
	std::cout << "строка" << std::endl;
	std::cout << string << std::endl;
	std::cout << std::endl;
}
