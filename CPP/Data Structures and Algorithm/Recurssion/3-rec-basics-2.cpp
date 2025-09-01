#include<bits/stdc++.h>
using namespace std;

void sumOfN(int n , int sum){ // parametarised 
    if(n<1){
        cout<<sum<<" ";
        return;
    }
    sumOfN(n-1,sum+n);
}

int sumOfN2(int n){ // functional
    if(n==0) return 0;
    return n+sumOfN2(n-1);
}

void factorialOfN(int n , int fac){ // parametarised
    if(n<1){
        cout<<fac;
        return;
    }
    factorialOfN(n-1,fac*n);
}

int factorialOfN2(int n){ // functional
    if(n<1) return 1;
    return n*factorialOfN2(n-1);
}

int main(){
    //sumOfN(10,0);
    //cout<<sumOfN2(5);
    //factorialOfN(3,1);
    cout<<factorialOfN2(5);

}