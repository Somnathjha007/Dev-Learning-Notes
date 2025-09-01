#include <iostream>
using namespace std;
//Virtual Functions :  
class Base{
    public:
        virtual void print(){cout<<"Base \n";}
};

class Derived:public Base {
    public:
        void print() override {cout<<"Derived \n";}
};
int main(){
Base b;
Derived d;
b.print();
d.print();
cout<<&d<<"\n"; // Addess of what?
Base *ptr= &d;
ptr->print(); // It should have printed Derived but it prints Base , Hence to make that an object/Pointer to an object is the type of the object and not the type of the class , we use virtual keyword.
return 0;
}
