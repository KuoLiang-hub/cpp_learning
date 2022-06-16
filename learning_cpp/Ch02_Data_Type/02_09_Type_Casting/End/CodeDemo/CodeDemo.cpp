// Learning C++ 
// Exercise 02_09
// Type Casting, by Eduardo Corpeño 

/*
    useful for converting data types
*/

#include <iostream>
#include <cstdint>

using namespace std;

float flt = -7.44f;
int32_t sgn;
uint32_t unsgn;

int main(){
    sgn = flt;  //implicit conversion.
    unsgn = sgn;

    cout << " float: " << flt << endl;  //-7.44
    cout << " int32: " << sgn << endl;  // -7
    cout << "uint32: " << unsgn << endl;    //4294967289 is (2^32 - 7)

    int fahrenheit = 100;
    int celsius;

    celsius = (5 / 9) * (fahrenheit - 32);
    cout << "Celsius   : " << celsius << endl;      //0 because (5/9) is 0, its an int.

    celsius = ((float)5 / 9.0) * (fahrenheit - 32);

    cout << endl;
    cout << "Fahrenheit: " << fahrenheit << endl;   //100
    cout << "Celsius   : " << celsius << endl;      //0 


    float weight = 10.99;
    
    cout << endl;
    cout << "Float          : " << weight << endl;
    cout << "Integer part   : " << (int) weight << endl;
    cout << "Fractional part: " << (int)((weight - (int)weight) * 10000) << endl;

    return (0);
}











