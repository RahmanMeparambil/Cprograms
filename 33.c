// It's your first day at school. Your teacher asked the students to meet every other student in the class and to introduce themselves. The teacher asked them to do handshakes when they meet each other.
// If there are n number of students in the class then find the total number of handshakes made by the students.
//Program to find the maximum number of handshakes is discussed here. Given a positive integer n, find out the total number of handshakes possible.
//This is because each of the n people can shake hands with n - 1 people (they would not shake their own hand), and the handshake between two people is not counted twice.

#include<stdio.h>
void main()
{
    int n;
    printf("Enter number of students in the class : ");
    scanf("%d",&n);
    printf("\nmaximum number of handshakes : %d\n",(n*(n-1)/2));
    
}