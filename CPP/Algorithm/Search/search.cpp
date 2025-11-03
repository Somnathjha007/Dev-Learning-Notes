#include <iostream>
#include <vector>
using namespace std;

int linear_search(int arr[],int size,int x){
    for(int i=0;i<size;i++){
        if(arr[i]==x){return i;}
    }
    return -1;
}

vector<int> linear_search_2(int arr[],int size,int x){
     vector<int> oc = {-1};
    // for(int i=0;i<size;i++){
    //     if(arr[i]==x){
    //         if(oc[0]==-1){oc.pop_back();}
    //         oc.push_back(i);
    //     }
    // }
    return oc;
}


int binary_search_iterative(int arr[],int size , int x){
     int low = 0, high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == x)
            return mid;   // found!

        else if (arr[mid] < x)
            low = mid + 1;   // search right half

        else
            high = mid - 1;  // search left half
    }

    return -1; // not found

}

int binary_serach_recurssive(int arr[], int low, int high ,int x){
    if(low > high)
        return -1;   // Base case ✅

    int mid = (low + high) / 2;

    if(arr[mid] == x)
        return mid;

    else if(arr[mid] > x)
        return binary_serach_recurssive(arr, low, mid - 1, x);  // ✅ Correct bounds

    else
        return binary_serach_recurssive(arr, mid + 1, high, x); // ✅ Correct bounds
}


int main(){
    //linear Search 
    {
    int arr_1[]={3,4,56,1,22,43,90,67,54,91,88,9,0}; // unsorted , no duplicate
    int size_1 = sizeof(arr_1)/sizeof(arr_1[0]);

    int arr_2[]={3,4,5,7,2,33,4,5,9,21,22,7,5,3,4}; //unsorted with duplicate
    int size_2 = sizeof(arr_2)/sizeof(arr_2[0]);
    
    int element = 7;
    
    
   /*
    cout<<linear_search(arr_1,size_1,element)<<"\n";// Avg : O(n) , 
    cout<<linear_search(arr_2,size_2,element)<<"\n"; // 1st occurence
    vector<int> oc = linear_search_2(arr_2,size_2,element); // multiple occurence
    for(auto x : oc){cout<<x<<" ";}
   */
    }
    
    //Binary Search
    {
    int arr_3[]={1,2,3,4,7,8,9,10,11,22,54,66,78,101};
    int size_3 = sizeof(arr_3)/sizeof(arr_3[0]);
    int element_3=78;
    cout<<binary_search_iterative(arr_3,size_3,element_3)<<" "<<"\n";
    cout<<binary_serach_recurssive(arr_3, 0 ,13,element_3)<<" "<<"\n";
    }

    return 0;
}