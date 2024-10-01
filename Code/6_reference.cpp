#include <iostream>

int main(){
	int number = 99;
	int &refNumber = number;

	std::cout << "Valor de variable: " << number << " valor de la referencia: " << refNumber << std::endl;
	
	//Puedo cambiar el valor de la variable a la cual esa referencia APUNTA

	refNumber = 100;

	std::cout << "Valor de variable: " << number << " valor de la referencia: " << refNumber << std::endl;

	return 0;

}