#include <iostream>

int main() {
	setlocale(LC_ALL, "RU");
	enum month 
	{
		������ = 1,
		�������,
		����,
		������,
		���,
		����,
		����,
		������,
		��������,
		�������,
		������,
		�������

	};
	month months;
	int intMonth = 1;

	do {
	
		std::cout << "������� ����� ������: ";
		std::cin >> intMonth;
		months = static_cast<month>(intMonth);
		switch (months) {
		case 1:
			std::cout << "������" << std::endl;
			break;
		case 2:
			std::cout << "�������" << std::endl;
			break;
		case 3:
			std::cout << "����" << std::endl;
			break;
		case 4:
			std::cout << "������" << std::endl;
			break;
		case 5:
			std::cout << "���" << std::endl;
			break;
		case 6:
			std::cout << "����" << std::endl;
			break;
		case 7:
			std::cout << "����" << std::endl;
			break;
		case 8:
			std::cout << "������" << std::endl;
			break;
		case 9:
			std::cout << "��������" << std::endl;
			break;
		case 10:
			std::cout << "�������" << std::endl;
			break;
		case 11:
			std::cout << "������" << std::endl;
			break;
		case 12:
			std::cout << "�������" << std::endl;
			break;
		case 0:
			std::cout << "�� ��������" << std::endl;
			break;
		default:
			std::cout << "������������ �����!" << std::endl;
			break;
		}
	
	} while (intMonth != 0);

	return 0;
}