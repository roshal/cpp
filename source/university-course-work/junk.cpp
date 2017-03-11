
#include <iostream>

int main() {
	std::string command;
	do {
		std::cin >> command;
		if (command == "") {
			std::cout << "доступные команды" << std::endl;
			std::cout << "0 - выход" << std::endl;
			std::cout << "1 - создать справочник факультетов" << std::endl;
			std::cout << "2 - создать справочник специальностей" << std::endl;
			std::cout << "3 - создать справочник студентов" << std::endl;
			std::cout << "4 - создать выборку по номеру специальности" << std::endl;
		}
		if (command == "0") {
			//	break;
		}
		if (command == "1") {
			//	common::create::faculties();
		} else
		if (command == "2") {
			//	common::create::specialties();
		} else
		if (command == "3") {
			//	common::create::students();
		} else
		if (command == "4") {
			//	std::fstream stream;
			//	common::create::learning();
		} else {
			std::cout << "введенной Команды нет среди доступных" << std::endl;
		}
	} while (command != "0");
}
