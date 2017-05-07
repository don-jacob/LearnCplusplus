#include <iostream>
#include "C2_program_using_header_add.h"

/*
Angled brackets vs quotes

You’re probably curious why we use angled brackets for iostream, and double quotes for add.h. The answer is that angled brackets are used to tell the compiler that we are including a header file that was included with the compiler, so it should look for that header file in the system directories. The double-quotes tell the compiler that this is a header file we are supplying, so it should look for that header file in the current directory containing our source code first. If it doesn’t find the header file there, it will check any other include paths that you’ve specified as part of your compiler/IDE settings. That failing, it will fall back to checking the system directories.

Rule: Use angled brackets to include header files that come with the compiler. Use double quotes to include any other header files.

Header files may include other header files. However, you should never rely on this. Always #include all of the header files you need to use from each .cpp file.

Rule: Each .cpp file should explicitly #include all of the header files it needs to compile.
*/

using namespace std;

int main()
{
	
	cout << "10 + 20 = " << add(10,20) << endl;

}
