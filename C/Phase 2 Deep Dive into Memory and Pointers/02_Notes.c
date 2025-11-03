/*
Arrays and Pointers
 ->An array is a contiguous block of memory that holds multiple elements of the same type.
 arr      == &arr[0]     // ✅ same address
*arr     == arr[0]      // ✅ same value

arr = arr + 1;          // ❌ ERROR — array name is constant, can’t be reassigned

*/

// #include <stdio.h>

// int main() {
//     int arr[3] = {10, 20, 30};
//     int *p = arr;       // same as &arr[0]

//     printf("%p\n", arr);     // address of first element
//     printf("%p\n", &arr[0]); // same address
//     printf("%d\n", *p);      // 10
//     printf("%d\n", *(p+1));  // 20
// }

/*
Arrays and Functions (Pointers as Parameters) :
 -> When you pass an array to a function, C passes the address of the first element, not a copy.

*/

#include<stdio.h>
// void printArray(int arr[], int size);
// void printArray(int *arr, int size);
// These are same as below

void printArray(int *p, int size){
    for(int i =0;i<size;i++){
        printf("%d ",p[i]);
    }
}

void main(){
    int arr[] = {1,2,3,4,5,6,7,88,990};
    printArray(arr,9); // Here i passed the name of the array but it is passed as the address of first element of the array.
    



}

/*
    Strings as Character Arrays
    -> A string in C is simply a char array ending with '\0'.



    */

// #include<stdio.h>

// int main(){
//     char str[] = "Hello";
//     char *p = str;

//     printf("%c\n", *p);     // 'H'
//     printf("%c\n", *(p+1)); // 'e'

// }


