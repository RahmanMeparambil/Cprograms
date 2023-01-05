// convert a lower case word to upper case
#include<stdio.h>
void main()
{
    char c[10];
    printf("enter a word : ");
    scanf("%s",&c);
    printf("Upper case : ");
    for(int i=0;c[i] != '\0';i++)
    { 
       if ((c[i] >= 'a') && (c[i] <= 'z'))
       {
           int ascii = c[i]; 
           char upperchar = ascii - 32;
           printf("%c",upperchar);
       }
    }  
    printf("\n");
}