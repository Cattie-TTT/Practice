#include <iostream>

int main();

int main() {
	double x{};
	
	std::cout << "Enter value of x: ";
	std::cin >> x;
	
	// This local variable should hold the result of stair( x )
	int stair{};
	
	// TASK: write code that calculates an integer value
	// corresponding to the value of the function stair( x ) here

	if(x >= 0){
		int y = 0;
		for(;y <=x; ++y){
		
			
		
		}

		stair = y - 1;

	}else {
		int y = 0;
		for (; y>x; --y){}
		stair = y;
	}

	std::cout << "The value of stair(x) is: ";
	std::cout << stair;
	std::cout << std::endl;

	
	
	return 0;
}