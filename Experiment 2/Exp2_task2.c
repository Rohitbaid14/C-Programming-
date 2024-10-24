/*
Name  : Rohit Baid
Class : FE
UIN   : 241A038
Aim   : WAP to find sum of all odd numbers between two numbers entered by user.
*/

#include <stdio.h>
int main()
{
int start_num,end_num,sum=0,i;
printf("\t\t\t*** Sum of Odd Numbers ***\n\n\n");
printf("Enter Start Number: ");
scanf("%d",&start_num);
printf("Enter Ending Number: ");
scanf("%d",&end_num);
if(start_num>end_num)
{
    printf("Error: THE START NUMBER SHOULD BE LOWER THAN ENDING NUMBER ");
}
else
{
 for(i=start_num;i<=end_num;i++)
 {
     if(i%2!=0)
     {
         sum=sum+i;
     }
 }
}
printf("Sum of all the Odd no. between %d and %d is %d",start_num,end_num,sum);
return 0;
}

/*  OUTPUT
                        *** Sum of Odd Numbers ***


Enter Start Number: 1
Enter Ending Number: 5
Sum of all the Odd no. between 1 and 5 is 9
*/
