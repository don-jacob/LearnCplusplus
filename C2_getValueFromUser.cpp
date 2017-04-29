#include <iostream>

using namespace std;

int getValueFromUser(){

	int a;
	cout << "type a number: ";
	cin >> a;
	return a;

}

int main(){

	int x=0,y=0;
	x = getValueFromUser();
	y = getValueFromUser();
	cout << x << " + " << y << " = " << x+y << endl;
}
