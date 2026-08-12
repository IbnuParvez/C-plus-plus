#include <iostream>

using namespace std;

class Animal{
    public:
        virtual void makeSound(){
            cout << "Waah\n";
        }
        virtual ~Animal() = default;
};

class Dog: public Animal{
    public:
        void makeSound() override{
            cout << "Bark!\n";
    }
};

class Cat: public Animal{
    public:
        void makeSound() override{
            cout << "Meow!\n";
    }
};

class Lion: public Animal {
    public:
        void makeSound() override{
            cout << "Roar!\n";
        }
};

int main(){
    Animal* polyDog = new Dog();
    Animal* polyCat = new Cat();
    Animal* polyLion = new Lion();

    polyDog->makeSound();
    polyCat->makeSound();
    polyLion->makeSound();

    delete polyDog;
    delete polyCat;
    delete polyLion;

    return 0;
}
