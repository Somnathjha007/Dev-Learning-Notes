#include<bits/stdc++.h>
using namespace std;

//Recurssion: when a function calls itself until a specific condition is met.
/*
  Example: 1: 
    void fn(){
        print(1)
        condition check // used to terminate the cycle so we can avoid stack overflow
        fn()            // condition used is called the base condition
        
    }
    int main(){
        fn()
    }
 Example : 2 :
 count =0;
 void fn(){
    if(count==4)return // Base condition (can be multiple base condition)
    count++ 
    print(count)
    fn()
 }

 int main(){
    fn();
 }

*/

int cnt =0; // Global Variable
void recFun(){
    if(cnt==4) return;
    cnt++;
    cout<<cnt<<" ";
    recFun();
}



int main(){
    recFun();
}
