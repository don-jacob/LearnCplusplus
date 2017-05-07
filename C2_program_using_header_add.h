
/*
1. 
a. The first part is called a header guard, which is discussed in the next lesson (on the preprocessor). Header guards prevent a given header file from being #included more than once in the same file.

b. The second part is the actual content of the .h file, which should be the declarations for all of the functions we want other files to be able to see. Our header files should all have a .h extension, so we’ll call our new header file C2_program_using_header_add.h:
*/

// This is start of the header guard. C2_PROGRAM_USING_HEADER_ADD_H can be any unique name.  By convention, we use the name of the header file.

#ifndef C2_PROGRAM_USING_HEADER_ADD_H
#define C2_PROGRAM_USING_HEADER_ADD_H


// This is the content of the .h file, which is where the declarations go
int add(int x, int y); // function prototype for add.h -- don't forget the semicolon!

//this is the end of the header guard C2_PROGRAM_USING_HEADER_ADD_H

#endif
