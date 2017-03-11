
#include <iostream>
#include <map>

void brainfuck(std::string program) {
	int i, j, pointer, counter;
	std::map<int, char> tape;
	pointer = 0;
	for (i = 0, j = 0; i < 65536 & j < program.length(); i += 1, j += 1) {
		if (program[j] == '>') {
			pointer += 1;
		} else
		if (program[j] == '<') {
			pointer -= 1;
		} else
		if (program[j] == '+') {
			tape[pointer] += 1;
		} else
		if (program[j] == '-') {
			tape[pointer] -= 1;
		} else
		if (program[j] == '.') {
			std::cout << tape[pointer];
		} else
		if (program[j] == ',') {
			std::cin >> tape[pointer];
		} else
		if (program[j] == '[') {
			if (tape[pointer] == 0) {
				counter = 1;
				while (0 < counter) {
					j += 1;
					if (program[j] == '[') {
						counter += 1;
					} else
					if (program[j] == ']') {
						counter -= 1;
					}
				}
			}
		} else
		if (program[j] == ']') {
			if (tape[pointer] != 0) {
				counter = 1;
				while (0 < counter) {
					j -= 1;
					if (program[j] == '[') {
						counter -= 1;
					} else
					if (program[j] == ']') {
						counter += 1;
					}
				}
			}
		}
	}
}

int main() {
	std::string program;
	program = "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++.+++++++++++++++++++++++++++++.+++++++..+++.-------------------------------------------------------------------------------.+++++++++++++++++++++++++++++++++++++++++++++++++++++++.++++++++++++++++++++++++.+++.------.--------.-------------------------------------------------------------------.-----------------------.";
	brainfuck(program);
}
