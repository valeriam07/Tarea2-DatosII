#include <iostream>
using namespace std;

class Dog{                      /* abstract class */
    virtual void bark() = 0;
    virtual void eat() = 0;
    virtual void sleep() = 0;
};

class Chihuahua: public Dog {
public:
    Chihuahua(){
        cout<< "Chihuahua" <<endl;
    }
    void bark() override{
        cout << "your Chihuahua is barking" << endl;
    }

    void eat() override {
        cout << "your Chihuahua is eating" << endl;
    }

    void sleep() override {
        cout << "your Chihuahua is sleeping" << endl;
    }

};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
