// Learning C++ 
// Exercise 06_01
// Opening a text file for reading, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <fstream>  // include fstream for reading.

using namespace std;

ifstream inFile;    // ifstream is similar to cin object
string str;
int number;
char letter;

int main(){
    inFile.open("people.txt");
    if (inFile.fail())  //check if open function fail.
        cout << endl << "File not found!" << endl;
    else{
        while (!inFile.eof()){  //eof = end of file
            getline(inFile, str);
            cout << str << ", ";
            getline(inFile,str);
            number = stoi(str);
            cout << number << ", ";
            getline(inFile, str);
            letter = str[0];
            cout << letter << endl;
        }
        inFile.close(); // always close the file when no longer needed.
    }
    return (0);
}
