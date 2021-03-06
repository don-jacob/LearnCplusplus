g++ -c C1_intro.cpp #compile
g++ -o C1_intro C1_intro.o #build
#compile and build: g++ -o C1_intro C1_intro.cpp

g++ -c C2_variables.cpp #compile
g++ -o C2_variables C2_variables.o #build
#compile and build: g++ -o C1_intro C1_intro.cpp

g++ -c C2_unintialized_variables.cpp
g++ -o C2_unintialized_variables C2_unintialized_variables.o

g++ -c C2_cin_cout_ex.cpp
g++ -o C2_cin_cout_ex C2_cin_cout_ex.o

g++ -c C2_functions.cpp
g++ -o C2_functions C2_functions.o

g++ -c C2_return_functions.cpp
g++ -o C2_return_functions C2_return_functions.o

g++ -c C2_getValueFromUser.cpp
g++ -o C2_getValueFromUser C2_getValueFromUser.o

g++ -c C2_FuncCallInsideAnotherFunc.cpp
g++ -o C2_FuncCallInsideAnotherFunc C2_FuncCallInsideAnotherFunc.o

g++ -c C2_FuncPassByValue.cpp
g++ -o C2_FuncPassByValue C2_FuncPassByValue.o

g++ -c C2_FunctionPrototype.cpp
g++ -o C2_FunctionPrototype C2_FunctionPrototype.o

g++ C2_multi-file-program.cpp C2_add.cpp -o C2_multi-file-program

g++ C2_program_using_header.cpp C2_add.cpp -o C2_program_using_header
