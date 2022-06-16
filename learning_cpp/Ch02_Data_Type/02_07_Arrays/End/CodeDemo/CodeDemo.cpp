// Learning C++ 
// Exercise 02_07
// Arrays, by Eduardo Corpeño 
/*
    array is Fixed size, and Contiguous in memory - whole array is sequential address in memory.
*/
#include <iostream>

using namespace std;

//#define AGE_LENGTH 4
const int AGE_LENGTH = 4;   //same thing as above line but better.

int age[AGE_LENGTH]; //same as int age[4];
float temperature[] = {31.5, 32.7, 38.9};   //implicit conversions, note its not 31.5f

int main(){
    age[0] = 25;
    age[1] = 20;
    age[2] = 19;
    age[3] = 19;

    cout << "The Age array has " << AGE_LENGTH << " elements" << endl;
    cout << "Age[0] = " << age[0] << endl;
    cout << "Age[1] = " << age[1] << endl;
    cout << "Age[2] = " << age[2] << endl;
    cout << "Age[3] = " << age[3] << endl;
    cout << endl;   //empty line
    cout << "Temp[0] = " << temperature[0] << endl;
    cout << "Temp[1] = " << temperature[1] << endl;
    cout << "Temp[2] = " << temperature[2] << endl;

    return (0);
}








