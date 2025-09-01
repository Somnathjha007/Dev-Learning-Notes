#include <iostream>
using namespace std;

class Bike{
    private:
    string name;
    int year;
    int vin;
    public:

    Bike(string n, int y, int v){
        name=n;
        year=y;
        vin=v;
    }
    void start(){
        cout<<"Bike Started";
    }

    void details(){
        cout<<name<<" "<<year<<" "<<vin<<endl;
    }
};

int main(){
    Bike b1("Royal Enfield",2021,1234569877);
    b1.start();
    cout<<endl;
    b1.details();
}