//Read some Malayalam Movie Names from User And Sort it?

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
    
char copy(char from[], char target[])
{
    //[printf("\ncopying %s : %s ",from,target);
    int len = length(from);
    for(int i=0;i<len;i++)
    {
        target[i] = from[i];
    }
    target[len] = '\0';
}

void main()
{
    char movie_name[10][10];
    char temp[10];
    int n,i,j;
    printf("Enter number of movies to be sorted : ");
    scanf("%d",&n);
    
    printf("Enter movie name ( all lowercase) : \n");
    for(i=0;i<n;i++)
    {
        printf("idx %d : ",i);
        scanf("%s",movie_name[i]);
        if(i==0)
        {
            continue;
        }
        else
        {
            int j = 0;
            while (j<i)
            {
                if (movie_name[j][0] <= movie_name[i][0])
                {
                    j++;
                }
                else if (movie_name[j][0] > movie_name[i][0])
                {
                    copy(movie_name[i],temp);
                    copy(movie_name[j],movie_name[i]);
                    copy(temp,movie_name[j]);
                }              
            }
       }
    }
    printf("sorted list : ")
    for(i=0;i<n;i++)
    {
        printf("\n%s",movie_name[i]);
    }
    
}