// Write a program to compare two strings without using string functions.
#include<stdio.h>
void main()
{
    char s1[10] ,s2[10];
    printf("Enter string 1 : ");
    scanf("%s",s1);
    printf("Enter string 2 : ");
    scanf("%s",s2);
    
    //find length of the strings 
    int idx = 0;
    while (s1[idx] !='\0')
    {
        idx+=1;
    }
    int len_s1 = idx;
    idx = 0;
    while (s2[idx] != '\0')
    {
        idx +=1;
    }
    
    
    int len_s2 = idx;
    printf("len s1 : %d\n",len_s1);
    printf("len s2 : %d\n",len_s2);
    printf("\n");
    
    //compare two strings
    printf("result : ");
    if ( len_s1 == len_s2 )
    {
        for(int i=0;i<=idx;i++)
        {
            if (i == idx)
                printf("same\n");
            else if ( s1[i] == s2[i] )
                continue;
            else
            {
                printf("not same\n ");
                break;
            }
        }
            
    }
    else
        printf("not same length\n");
}