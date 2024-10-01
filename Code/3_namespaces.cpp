#include <iostream>

namespace A{

	int var = 3;
	void greet(){
		std::cout << "Hello World!" << std::endl;
	};
}

namespace B{

	int var = 4;
	void greet(){
		std::cout << "Hello People!" << std::endl;
	};
}

int main(){

	std::cout << "variable en A = " << A::var << std::endl;
	A::greet();
	std::cout << "variable en B = " << B::var << std::endl;
	B::greet();

	return 0;	
}