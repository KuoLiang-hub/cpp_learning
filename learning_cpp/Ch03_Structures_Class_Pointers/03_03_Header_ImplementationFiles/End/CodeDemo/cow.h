/*
This is the header file for cow, it only include headers, therefore, only see 
cow(std::string name_i ....) without {implementation}
*/

#pragma once    //only include this header once. not standard practice. use #pragma or include guard, only 1 is needed.

#ifndef COW_H   //using a include guard, if the COH_H macro is not defined, then include the folloing code.
#define COW_H
#include <string>

//using namespace std;  using in header is bad practice. Don't use it.
// because header files are included by external code.

enum cow_purpose { dairy, meat, hide, pet };

class cow{
public:
    cow(std::string name_i, int age_i, unsigned char purpose_i);    //note it uses std::string.
    std::string get_name();
    int get_age();
    unsigned char get_purpose();
    void set_age(int new_age);
private:
    std::string name;
    int age;
    unsigned char purpose;
};

#endif // COW_H