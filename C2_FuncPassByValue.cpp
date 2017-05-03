#include <iostream>

using namespace std;

int add(int x, int y){

	return x+y;

}

int multiply(int x, int y){

	return x*y;

}

int main(){

	int a = 5, b = 10;
	cout<< a << "+" << b << "=" << add(a,b) << endl;
	cout<< a << "*" << b << "=" << multiply(a,b) << endl;
	cout<< a << "+" << multiply(a,a) << "=" << add(a,multiply(a,a)) << endl ;
	cout<< a << "+" << add(a,b) << "=" << add(a,add(a,b)) << endl;

}

