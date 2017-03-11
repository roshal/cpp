
#include <iostream>
#include <fstream>

namespace common {
	namespace print {
		void commands() {
			std::cout << "доступные команды" << std::endl;
			std::cout << "0 - выход" << std::endl;
			std::cout << "1 - создать справочник факультетов" << std::endl;
			std::cout << "2 - создать справочник специальностей" << std::endl;
			std::cout << "3 - создать справочник студентов" << std::endl;
			std::cout << "4 - создать выборку по номеру специальности" << std::endl;
		}
		void wrong() {
			std::cout << "неверный номер команды" << std::endl;
		}
		void wrong() {
			std::cout << "введите " << std::endl;
		}
	}
	namespace input {
		std::string command() {
			std::string command;
			std::cout << "введите номер команды" << std::endl;
			std::cin >> command;
		}
	}
	namespace create {
		void faculties() {
			std::fstream stream;
			stream.open("database/faculties.dat", std::ios_base::out);
			while (true) {
				stream << "text";
			}
			stream.close();
		}
		void specialties() {
			std::fstream stream;
			stream.open("database/specialties.dat", std::ios_base::out);
			while (true) {
				stream << "text";
			}
			stream.close();
		}
		void students() {
			std::fstream stream;
			stream.open("database/students.dat", std::ios_base::out);
			while (true) {
				stream << "text";
			}
			stream.close();
		}
		void learning() {
			std::fstream stream, specialty_id;
			std::cout << "ведите код специальности" << std::endl;
			std::cin >> specialty_id;
			common::create::education();
			common::create::education();
			std::cout << "доступные специальности" << std::endl;
			stream.open("database/learning.dat", std::ios_base::out);
			while (true) {
				stream << "text";
			}
			stream.close();
		}
	}
}
