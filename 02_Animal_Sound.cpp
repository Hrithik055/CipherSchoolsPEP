#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
    virtual string sound() const {
        return "Unknown sound";
    }

    virtual ~Animal() {} 
};

// Derived class Dog
class Dog : public Animal {
public:
    string sound() const override {
        return "Bark";
    }
};


class Cat : public Animal {
public:
    string sound() const override {
        return "Meow";
    }
};

int main() {
    Animal* dog = new Dog();
    Animal* cat = new Cat();

    cout << "Dog: " << dog->sound() << endl;
    cout << "Cat: " << cat->sound() << endl;

    delete dog;
    delete cat;

    return 0;
}
