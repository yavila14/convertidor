#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float celsiu;
	float far,kel;
	std::cout << "Digite temperatura en Celsius ==>";
	std::cin >>celsiu;
	far=(celsiu*9/5)+32;
	std::cout << "Estos son los grados en Fahrenheit " <<far <<"\n";
	kel=celsiu+273.15;
	std::cout << "Estos son los grados en Kelvin " <<kel <<"\n";
	return 0;
}
