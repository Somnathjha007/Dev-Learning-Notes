#include <iostream>
using namespace std;

class Point{
    private:
        int x,y;
    public:
       Point(){
        x=0;
        y=0;
       } 
       Point(int x1,int y1){
        x=x1;
        y=y1;
       }
       void print(){
        cout<<x<<" "<<y<<endl;
       }
};

int main(){
    Point p1(10,20);
    p1.print();
    Point p2(20,30);        /*Stack memory Allocation , Auto memory allocation and delocation , Accessed using dot(.) operator*/
    p2.print();

    Point *p3 =  new Point(5,10); 
                                 /* 
                                    Dynamically Allocated , The memory is allocated on heap.
                                    Manual Memory Managment , will not destroy auto after use , 
                                    Use delete ptr , to avoid memory leak. 
                                    Accessed using (->) arrow operator.
                                  */
    p3->print();

    return 0;

}