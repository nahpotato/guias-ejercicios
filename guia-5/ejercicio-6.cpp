#include <iostream>
#include <string>

int main() {
	int cantVocales = 0;
	std::string palabra = "";

	std::cout << "Ingrese una palabra en minusculas: ";
	std::cin >> palabra;

	for (unsigned int i = 0; i < palabra.size(); i++) {
		if (palabra[i] == 'a' || palabra[i] == 'e' ||
			palabra[i] == 'i' || palabra[i] == 'o' ||
			palabra[i] == 'u') {
			cantVocales++;
		}
	}

	std::cout << "La palabra " << palabra << " contiene:" << std::endl;
	std::cout << cantVocales << " vocales" << std::endl;
	std::cout << palabra.size() - cantVocales << " consonantes" << std::endl;

	return 0;
}
