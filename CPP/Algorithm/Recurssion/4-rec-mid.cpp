#include<iostream>
using namespace std;

void revArray(int arr[],int l,int r){
    if(l>=r)return;
    swap(arr[l],arr[r]);
    revArray(arr,l+1,r-1);
}

bool checkPalindrom(string &s , int i , int n){
    if(i>=n/2) { return true; }
    if( s[i]!=s[n-i-1]) return false;
    checkPalindrom(s,i+1,n);
}

//Multiple recurssion call
int fibbo(int n){
    if(n<=1) return n;

    return fibbo(n-1)+fibbo(n-2);
}

int main(){
    // int arr[] = {1,2,3,4,5};
    // int n =5;
    // for(auto x : arr){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    // //revArray(arr,0,n-1);
    // for(auto x : arr){
    //     cout<<x<<" ";
    // }
    // string s = "abcba";
    // cout<<checkPalindrom(s,0, 5);
    cout<<fibbo(5);
}