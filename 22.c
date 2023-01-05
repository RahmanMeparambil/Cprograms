// Write a Program to copy one string to another without using String Functions?
#include<stdio.h>
void main()
{
    char str1[10];
    char str2[10];
    int i;
    printf("Enter the string to be copied : ");
    scanf("%s",str1);
    for(i = 0; str1[i]!='\0';i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = str1[i];
    printf("string 1 : %s \t string 2 : %s ",str1,str2);
}