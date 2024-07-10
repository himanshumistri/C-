#ifndef DOG_H
#define DOG_H

#include "Animal.h"
#include <iostream>

class Dog : public Animal {
public:
   
    void makeSound() const override { // Override the pure virtual function
        std::cout << "Bark!" << std::endl;
    }
     //void dogName();
     virtual ~Dog();

    void nameDog(); 

private:
   
   int dogAge=5;
     
};

#endif // DOG_H
