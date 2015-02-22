/* 
This program generates a field of asterisks in the terminal by 
taking a Height and Width as input and doing a few for loops to print the asterisks to the terminal.
This is a very very early test to see if I can make a terminal map rendering thing.
*/

#include <iostream>

/* 
The horizontal function is essentially a for loop that goes around printing
as many asterisks as the variable "width" says.
*/

int horizontal(int width) { 
	for(int n=0; n < width; n++) {
		std::cout << "*";
	}
	return 0;
}

/* 
The vertical function is similar to the horizontal function, it will loop 
around calling the horizontal function and prints a new line for as many lines
as the variable "height" says. 
*/

int vertical(int height, int width) { 
	for (int n=0; n < height; n++) {   
		horizontal(width); 
		std::cout << "\n";
	}
	return 0;
}

int main() {
	int h,w;
	std::cout << "Width: ";
	std::cin >> w;
	std::cout << "Height: ";
	std::cin >> h;
	std::cout << "\n";
	vertical(h,w);		//This calls the vertical function which in turn calls the horizontal function
	return 0;
}