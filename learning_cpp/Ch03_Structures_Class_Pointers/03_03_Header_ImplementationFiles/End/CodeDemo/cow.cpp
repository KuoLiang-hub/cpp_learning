/*
This is the implementation file, so we see the class functions here.
just add cow:: before all functions.
*/

#include "cow.h"    //include cow.h here.

//this rule include constructor as well.
cow::cow(std::string name_i, int age_i, unsigned char purpose_i){
    name = name_i;
    age = age_i;
    purpose = purpose_i;
}
//note its cow::get_name()
std::string cow::get_name(){
    return name;
}
int cow::get_age(){
    return age;
}
unsigned char cow::get_purpose(){
    return purpose;
}
void cow::set_age(int new_age){
    age = new_age;
}