#include <iostream>
#include <string> //this library let us work with strings

int main(){
	std::cout << "What is your name?" << std::endl;
	std::string name;
	std::cin >> name;
	std::cout << "Your name is " << name << "." << std::endl;
	return 0;
}