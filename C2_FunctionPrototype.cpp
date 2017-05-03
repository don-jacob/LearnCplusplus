#include <iostream>

using namespace std;

int add(int x, int y);

int main()
{
	int x = 2, y = 3;
	cout << x << '+' << y << '=' << add(x,y) << endl;
}

int add(int x, int y)
{
	return(x+y);
}
