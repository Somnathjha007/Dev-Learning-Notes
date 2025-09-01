#include <iostream>
using namespace std;
#include <algorithm>

int main(){
    int arr[]={2,4,3,5,7,5,90,33,42,61};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+size); // sorts the array (begin iterator , end iterator )
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    if(binary_search(arr,arr+size,33))
        cout<<"Present"<<"\n";
    else cout<<"Absent";
    return 0;
}