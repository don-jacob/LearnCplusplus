//preprocessor directive
//tells compiler to perform a special task.
//iostream: allows to access functionality from iostream library.
//We use iostream here to write text to screen.
#include <iostream> 

using namespace std;

//main(): mandatory function. Required in every program.
int main() {

	// << : output operator
	std:cout << "Hello World!" << std::endl;

	//return: returns this value back to operating system when program completes.
	//By convention we return 0 to indicate everything went ok! and non-zero when something went wrong.
	return 0;

}
