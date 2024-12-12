//       A 
//    A B A 
//  A B C B A 
//A B C D C B A 

#include <stdio.h>

int main()
{
    int n,i,j,p=65;
    printf("enter ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=n;j>=i+1;j--){
            printf(" ");
        }
        for(j=p;j<=p+i;j++){
            printf("%c",j);
        }
        if(i>=1)
        for(int k=j-1;k>=p;k--){
            printf("%c",k);
        }
        printf("\n");
        
    }
    

    return 0;
}