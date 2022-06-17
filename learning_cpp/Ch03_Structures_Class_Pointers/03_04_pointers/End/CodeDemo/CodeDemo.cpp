// Learning C++ 
// Exercise 03_04
// Pointers, by Eduardo Corpeño

/*
pointers are essential part of C programming language.
pointers are special type of variables that hold memory addresses.
for example, for 32 bit architectures, pointers are 32 bit wide.
address are shown in steps of four, each integer takes 4 bytes.

let's make up a fake memory address, assume a is stored at address 104.
ptr = &a;

address     memory
100         empty
104           a     int a = 37;
108         empty
112         empty
116         empty
120         104(address of a)   int *ptr;

one of the most application of pointer is dynamic memroy management.


*/ 

#include <iostream>
#include <string>
#include "cow.h"

using namespace std;

int a = 37;
int *ptr;   //to declare a int pointer.
cow *my_cow;    //declare a cow pointer.

int main(){
    ptr = &a;   //pointer point to a's address
                //& is the address of operator.

    cout << "           The content of a is " << a << endl;     //37
    cout << "    ptr is pointing to address " << ptr << endl;   //104
    cout << "           The address of a is " << &a << endl;    //104
    cout << "Where ptr is pointing, we have " << *ptr << endl;  //37
    cout << "         The address of ptr is " << &ptr << endl;  //120
    cout << endl;
// using dynamic memory allocation.
    my_cow = new cow("Gertie",3,hide);
    //    (*my_cow).get_name() would work too, but it will create problem when derefernce linked list etc. 
    cout << my_cow->get_name() << " is a type-" << (int)my_cow->get_purpose() << " cow." << endl;
    cout << my_cow->get_name() << " is " << my_cow->get_age() << " years old." << endl;
    
    delete my_cow;      //this is the opposite of the 'new' operator. the memory will be freeed.
    return (0);
}






