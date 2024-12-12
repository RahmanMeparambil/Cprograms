// Write a program to show the grade obtained by a student after they enter their total mark percentage.
// The program should accept input from the user and display their grade as follows
// in1 : float(mark) op1 : str(grade) 

#include<stdio.h>
void main()
{
 float mark;
 char grade;
 printf("Enter total mark percentage : ");
 scanf("%f",&mark);
 
 printf("Grade Obtained : ");
 if (mark > 90) 
  printf("A");
 else if(mark > 79) 
  printf("B");
 else if(mark >69)
  printf("C");
 else if(mark > 59)
  printf("D");
 else if(mark > 49)
  printf("E");
 else
  printf("F (Failed)");
 printf("\n");
}