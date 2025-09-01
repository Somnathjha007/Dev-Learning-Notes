#include<iostream>
using namespace std;

//Operatins in an Array.

//Search O(n)
int search(int arr[],int n, int x){
    for (int i =0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
    }
}

//Insert Operatin:
int insert(int arr[],int n, int x,int cap , int pos){
    if(n==cap){
        return n;
    }
    int idx = pos-1;
    for(int i=n-1;i>=idx;i--){
        arr[i+1]=arr[i];
    }
    arr[idx]=x;
    for(int i=0;i<n;i++){cout<<arr[i]<<" ";}
    return(n+1);
    
}
//Update Operation: O(n)
int update(int arr[],int pos, int x ,int size){
    if (pos>=size){return -1;}
    arr[pos-1]=x;
}

//Delete Operation: O(n)
int deletee(int arr[],int pos , int size){
    if (pos>=size){return -1;}
    for(int i = pos-1;i<size-1;i++){ // {1,2,4,5}
        arr[i]=arr[i+1];
    }
    for(int i =0;i<size-1;i++){
        cout<<arr[i]<<" ";
    }
    return size-1;
}

int main(){
    // int arr[]={20,5,7,25}; // unsorted : O(N) , if sorted O(logN)
    // cout<<search(arr,size,x);
    

    

    int arr[5]={1,2,4,5};
    int pos = 3;
    int x =3;
    int size = 4;
    int cap = 5;
                                // For a fixed size array with extra space avalable
    insert(arr,size,x,cap,pos); // O(n)-  In Genral , O(1) -  Inserting at end , theta(n) - At the begning
                                // For dynamic size array : on avg : O(1) , At end : O(1) , N+1 : Theta(n)

    deletee(arr,pos,size); // Avg : O(n) , At end - O(1) , At start : Theta(n)


    return 0;
}