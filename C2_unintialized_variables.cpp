#include <iostream>

using namespace std;

int main(){

	int k;
	//variable is not initialized.
	//this would print whatever garbage is at location x.
	//each time this is executed could lead to different values. 
	std::cout << k << std::endl;
	return 0;

}
