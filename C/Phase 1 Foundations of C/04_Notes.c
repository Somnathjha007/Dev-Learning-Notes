/*
Operators and expressions are how C performs computations — arithmetic, logic, bitwise operations, comparisons, etc

Expression : Is a valid combo of Operands(Variable/constant) + Operators (+,-,/,*)
eg : int x = 10+17; -> a valid expression

Operators : does Mathematical calculations between two values 

Arithmetic	+ - * / %	Basic math
Relational	== != > < >= <=	Compare two values
Logical	 &&-and	||-or !-not 
Assignment	= += -= *= /= %=	Assign or modify values
Increment / Decrement	++ --	Add or subtract 1
Bitwise	 &	^ ~ << >>`
Conditional (Ternary)	? :	Short form of if-else
Comma	,	Separates expressions
sizeof	sizeof()	Returns size in bytes
Pointer operators	* &	Dereference, address-of (later in pointers chapter)

*/

#include <stdio.h>

int main(){
    int a = 10 ,b=3;
    // printf("%d \n ",a+b);
    // printf("%d \n ",a-b);
    // printf("%d \n ",a*b);
    // printf("%d \n ",(a%b));
    // printf("%d \n ",(a/b));

    // // Increment /  Decrement Operator 
    // printf("%d \n",++a);
    // printf("%d \n",--b);

    // //Relational & Logical Operators

    // printf("%d \n",a==b); // a not equal to b = false , 0 output
    // printf("%d\n",a>b); // a is greater then b , so ans is true
    // printf("%d\n", !(a==b)); // (a==b) is false and ! is not , so its true = 1
    // //Logical Operators:
    // printf("%d \n",(a>0)&&(b>0)); 
    // printf("%d \n",(a>0)||(b<0)); 
    // printf("%d \n",(a>0)!=(b>0)); 

    //Conditional (Ternary) Operator : syntax : condition ? expression_if_true : expression_if_false;
    int age;
    printf("Enter Your age: ");
    scanf("%d", &age);

    char *msg = (age >= 18) ? "Adult" : "Minor";
    printf("%s\n", msg);



    return 0;

}