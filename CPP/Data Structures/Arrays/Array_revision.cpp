#include <iostream>
using namespace std;

//Search O(n)
//easy

//Insert O(n)
bool insert(int arr[],int n, int x , int cap ,int pos){
    //Base Case
    if(n==cap){
        return false;
    }
    int idx=pos-1;
    //Logic -  shifting right
    for (int i =n-1;i>=idx;i--){
        arr[i+1]=arr[i];
    }
    arr[idx]=x;
    //print
    for(int i=0;i<n+1;i++){cout<<arr[i]<<" ";}
    return true;
    // or return n+1 , if asked for the new size of the array after insert 
}
bool deletee(int arr[], int n, int pos){
    int idx=pos-1;
    for (int i =pos-1;i<n;i++){
        arr[i]=arr[i+1];
    }
    for(int i=0;i<n-1;i++){cout<<arr[i]<<" ";}
    return true;
}


int main() {
    int arr[5]={1,2,4,5};
    int pos = 3;
    int x =3;
    int size = 4;
    int cap = 5;
                                // For a fixed size array with extra space avalable
    //insert(arr,size,x,cap,pos); // O(n)-  In Genral , O(1) -  Inserting at end , theta(n) - At the begning
                                // For dynamic size array : on avg : O(1) , At end : O(1) , N+1 : Theta(n)
    deletee(arr,size,3);

}