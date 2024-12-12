// Using the ‘switch case,’ write a program to accept an input number from the user and output the day as follows. 
// in1 : int(day)  op : char(day)
#include<stdio.h>
void main()
{
    int day;
    printf("Enter the day : ");
    scanf("%d",&day);
    printf("Output : ");
    switch (day) 
    {
        case 1:
          printf("Sunday");
          break;
        case 2:
          printf("Monday");
          break;
        case 3:
          printf("Tuesday");
          break;
        case 4:
          printf("Wednesday");
          break;
        case 5 :
          printf("Thursday");
          break;
        case 6:
          printf("Friday");
          break;
        case 7 :
          printf("Saturday");
          break;
        default :
          printf("Invalid Entry");
          break;
    }
    printf("\n");
}