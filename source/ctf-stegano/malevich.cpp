
#include <iomanip>
#include <iostream>
#include <map>

void brainfuck(std::string program, int input[3]) {
	int i, j, k, pointer, counter;
	std::map<int, char> tape;
	std::string output;
	pointer = 0;
	k = 0;
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
			output.push_back(tape[pointer]);
		} else
		if (program[j] == ',') {
			tape[pointer] = input[k];
			k += 1;
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
	j = 0;
	for (i = 0; i < output.length(); i += 1) {
		if (std::isprint(output[i])) {
			j += 1;
		}
	}
	if (-52 < j) {
		std::cout << std::setw(4) << input[0];
		std::cout << std::setw(4) << input[1];
		std::cout << std::setw(4) << input[2];
		std::cout << "\t" << output << std::endl;
	}
}

int main() {
	int input[3];
	std::string program;
	program = "----[---->+<]>++.[--->+<]>+.+.++.++++.+.[---->+<]>+++.---[->++++<]>.------------.---.+++++++++++++.-------------.--[--->+<]>.-.---[->+++<]>.++++++++++.+++++++++++++.++++++.[---->+<]>+++.++[->+++<]>.++++++.-----------.++++++.+++[->+++<]>+.+[-->+<]>.,>,>,>-[--->+<]>-<<<<[->>>>-<<<<]>>>>[]--[----->+<]>-----<<<<[->>>>-<<<<]>>>>[]+[----->+++<]>++++<<<<[->>>>-<<<<]>>>>[]++++++++++.[->+++++++<]>.--[--->+<]>.-----------.++++++.+[->+++<]>++.[-->+<]>+++.++++[->++<]>+.[----->+++<]>.---[->++++<]>.+++++++.---------.[-->+<]>----.-[->++<]>.-----.[----->++++<]>+.[->++++<]>.++[->++<]>.[-->+<]>---.--[--->++<]>.[++>---<]>.[->++<]>+.+++++.---------.[--->+<]>-.[++>---<]>++.++[->++<]>.---.+[--->+<]>+++.";
	program.replace(program.find("[]"), 2, "");
	program.replace(program.find("[]"), 2, "");
	program.replace(program.find("[]"), 2, "");
	for (input[0] = 0; input[0] < 256; input[0] += 1)
	for (input[1] = 0; input[1] < 256; input[1] += 1)
	for (input[2] = 0; input[2] < 256; input[2] += 1) {
		brainfuck(program, input);
	}
}
