#include <iostream>

using namespace std;

// Definition of fuction doPrint()
void doPrint() {

	//this is the callee or the called function.
	cout << "In doPrint()" << endl;

}

int main() {

	doPrint(); //main() is the caller for function doPrint();

}

