#include <iostream>
using namespace std;
// class Point{
//     int x,y;
//     public:
//     //Point(int x1,int y1):x(x1),y(y1){} // initilizer list , normal way
//      Point(int x, int y){ // Internally this is how it works .
//         this->x=x;
//         this->y=y;
//      }
// };
// int main(){
//     Point p1(10,20),p2(5,15);
// }


//Chaning using this pointer.
class Point{
    public:
    int x,y;
    Point &setX(int x){
        this->x=x;
    }
    Point setY(int y){
        this->y=y;
    }
    Point(int x , int y){
        this->x=x;
        this->y=y;
    }
};

int main(){
    Point p1(10,5);
    cout<<p1.x<<" "<<p1.y<<"\n";
    p1.setX(15).setY(20);
    cout<<p1.x<<" "<<p1.y<<"\n";

    return 0;

}