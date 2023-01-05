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
   
    printf("Enter a string : ");
    scanf("%s",a);
    // get length of the string
    while (a[idx1]!='\0')
    {
        idx1 +=1;
    }
    
    len1 = idx1-1;
    
    char rev[len1];
    printf("length of the string : %d\n",len);
    // reverse the string
    while (len1>=0)
    {
        rev[idx2] = a[len1];
        idx2 +=1;
        len1 -=1;
    }
    printf("reverse string : %s",rev);
    printf("\n");
    // checking palindrome
    for (i=0;i<len;i++)
    {
        printf("%c : %c\n",a[i],rev[i]);
        if (i == len)
        {
            printf("string is palindrome");
        }
        else if (a[i] == rev[i])
        {
            continue;
        }
        else
        {
            printf("not palindrome");
            break;
        }
      
    }
    
    
}