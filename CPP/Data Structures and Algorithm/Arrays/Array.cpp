#include<iostream>
using namespace std;

int secondLargest(int arr[],int size){
    int lar = 0; 
    int res= -1;
    for(int i =0;i<size;i++){
        if(arr[i]>arr[lar]){
            res = lar;
            lar=i;
        }
        else if(arr[i]!=arr[lar]){
            if(res==-1 || arr[i]>arr[res]){
                res=i;
            }
        }
    }

    return res;
}

void swap(int arr[],int idx1,int idx2){
    int temp = arr[idx1];
    arr[idx1]=arr[idx2];
    arr[idx2]= temp;
}
void reverseArray(int arr[],int n){
    int idx1 = 0;
    int idx2 = n-1;

    while(idx1<idx2){
        swap(arr,idx1++,idx2--);
       // idx1++;
       // idx2--;
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

//Remove Duplicate from a sorted array
void removeDuplicates(int arr[],int n){ 
    int dist = 1;

    for(int i =0;i<n;i++){
        if(arr[i]!=arr[dist-1]){
            arr[dist]=arr[i];
            dist++;
        }
    }
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    int arr[]={10,20,20,30,30,30,40,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    //cout<<secondLargest(arr,4);
    //reverseArray(arr,n);
    removeDuplicates(arr,n);
    return 0;
}