#include <iostream>

int main() {
	int num = 0;

	std::cout << "Ingrese numero: ";
	std::cin >> num;

	std::cout << "Los divisores de " << num << " son:";

	for (int i = 1; i <= num; i++) {
		if ((num % i) == 0) {
			std::cout << " " << i;
		}
	}

	std::cout << std::endl;

	return 0;
}