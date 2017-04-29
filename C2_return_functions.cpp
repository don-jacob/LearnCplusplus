#include <iostream>

using namespace std;

//The function type indicates what type is returned
int return5(){
	return 5; 
}

int main(){

	cout << return5() << endl;
	cout << return5()+2 << endl;
	return5(); //returned value 5 is discarded.
	return 0;
}
