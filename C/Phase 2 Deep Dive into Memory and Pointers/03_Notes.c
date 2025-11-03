/*
Dynamic Memory Allocation in C :
 -> when we declaid a variable like this ; int arr[10];
 -> this size is fixed at compile time and is stored at the stack. 
 -> but for an array whose memory size is known at run time , we use DMA : Dynamic memory allocation.
 -> DMA lets eus request memory while the program is being used, its takes and frees memory from the heap.

 Static vs Dynamic Memory
 | Property | Static Memory (Stack)               | Dynamic Memory (Heap)                 |
| -------- | ----------------------------------- | ------------------------------------- |
| Lifetime | Automatically created and destroyed | Must be manually managed              |
| Size     | Fixed at compile time               | Decided at runtime                    |
| Scope    | Function-limited                    | Exists until freed                    |
| Speed    | Very fast                           | Slightly slower                       |
| Example  | `int arr[5];`                       | `int *arr = malloc(5 * sizeof(int));` |

DMA Functions (from <stdlib.h>)
Function	Purpose
malloc()	Allocates uninitialized memory
calloc()	Allocates and initializes to 0
realloc()	Changes the size of previously allocated memory
free()	Frees previously allocated memory

All return a void pointer (void *) that must be typecast to the desired type.

*/

// #include <stdio.h>
// #include<stdlib.h>

// int main(){

//     int *p; // a pointer is initialised
//     int n =5;

//     // // Syntax : ptr = (castType*) malloc(size_in_bytes);
//     // p = (int*) malloc(n * sizeof(int)); // allocate memory for 5 ints , but it does not initialise the memory , it contains garbage until ne values are placed in it

//     // if(p==NULL){
//     //     printf("Memory not allocated\n");
//     //     return 1;
//     // }
//     // for(int i =0;i<n;i++){
//     //     p[i]=i+1;
//     // }
//     // printf("Array Elements: ");
//     // for(int i =0;i<n;i++){
//     //     printf("%d ",p[i]);
//     // }
//     // free(p);

//     p =(int*) calloc(5,sizeof(int)); // calloc allocates and initialises all values to zero
//     printf("Use of alloc: ");
//     for(int i=0;i<n;i++){
//         printf("%d ",p[i]); // output : 0 0 0 0 0 
//     }

//     return 0;
// }

#include <stdio.h>
#include<stdlib.h>

int main(){


}
