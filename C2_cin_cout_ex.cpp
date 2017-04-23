#include <iostream>

using namespace std;

int main() {

	/*
	>> direction of r-value. from console into r-value
	<< direction of r-value. from r-value to console
	*/
	int x;
	std::cout << "Enter a number: ";
	std::cin >> x;
	std::cout << "Variable entered is " << x << endl;
	return 0;

}
