#include <iostream>
#include <cstdlib>
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
            interact(ch);

        }else if(selectedDog == 2){
            printf("you have choosen a Pug\n");
            Dog *pug = new Pug();
            interact(pug);

        }else if(selectedDog == 3){
            printf("you have choosen a Pomerania\n");
            Dog *pom = new PomeraniaAdapter();
            interact(pom);

        }else{
            printf("Invalid code");

        }
    }

    void interact(Dog *dog){
        int random = rand() %3 + 1;

        cout<< "would you like to interact with you dog?\n1. Yes\n0. No" << endl;
        int inter;
        cin >> inter;

        if(inter == 1){
            act(random, dog);
            interact(dog);

        }else if(inter == 0){

        }else{
            cout << "Invalid code" << endl;
            interact(dog);
        }

    }

    void act(int random, Dog *dog){
        if(random == 1){
            dog->bark();
        }else if(random == 2){
            dog->eat();
        }else if(random ==3){
            dog->pet();
        }
    }


};

int main() {
    Application app;
    return 0;
}
