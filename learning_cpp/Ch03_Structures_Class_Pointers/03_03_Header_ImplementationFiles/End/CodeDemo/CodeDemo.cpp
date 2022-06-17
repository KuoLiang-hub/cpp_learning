// Learning C++ 
// Exercise 03_03
// Header and Implementation Files, by Eduardo Corpeño 
/*
a complier tool chain - pipeline of software tools convert code in a few steps
3 cases of complier imput (Complier, Assembler, Linker)
    1. write C++ source files, feed the files through complier, compiler translate code to Assembly language
    assembler produce an object file.
    2. write assembly code(low level code, eg driver.)
    3. linker stitch object files together, produce executeable binary file.
    all the information is specified in a text file - "make file".

    C++ Source files -> Complier => Assembly File -> Assembler => Object Files -> Linker => Executable Binary File.

    C++ source files:
        C++ code is written as Header & Implementation file pair.
        the 2 files have same name. header file has .h extension, implementation file has .cpp;
        Header files contain class definitions & function declarations.
        Implementation files contain executeable code.
        Implementation files must include their header files.
        external code should only include header files, not implementation files.
        All implementation files must be compiled.
*/

#include <iostream>
#include <string>
#include "cow.h"    //include here.

using namespace std;

int main(){
    cow my_cow("Hildy",7,pet);
    cout << my_cow.get_name() << " is a type-" << (int)my_cow.get_purpose() << " cow." << endl;
    cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << endl;
    return (0);
}
