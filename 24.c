// Write a program to read the string “India is my country” from the user and find the position of the word “is”?
#include<stdio.h>
    
int length(char string[])
{
    int idx=0;
    for(int i = 0;string[i] !='\0';i++)
    {
        idx++;
    }
    //printf("\nlength of %s : %d",string,idx);
    return idx;
}

void main()
{
    // read the string "India is my country"
    char s[20];
    printf("Enter the string 'india is my country' : ");
    fgets(s, 20, stdin);
    //scanf("%[^\n]s",s);
    char unknown_str[10];
    printf("\nEnter the element to be found : ");
    scanf("%s",unknown_str);
    
    for(int i=0;s[i]!='\0';i++)
    {
        int idx = 0; 
        int idx2 = 0;
        int len_unknownstr = length(unknown_str);
        int start = 0;
        if (i == 0)
        {
            
            if (s[i] == unknown_str[idx])
            {
                while (idx != len_unknownstr )
                {
                    //printf("%c : %c \t",s[i],unknown_str[idx]);
                    if (s[i] == unknown_str[idx])
                    {
                       idx2 +=1;
                       if (len_unknownstr == idx2)
                       {
                           printf("%d",i);
                       }
                    }
                    idx+=1;
                    i+=1;
                }
            }
            
        }
        else if (s[i] == ' ')
        {
            start = i;
            int len_s = length(s);
            i+=1;
            if (s[i] == unknown_str[idx])
            {
                while ( idx != len_s )
                {
                    //printf("%c : %c \t",s[i],unknown_str[idx]);
                    if (s[i] == unknown_str[idx])
                    {
                       idx2 +=1; 
                       if (len_unknownstr == idx2)
                       {
                           printf(" %d : %d \n",start,i);
                       }
                        
                    }
                    idx+=1;
                    i+=1;
                }
            }
        }
            
    }
}