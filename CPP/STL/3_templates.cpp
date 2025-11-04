#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;

/*
Templates : - Main concept behind STL.
    - Write ince use for any datatype
    - Like macros , processed by compiler, but better then macros
    - types :
        -Function Templates : sort , linear search , binary search
        -Class Template : stack , queue , deque
        -

    *Function Template : write a function template and use multiple times , regardless of datatypes

*/

template<typename T> // template and typename/class both are keywords in cpp

struct Pair{
    T x,y;
    Pair (T i, T j){x=i;y=j;}
    T getFirst(){
        return x;
    }
    T getSecond(){
        return y;
    }
};


// T myMax(T x, T y){
//     return (x>y)?x:y;
// }

// T arrMax(T arr[],int n){
//     T res = arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]>res){res = arr[i];}
//     }
//     return res;
// }

int main(){
    // cout<<myMax<int>(3,7)<<endl;
    // cout<<myMax<char>('c','g')<<endl;
    // int int_arr[]={2,5,44,6,7,0,99,10009};
    // std::printf("%d \n",arrMax(int_arr,8));
    // char char_arr[]={'a','b','c','d'};
    // std::printf("%c \n",arrMax(char_arr,4));

    Pair<int> p1(10,20);
    cout<<p1.getFirst()<<" ";
    cout<<p1.getSecond()<<" ";

}