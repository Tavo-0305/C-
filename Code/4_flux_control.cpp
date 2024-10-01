#include <iostream>

int main(){
	
	std::cout << "Do you want to play a game (y/n): " << std::endl;
	std::string response;
	std::cin >> response;
	std::cout << "You entered: " << response << std::endl;
	
	if(tolower(response[0]) == 'y'){  //we are comparing with a character //tolower is a built in function that converts any char into a lowercase char
		std::cout << "Let's play a game then..." << std::endl;
	}
	else if(tolower(response[0]) == 'n'){
		std::cout << "Maybe another day, bye" << std::endl;
	}
	else{
		std::cout << "Go to hell then" << std::endl;
	}

	return 0;
}
