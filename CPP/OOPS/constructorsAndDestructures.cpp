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

       Point distance(Point p1,Point p2){
        int px = p2.x-p1.x;
        int py = p2.y-p1.y;
        Point p3(px,py);
        return p3;
       }
};

int main(){
    Point p1(10,20);
    p1.print();
    Point p2(20,30);
    p2.print();

    Point p4;
    Point p5 = p4.distance(p1,p2);

    p5.print();

    return 0;

}