#include <iostream>
using namespace std;


class Car{
    public:   //Every thing is public -> Accessible from outsuide the class.
    string brand;
    int year;

    private:
    int vin;
                                   /*No Constructure used */ 
    public:
    void start(){
        cout<<"Car started"<<endl;

    }
    void details(){
        cout<<brand<<endl;
        cout<<year<<endl;
        cout<<vin<<endl;
    }

};

class Bike{
    private:
    string name;
    int year;
    int vin;
    public:
    void start(){
        cout<<"Bike Started";
    }

    void details(){
        cout<<year<<" "<<year<<" "<<vin<<endl;
    }
};

int main(){
    Car c1;
    c1.brand = "SUZUI";
    c1.year = 2021;
    c1.start();
    c1.details();
    return 0;

    Bike b1;
    // b1.name="Royal Enfield";    // inacessable 
    // b1.year=2023;               // inacessable 
    // b1.vin=123654789;           // inacessable 
    b1.start();

}