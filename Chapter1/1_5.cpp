#include <iostream>

int main() {
	int v1 = 0, v2 = 0;

	std::cout << "Enter two numbers:" << std::endl;
	std::cin >> v1 >> v2;
	std::cout << "The product of " ;
	std::cout << v1 ; 
	std::cout << "*" ;
	std::cout << v2 ;
	std::cout << "=" ;
	std::cout<< v1 * v2 << std::endl;
	return 0;
}