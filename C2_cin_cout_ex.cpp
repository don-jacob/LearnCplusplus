#include <iostream>

using namespace std;

int main() {

	/*
	>> direction of r-value. from console into r-value
	<< direction of r-value. from r-value to console
	*/
	int x;
	std::cout << "[Typing too big a value will cause overflow since integer variable can hold only so much. Try it !!]" << std::endl;
	std::cout << "Enter a number: ";
	std::cin >> x;
	std::cout << "Variable entered is " << x << endl;
	return 0;

}
