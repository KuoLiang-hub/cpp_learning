// Learning C++ 
// Exercise 02_05
// Preprocessor directives, by Eduardo Corpeño 

/* your code is preprocessed prior to compiling
 * directives tell the processor what to add or remove in the code
 * useful for libraries, constants, selecting code blocks, etc
*/

#include <iostream>   //all directives start with a number or #. one line each.
                      //iostream is a standard library, so it does not inlcude .h, .hpp;
                      //within <> means it will search a pre-defined location, usually defined by the PATH,
                      //you can think this a known standard library.
#include <string>     //within <> means it will search a pre-defined location, usually defined by the PATH,
#include <cstdint>    //its a c library, therefore a c infront of it.


/*
#define a symble, which are called micros.
*/
#define CAPACITY 5000   //people usually name deines in CAP. it will repace CAPACITY with 5000.
                        //directives do not end with simicollon. 
#define DEBUG   //DEBUG is not assigned to any value if its used for #ifdef directive.

using namespace std;

int main(){
    int32_t large = CAPACITY;
    uint8_t small = 37;     //just for simplicity, unsigned int cannot be negative.

/*
if defined directive.
it end with #endif directive.
*/
#ifdef DEBUG
    cout << "[About to perform the addition]" << endl;
#endif
    large += small; // shorthand for large = large + small
    cout << "The large integer is " << large << endl;
    return (0);
}














