#ifndef ANIMAL_H
#define ANIMAL_H
using namespace std;

class Animal {
public:
    
    virtual ~Animal(){}
    virtual void makeSound() const = 0;

};

#endif // ANIMAL_H
