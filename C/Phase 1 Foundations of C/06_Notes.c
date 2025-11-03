/*
What Is a Function?

    A function is a block of code designed to perform a specific task.
    You can call it from anywhere in your program.
    Syntax : 
    return_type function_name(parameter_list) {
        // function body
    }

    Important:

    C uses Call by Value, meaning:

    Copies of the arguments are passed.
    The original variables are not modified.

*/
// #include <stdio.h>
// void greet(); // Function declaration , i will define it below the main.

// void addition(int a , int b){
//     printf("%d",a+b);
// }
// int addition2(int a , int b){
//     return a+b;
// }

// int main(){
//     // greet();
//     // addition(10,20);
//     printf("%d",addition2(20,25));
//     return 0;
// }
// void greet(){
//     printf("Hellow Every one ");
// }

//Pass by refrence , using pointers , so we modify the object stored directly from its memory address

#include<stdio.h>

char nextLetter(char *a){
    return *a+1;
}
void swap(int *x,int *y){
    int temp = *x;
    *x=*y;
    *y=temp;
}

int main(){
    char ch = 'p';
    printf("%c",nextLetter(&ch));
    // int a =5,b=10;
    // swap(&a,&b);
    // printf("%d %d",a,b);
    return 0;
}
/*
Stack Memory & Function Calls
    Arguments and local variables are stored on the stack.
    The return address (where to come back after the function finishes) is saved.
    Once the function ends, the stack frame is popped.

    Before call:
    | main() stack frame |

    After calling add(5,3):
    | add() stack frame |  ← parameters, locals
    | main() frame      |

*/
