//Write a program to calculate the charge for parcel:
//If the weight of the parcel is less than 500gm or equal to 500gm then the parcel charge will be Rs. 200, Otherwise there is an additional charge of Rs.170 per each extra 500gm
#include<stdio.h>
void main()
{
    int weight ;
    printf("Enter weight : ");
    scanf("%d",&weight);
    int cal = weight/500;
    printf("\ncal : %d",cal);
    if (weight <= 500)
    {
        printf("\ncharge : %d ",200);

    }
    else
    {
        printf("\ncharge : %d ",200+cal*170);
    }
}