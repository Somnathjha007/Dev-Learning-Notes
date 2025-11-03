/*
"Student Grade Calculator"

Problem Statement

Write a program that:
Asks the user for:
Student name
Roll number
Marks in 3 subjects (out of 100)
Calculates:
Total marks
Average percentage
and CGPA

Displays the output neatly with all information.
*/

#include <stdio.h>

int main(){
    // Display msg
    printf(" Welcome to the Student grade Calculator \n");

    // Define variables
    const float conversionValue =  9.8;
    char name[20];
    int rollNo;
    int maths;
    int sci;
    int art;

    //Take input
    printf("Please input your name : \n");
    scanf("%s",&name);
    printf("Please Input your Roll No: \n");
    scanf("%d",&rollNo);

    printf("Please input your Marks in Maths, Science and Arts : \n");
    scanf("%d %d %d", &maths, &sci , &art);

    //logic / calculation
    printf("Here are your grade details:\n");
    int total = (maths+sci+art);
    int average = total/3;
    int cgpa = (average*conversionValue)/100;
    

    //output
    printf("Your total is : %d \n",total);
    printf("Your Average is : %d \n",average);
    printf("Your CGPA is : %d \n",cgpa);

    //return statement
    return 0;
}