#include <iostream>

int main() {
	setlocale(LC_ALL, "ru_RU");
	enum month 
	{
		Январь = 1,
		Февраль,
		Март,
		Апрель,
		Май,
		Июнь,
		Июль,
		Август,
		Сентябрь,
		Октябрь,
		Ноябрь,
		Декабрь

	};
	month months;
	int intMonth = 1;

	do {
	
		std::cout << "Введите номер месяца: ";
		std::cin >> intMonth;
		months = static_cast<month>(intMonth);
		switch (months) {
		case month::Январь:
			std::cout << "Январь" << std::endl;
			break;
		case month::Февраль:
			std::cout << "Февраль" << std::endl;
			break;
		case month::Март:
			std::cout << "Март" << std::endl;
			break;
		case month::Апрель:
			std::cout << "Апрель" << std::endl;
			break;
		case month::Май:
			std::cout << "Май" << std::endl;
			break;
		case month::Июнь:
			std::cout << "Июнь" << std::endl;
			break;
		case month::Июль:
			std::cout << "Июль" << std::endl;
			break;
		case month::Август:
			std::cout << "Август" << std::endl;
			break;
		case month::Сентябрь:
			std::cout << "Сентябрь" << std::endl;
			break;
		case month::Октябрь:
			std::cout << "Октябрь" << std::endl;
			break;
		case month::Ноябрь:
			std::cout << "Ноябрь" << std::endl;
			break;
		case month::Декабрь:
			std::cout << "Декабрь" << std::endl;
			break;
		case 0:
			std::cout << "До свидания" << std::endl;
			break;
		default:
			std::cout << "Неправильный номер!" << std::endl;
			break;
		}
	
	} while (intMonth != 0);

	return 0;
}