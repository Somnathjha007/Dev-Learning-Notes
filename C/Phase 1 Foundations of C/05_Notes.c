/*
What Is Control Flow?
Control flow determines the order in which statements are executed in your program.
*/

// If else 

#include<stdio.h>

int main(){
    // //if-else
    // char a = 'z',b='d';
    // if(a=='e'){
    //     printf("Apple");
    // }
    // else if(b!='c'){
    //     printf("orange");
    // }
    // else{
    //     printf("Banana");
    // }

    //Switch
    // int day = 3;

    // switch (day) {
    //     case 1: printf("Monday\n"); break;
    //     case 2: printf("Tuesday\n"); break;
    //     case 3: printf("Wednesday\n"); break;
    //     default: printf("Invalid day\n");
    // }

    //Loops
    // char a ='e';
    // while(a>='a'){
    //     printf("%c \n",a--);

    // }
    //for loop
    for (int i = 1; i <= 10; i++) {
        if (i == 5)
            continue;   // skip 5
        if (i == 8)
            break;      // stop loop
        printf("%d ", i);
    }


    return 0;
}