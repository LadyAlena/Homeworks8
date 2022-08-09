#include <iostream> 
#include <stdexcept>
#include <string>

class bad_lenght : std::exception {
	public:
		const char* what() const override { return "�� ����� ����� ��������� �����! �� ��������"; }
};

class incorrect_length : std::exception {
public:
	const char* what() const override { return "����� ������ �� ����� ���� ������ ��� ����� ����! ��������� ����"; }
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
		std::cout << "������� ��������� �����: ";
		std::getline(std::cin, ForbiddenLengthInput);

		try {

			forbidden_length = std::stoi(ForbiddenLengthInput, &pos);

			if (ForbiddenLengthInput.size() != pos) {
				throw std::invalid_argument("����� ������� ������ �����! ��������� ����");
			}

			if (forbidden_length <= 0) {
				throw incorrect_length();
			}

			swh = false;
		}
		catch (std::invalid_argument) {
			std::cout << "����� ������� ������ �����! ��������� ����" << std::endl;
			continue;
		}
		catch (std::out_of_range) {
			std::cout << "����� ������� �������! ��������� ����" << std::endl;
			continue;
		}
		catch (incorrect_length& ex) {
			std::cout << ex.what() << std::endl;
			continue;
		}
		catch (std::exception& ex) {
			std::cout << "��������� ������: " << ex.what() << " ��������� ����" << std::endl;
			continue;
		}
		catch (...) {
			std::cout << "��������� ������! ��������� ����" << std::endl;
			continue;
		}

	} while (swh);

	do {
		swh = true;

		std::cout << "������� �����: ";
		std::getline(std::cin, str);
	
		try {

			std::cout << "����� ����� " << "\"" << str << "\"" << " ����� " << function(str, forbidden_length) << std::endl;

		}
		catch (bad_lenght& ex) {

			std::cout << ex.what() << std::endl;

			swh = false;
		}
		catch (std::exception& ex) {
			std::cout << "��������� ������: " << ex.what() << " ��������� ����" << std::endl;
			continue;
		}
		catch (...) {
			std::cout << "��������� ������! ��������� ����" << std::endl;
			continue;
		}

	} while (swh);

	return 0;
}