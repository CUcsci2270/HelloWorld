#include <iostream>

int main() {
	int input = 1;
	std::cout<<"Enter a number\n";
	std::cin>>input;
	std::cout<<"Hell";
	for(int i=0; i<input; i++)
		std::cout<<"o";
	std::cout<<std::endl;
	return 0;
}
