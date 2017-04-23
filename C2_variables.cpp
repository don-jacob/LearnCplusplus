#include <iostream>

int main() {

	//variable decralaration
	int x;
	//variable assignment
	//x: l-value. The object on the left which you can assign things to.
	//4: r-value. The object on the right which you can assign things to.
	//5=6: this will return error because we cannot store anything in 5.
	//r-value will always be scalar.
	x = 4;
	//here x is used as an r-value. 
	x = x+1;
	x = 4+1;
	//r-value should always be something that represents a memory address (something like a variable).
	//variable definition
	int z;
	//variable initialization
	z = 7;
	//variable assignment. after we initialize then we just assign or reassign values.
	z = 9;
	//variable definition and initialization
	int y = 10;
	//some variable types will not allow variable assignment without initialization. 
	return 0;
}
