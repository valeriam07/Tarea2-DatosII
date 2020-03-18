#include <iostream>
using namespace std;

class Dog{                      /* abstract class */
public:
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
    static void brushHair(){
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
        Pomerania::brushHair();
    }
};

class Application{
public:
    Application(){
        cout << "Select a dog breed: \n1.Chihuahua\n2.Pug\n3.Pomerania" << endl;
        int selectedDog;
        cin >> selectedDog;

        if(selectedDog == 1){
            printf("you have choosen a Chihuahua\n");
            Dog *ch = new Chihuahua();

        }else if(selectedDog == 2){
            printf("you have choosen a Pug\n");
            Dog *pug = new Pug();

        }else if(selectedDog == 3){
            printf("you have choosen a Pomerania\n");
            Dog *pom = new PomeraniaAdapter();

        }else{
            printf("Invalid code");

        }
    }


};

int main() {
    Application app;
    return 0;
}
