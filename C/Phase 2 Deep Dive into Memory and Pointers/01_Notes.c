/*
Pointer : A pointer is a variable that stores the address of another variable.
        -> Ppointers can be incremented or decremented just like intergers.

*/

// #include<stdio.h>

// int main(){
//     // int a = 10; // Normal variable , assigned a normal value
//     // int *ptr; // declaration of a pointer variable , we use a * .]
//     // ptr  =  &a; // ptr stores the address of a.
//     int arr[3] = {10,20,30};
//     int *ptr = arr; // here we dont need to add & before arr , as arr will always return the starting address of the arr.
//     printf("Starting address and Value %d %d",ptr,*ptr);
//     ptr++; // here the pointer will increment to the next address , as we have defined the pointer as an int , it will increment in the order of 4 bytes 
//     printf("\n Address and value after +1 increment %d %d ",ptr,*ptr);
//     return 0;
// }

/*
-1925187652 10
-1925187648 20
--------------------
4 difference
--------------------
*/

/*
Pointer to a pointer : A pointer to a pointer stores the address of another pointer.
*/
// #include<stdio.h>

// int main(){
//     int a = 22; 
//     int *ptr = &a; // ptr points to memory location where a stores 22
//     int **q = &ptr; // q pointes to memory location where ptr stores its memory location ()

//     printf("Value of a =  %d \n",a);
//     printf("Value of ptr =  %d \n",ptr);
//     printf("Value of &a =  %d \n",&a);
//     printf("Value of *ptr =  %d \n",*ptr);
//     printf("Value of q =  %d \n",q);
   
//     return 0;
// }

/*
NULL Pointer : a null pointer is a pointer that that dosent point to any memory location currently , its used for initialisation.
    -> Causing a null pointer to dereference always causes segmentation fault.
*/

#include<stdio.h>

int main(){
    int *ptr =NULL;
    int apple = 10000;    
    ptr = &apple;
    if(ptr != NULL){
        printf("%p",*ptr);
    }
    else
    printf("Pointer is still NULL");

   
    return 0;
}