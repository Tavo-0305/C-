#include <iostream>

int main(){
	int x = 5; //Esta variable tiene algún espacio en memoria
	std::cout << "Variable x tiene un valor de: " << x << "y  una dirección en memoria de: " << &x << std::endl;
	// Definimos un puntero de la siguiente forma:
	int *y = &x;
	std::cout << "El puntero *y es: " << y << " y apunta a la variable con valor: " << *y << std::endl;
	//Realizar la "operación" ¨*y se le conoce como deferenciación
	//Los punteros tienen tipos y hay que respetar el tipo de variable al que se apunta
	//Se puede inicializar un puntero sin ninguna dirección
	int *p = NULL;
	std::cout << p << std::endl;
	return 0;
}