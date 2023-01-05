// Write a menu driven program to perform following Operations without using Library functions.
// STRING LENGTH
// STRING CONCATENATION
// STRING REVERSE
#include<stdio.h>

int length(char string[])
{
    //find length of the strings 
    int idx = 0;
    while (string[idx] !='\0')
    {
        idx+=1;
    }
    return idx;
}
char concatenate(char string1[],char string2[], char s3[])
{
    //concatenate two strings
    int len_s1 = length(string1);
    int len_s2 = length(string2);
    int len_s3 = len_s1 + len_s2;
    //char s3[len_s3];
    int idx = 0 ;
    while (len_s1 != idx)
    {
        s3[idx] = string1[idx];
        idx++;
    }
    int idx1 = 0;
    while (len_s2 != idx1-1)
    {
        s3[idx] = string2[idx1];
        idx++;
        idx1++;
    }
}
char reverse(char string[])
{
    printf("reverse of the string '%s' : ",string );
    int len_s = length(string);
    for(int i=0;i<=len_s;i++)
    {
        printf("%c",string[len_s-i]);
    }
}


void main()
{
    char s1[10] ,s2[10];
    //char s3[30];
    printf("Enter string 1 : ");
    scanf("%s",s1);
    printf("Enter string 2 : ");
    scanf("%s",s2);
    printf("length of string 1 : %d\n",length(s1));
    printf("length of string 2 : %d\n",length(s2));
    char s3[length(s1)+length(s2)];
    concatenate(s1,s2,s3);
    printf("concatenated string : %s\n",s3);
    reverse(s1);
}

