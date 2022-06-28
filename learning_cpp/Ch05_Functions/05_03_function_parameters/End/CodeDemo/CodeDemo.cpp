// Learning C++ 
// Exercise 05_03
// Function Parameters, by Eduardo Corpeño 

/*
    Normally, aruguments are passed by value
    you may pass arguments as pointers
    you may also pass arguments as reference
*/

#include <iostream>

using namespace std;

// Takes arguments by value
int square(int x){
    x = x * x;
    return x;
}

// Takes arguments by address
void swap(int *x, int *y){
    int temp = *x;  // value of
    *x = *y;    // value of
    *y = temp;
}

// Takes arguments by reference
void swap(int& x, int& y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    int a = 9, b;
    b = square(a);
    cout << "a = " << a << ", b = " << b << endl;
    swap(&a, &b);   //passing the address of a and b
    cout << "a = " << a << ", b = " << b << endl;
    swap(a, b);
    cout << "a = " << a << ", b = " << b << endl;
    return (0);
}
