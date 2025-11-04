// used to store two items : eg : 2d points : x, y , intervals : hr:min etc etc.
#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;

int main(){
    pair<int,int> p1(10,20);
    pair<int,string> p2(10,"applebanana");

    cout<<p1.first<<" ";
    cout<<p1.second<<" ";
    cout<<p2.first<<" ";
    cout<<p2.second<<" ";

}