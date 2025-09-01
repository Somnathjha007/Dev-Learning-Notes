#include <iostream>
using namespace std;
// When you create an object from an existing object

// //Normal Style
// class Test{
//     int *ptr;
//     public:
//         Test(int x){
//             ptr = new int(x);
//         }
//         void set(int x){
//             *ptr = x;
//         }
//         void print(){
//             cout<<ptr<<" "<<*ptr<<"\n";
//         }
// };

//Copy Constructors:
class Test{
    int *ptr;
    public:
        Test(int x){
            ptr = new int(x);
        }
        Test(const Test &t){ // passed via refrence because if n not then it will create a recurssion
            int val = *(t.ptr); // value Takes the value from the t
            ptr = new int(val); // and ptr passes the value and makes a deep copy       
            }
        void set(int x){
            *ptr = x;
        }
        void print(){
            cout<<ptr<<" "<<*ptr<<"\n";
        }
};
int main(){
    Test t1(10);
    Test t2(t1);//Test t2 = t1 
    t2.set(20);
    t1.print();
    t2.print();

    return 0;
}