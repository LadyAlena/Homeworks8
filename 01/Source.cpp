#include <iostream> 
#include <stdexcept>
#include <string>

class bad_lenght : std::exception {
	public:
		const char* what() const override { return "Вы ввели слово запретной длины! До свидания"; }
};

class incorrect_length : std::exception {
public:
	const char* what() const override { return "Длина строки не может быть меньше или равна нулю! Повторите ввод"; }
};

int function(std::string str, int forbidden_length) {

	if (str.length() == forbidden_length) {
		throw bad_lenght();
	}

	return str.length();
}

int main(int argc, char** argv) {

#ifdef _WIN32
	system("chcp 1251");
#endif

	std::string str;

	std::string ForbiddenLengthInput;
	int forbidden_length = 0;
	size_t pos = 0;

	bool swh = true;

	do {
		std::cout << "Введите запретную длину: ";
		std::getline(std::cin, ForbiddenLengthInput);

		try {

			forbidden_length = std::stoi(ForbiddenLengthInput, &pos);

			if (ForbiddenLengthInput.size() != pos) {
				throw std::invalid_argument("Можно вводить только число! Повторите ввод");
			}

			if (forbidden_length <= 0) {
				throw incorrect_length();
			}

			swh = false;
		}
		catch (std::invalid_argument) {
			std::cout << "Можно вводить только число! Повторите ввод" << std::endl;
			continue;
		}
		catch (std::out_of_range) {
			std::cout << "Число слишком большое! Повторите ввод" << std::endl;
			continue;
		}
		catch (incorrect_length& ex) {
			std::cout << ex.what() << std::endl;
			continue;
		}
		catch (std::exception& ex) {
			std::cout << "Произошла ошибка: " << ex.what() << " Повторите ввод" << std::endl;
			continue;
		}
		catch (...) {
			std::cout << "Произошла ошибка! Повторите ввод" << std::endl;
			continue;
		}

	} while (swh);

	do {
		swh = true;

		std::cout << "Введите слово: ";
		std::getline(std::cin, str);
	
		try {

			std::cout << "Длина слова " << "\"" << str << "\"" << " равна " << function(str, forbidden_length) << std::endl;

		}
		catch (bad_lenght& ex) {

			std::cout << ex.what() << std::endl;

			swh = false;
		}
		catch (std::exception& ex) {
			std::cout << "Произошла ошибка: " << ex.what() << " Повторите ввод" << std::endl;
			continue;
		}
		catch (...) {
			std::cout << "Произошла ошибка! Повторите ввод" << std::endl;
			continue;
		}

	} while (swh);

	return 0;
}