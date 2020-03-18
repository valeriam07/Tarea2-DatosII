#include <iostream>
using namespace std;

class Dog{                      /* abstract class */
    virtual void bark() = 0;
    virtual void eat() = 0;
    virtual void pet() = 0;
};

class Chihuahua: public Dog {
public:
    Chihuahua(){
        cout<< "You have adopted a Chihuahua!!!" <<endl;
    }
    void bark() override{
        cout << "your Chihuahua is barking" << endl;
    }

    void eat() override {
        cout << "your Chihuahua is eating" << endl;
    }

    void pet() override {
        cout << "you are petting your Chihuahua" << endl;
    }

};

class Pug: public Dog {
public:
    Pug(){
        cout<< "You have adopted a Pug!!!" <<endl;
    }
    void bark() override{
        cout << "your Pug is barking" << endl;
    }

    void eat() override {
        cout << "your Pug is eating" << endl;
    }

    void pet() override {
        cout << "you are petting your Pug" << endl;
    }

};

class Pomerania{
public:
    void brushHair(){
        cout<< "you are brushing your Pomerania's hair"<<endl;
    }
};


class PomeraniaAdapter: public Dog{
public:
    PomeraniaAdapter(){
        cout<< "Adapting Pomerania..." <<endl;
    }
    void bark() override{
        cout << "your Pomerania is barking" << endl;
    }

    void eat() override {
        cout << "your Pomerania is eating" << endl;
    }

    void pet() override {
        cout << "you are petting your Pomerania" << endl;
        Pomerania p;
        p.brushHair();
    }
};


int main() {
    return 0;
}
