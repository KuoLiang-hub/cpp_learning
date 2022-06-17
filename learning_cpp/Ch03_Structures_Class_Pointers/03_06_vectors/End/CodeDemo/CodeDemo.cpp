// Learning C++ 
// Exercise 03_05
// Vectors, by Eduardo Corpeño 
/*
Dynamic-size containers
The memory is managed for you.
Generic container class.
part of C++ Standard Template Library.

*/

#include <vector>       //'import' the library.
#include <iostream>
#include <string>
#include "cow.h"

using namespace std;

vector<int> primes; //specify datatype in <>


int main(){
    //push_back(n) is similar to add() in python.
    primes.push_back(2);
    primes.push_back(3);
    primes.push_back(5);
    primes.push_back(7);
    primes.push_back(11);
    //vector has size() function
    cout << "The vector has " << primes.size() << " elements." << endl;     //5
    cout << "The element at index 2 is " << primes[2] << endl;          //5
    primes[2] = 13; // change the 3rd element in vector.
    cout << "The element at index 2 is " << primes[2] << endl;          //13
    cout << endl;

    vector<cow> cattle;
    cattle.push_back(cow("Betty", 6, meat));
    cattle.push_back(cow("Libby", 4, hide));
    cattle.push_back(cow("Trudy", 5, pet));
    cattle.push_back(cow("Betsy", 2, dairy));
    //vector support iterators. iterator like pointer, pointer is a special case of iterator.
    cout << "The first cow is " << cattle.begin()->get_name() << endl;
    cout << "At index 1 we have " << cattle[1].get_name() << endl;
    cout << "Next to last is " << prev(cattle.end(), 2)->get_name() << endl;    //prev(iterator, n_to_go_back)   
    cout << "The last cow is " << (cattle.end() - 1)->get_name() << endl; //the end() function return the iterator after the last item.
    return (0);
}













