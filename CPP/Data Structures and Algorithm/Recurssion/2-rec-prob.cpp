#include<bits/stdc++.h>
using namespace std;

int cnt =0;

void printName(int n){ // with Global Variable
    if(cnt>n)return;
    cnt++;
    cout<<"Somnath"<<endl;
    printName(n);
}

void printName2(int i ,int n){ // without global variable
    if(i>n)return;
    cout<<"Somnath"<<endl;
    printName2(i+1,n);
}

void printN(int n){
    if(n==cnt)return ;
    cnt++;
    cout<<cnt<<endl;
    printN(n);

}

void printNto1(int n){
    if(n==0)return;
    cout<<n<<endl;
    printNto1(n-1);
}



int main(){
    //printName(5);
    //printName2(1,3);
    //printN(6);
    //printNto1(8);


}