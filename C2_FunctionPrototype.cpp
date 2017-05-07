#include <iostream>

using namespace std;

//forward declaration of add() using function prototype.
int add(int x, int y);

int main()
{
	int x = 2, y = 3;
	cout << x << '+' << y << '=' << add(x,y) << endl;
}

/*this is function definition - this implements or instantiates the forward declaration identifier. Instantiating causes memory to be allocated.*/
int add(int x, int y)
{
	return(x+y);
}
