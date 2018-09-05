#include <iostream>

int main() {
	int num = 0, factorial = 0;

	std::cout << "Ingrese numero: ";
	std::cin >> num;

	factorial = num;

	for (int i = 1; i < num; i++) {
		factorial *= num - i;
	}

	std::cout << "El factorial de " << num << " es " << factorial << std::endl;

	return 0;
}