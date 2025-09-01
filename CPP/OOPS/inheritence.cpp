#include <iostream>
using namespace std;


class Animal{
    public:
    void eat(){
        cout<<"All animals eat \n";
    }

};

class Dog:public Animal{
    public:
    void bark(){
        cout<<"Woof \n";
    }

};

class GermShep:public Dog{
    public:
    void behaviour(){
        cout<<"GermShep are energetic and Strong \n";
    }
};

class Pug:public Dog{
    public:
    void behaviour(){
        cout<<"Small and low Energy \n";
    }
};

int main(){
    GermShep Tommy;
    Tommy.behaviour(); // Child class member GermShep
    Tommy.bark(); // Parent Class member Dog
    Tommy.eat(); // Paprent-parent member Animal
    

    Pug Pillu;
    Pillu.behaviour();

    Dog d1;
    GermShep s1;
    



    return 0;
}
