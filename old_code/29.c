//Read a line of text from the user , Find the number of Alphabets, Digits and Special characters?
#include<stdio.h>

void main()
{
    char c[30];
    printf("enter a sentence  : ");
    fgets(c,100,stdin);
    for(int i=0;c[i]!='\0';i++)
    {
        if (((c[i] >='a') && (c[i] <= 'z')) || ((c[i] >= 'A') && (c[i] <='Z')))
        {
            printf("\ncharacter : %c",c[i]);
        }
        else if (((c[i] >= '0') && (c[i] <= '9')))
        {
            printf("\ndigit : %c",c[i]);
        }
        else
        {
            printf("\nspecial characters : %c",c[i]);
        }
    }
}