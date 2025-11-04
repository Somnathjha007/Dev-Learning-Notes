//Q. Sort an array according to another array

#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;

void sortAccOther(int a[],char b[],int n){
    pair<int,char> p1[n];
    for(int i =0;i<n;i++){
        p1[i] = {a[i],b[i]};
    }
    sort(p1,p1+n);
    for(int i =0;i<n;i++){
        cout<<p1[i].second<<" ";
    }
    
}


int main(){
    int a[]={3,1,2};
    char b[]={'g','k','e'};
    int n=3;

    sortAccOther(a,b,n);
    
    

}