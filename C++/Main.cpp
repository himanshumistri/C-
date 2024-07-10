#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

int main() {
    Animal* animals[2]; // Array of pointers to Animal

    //Cat cat;
    //Dog dog;

    animals[0] = new Cat();
    animals[1] = new Dog();




    for (int i = 0; i < 2; i++) {
        animals[i]->makeSound();
    }

    Dog* mDog = dynamic_cast<Dog*>(animals[1]);
    mDog->nameDog();

    delete mDog;
    
    
    return 0;
}