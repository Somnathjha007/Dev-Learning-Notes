//Class : A data type with function.
//Object : Variable of the class.
#include<iostream>
using namespace std;
class Complex{
    private:
        int real;
        int img;
    
    public:
        void print(){
            cout<<real<<" "<<"+ i"<<img<<endl;
        }

        Complex(int r, int i){
            real = r;
            img = i;
        }
};

int main(){
    Complex c1(10,15); //Constructure 
    c1.print();
    return 0;
}