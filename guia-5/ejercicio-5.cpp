#include <iostream>

int main() {
	int num = 0;

	std::cout << "Ingrese numero: ";
	std::cin >> num;

	for (int i = 2; i < num; i++) {
		if ((num % i) == 0) {
			std::cout << "El numero " << num << " no es primo" << std::endl;
			return 0;
		}
	}

	std::cout << "El numero " << num << " es primo" << std::endl;

	return 0;
}