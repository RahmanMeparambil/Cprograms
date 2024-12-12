//Write a program to identify whether a string is a palindrome or not
//A string is a palindrome if it reads the same backward or forward eg: MALAYALAM
#include<stdio.h>
void main()
{
    int idx1 = 0;
    int idx2 = 0;
    int i ,len;
    char s;
    char a[10];
    char rev[10];
    printf("Enter a string : ");
    scanf("%s",a);
    // get length of the string
    while (a[idx1]!='\0')
    {
        idx1 +=1;
    }
    len = idx1;
    idx1 = idx1-1;
    printf("length of the string : %d\n",idx1);
    while (idx1!=-1)
    {
        printf("%c : %c  \t\t",a[idx1],a[idx2]);
        if (idx1 == 0)
        {
            printf("\nResult : Palindrome ");
        }
        if (a[idx1] == a[idx2])
        {
            idx1-=1;
            idx2+=1;
        }
        else
        {
            printf("Result : Not Palindrome\n");
            break;
        }
    }
}
    