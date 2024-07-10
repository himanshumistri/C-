#ifndef CAT_H
#define CAT_H

#include "Animal.h"
#include <iostream>

class Cat : public Animal {
public:
   
   void makeSound() const override { // Override the pure virtual function
        std::cout << "Meow!" << std::endl;
    }
    virtual ~Cat() = default; 
     
    
};

#endif // CAT_H