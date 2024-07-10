#include "Animal.h"
#include <iostream>
#include "Dog.h"


void Dog::nameDog(){
    std::cout << "Dog out";
}

Dog::~Dog(){
 std::cout << "Dog is deleted ";
}
