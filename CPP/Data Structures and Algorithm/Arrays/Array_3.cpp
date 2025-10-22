#include <iostream>
using namespace std;

void swap(int& a , int& b){
    int temp = a;
    a=b;
    b=temp;
}
void moveToZero(int arr[], int n) {
    int nonZeroIndex = 0;  // place for the next non-zero

    // First, shift all non-zero elements forward
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[nonZeroIndex]);
            nonZeroIndex++;
        }
    }

    // Print result
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[]={8,5,0,10,0,20};
    int n = 6;

    moveToZero(arr,n);
    

    return 0;
}