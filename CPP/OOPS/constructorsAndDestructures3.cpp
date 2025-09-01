#include <iostream>
using namespace std;


//Normal Style
class Test{
    public:
        Test(){cout<<"Default Constructors \n";}
        Test(int x){
            cout<<"Parametarized Constructors \n";
        }
};
class Main{
    Test t;
    public:
        Main(){
            t=Test(0);
        }
};

//With Initializer List
class Test{
    public:
        Test(){cout<<"Default Constructors \n";}
        Test(int x){
            cout<<"Parametarized Constructors \n";
        }
};
class Main{
    Test t;
    public:
        Main():t(10){}
};

int main(){
    Main m;
    return 0;
}