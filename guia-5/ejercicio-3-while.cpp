#include <iostream>

int main() {
	int num = 0, factorial = 0, i = 1;

	std::cout << "Ingrese numero: ";
	std::cin >> num;

	factorial = num;

	while (i < num) {
		factorial *= num - i;
		i++;
	}

	std::cout << "El factorial de " << num << " es " << factorial << std::endl;

	return 0;
}