// C is a statically typed language so every variable must have a type before use
/*
Data Types : 
| Type     | Size (typical) | Example   | Format Specifier |
| -------- | -------------- | --------- | ---------------- |
| `int`    | 4 bytes        | `42`      | `%d`             |
| `float`  | 4 bytes        | `3.14`    | `%f`             |
| `double` | 8 bytes        | `3.14159` | `%lf`            |
| `char`   | 1 byte         | `'A'`     | `%c`             |

*/

// #include<stdio.h>

// int main(){  // Main with int as return
//     int age = 25;
//     float height = 5.7;
//     char grade = 'D';

//     printf("Age is %d \n", age);
//     printf("Grade is %c \n", grade);
//     printf("and Height is %f \n", height);

//     return 0;
// }

// #include<stdio.h>

// char main(){     // Main as char as return
//     printf("Hello Som");
//     return 'A';
// }

// #include<stdio.h>

// float main(){     // Main as float as return
//     printf("Hello Som");
//     return 0.001;
// }


/*
Constants : A value that does not change during the execution of the program.
Two main ways to define a constant 
1 . Using #define : this is called a pre processor constant : this is handled by the pre processor , before compilation
it performs text substitution , it dose not use memory at run time.
Format : #define NAME value

2. Using const keyword : const tells the compiler that the variable is read only.
it reserves and used memory , we can get its address using & , unlike macros.
*/
#include <stdio.h>
float main(){
    printf("Following are the types of constants : \n");
    printf("1. using #Define  : \n");

    #define APPLE 9.99
    printf("the APPLE 's value is %d",APPLE);

    printf("2. using const  : \n");

    const int DAYS_IN_WEEK = 7;
    const float GRAVITY = 9.8;

    printf("Days in a week: %d\n", DAYS_IN_WEEK);
    printf("Gravity: %.2f m/s^2\n", GRAVITY);


    return 0.001;
}
