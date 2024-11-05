/*
Name  : Rohit Baid
Class : FE
UIN   : 241A038
Aim   : WAP to find all the prime numbers between two numbers.
*/

#include <stdio.h>
int isPrimeNumber(int num);

int main()
{
int start_num,end_num,i;
printf("\t\t\t *** Prime Number Finder ***\n\n");

printf("Enter Starting Number: ");
scanf(" %d",&start_num);
printf("Enter Ending Number: ");
scanf(" %d",&end_num);
i=start_num<=1?2:start_num;
printf("Prime Numbers between %d and %d: ", start_num, end_num);
while(i <= end_num)
{
  if(isPrimeNumber(i))
  {
    printf("%d, ", i);
  }
  i++;
}
return 0;
}

int isPrimeNumber(int num)
{int i;
 for( i=2; i < num; i++)
    {
        if(num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
/* OUTPUT:
                         *** Prime Number Finder ***

Enter Starting Number: 0
Enter Ending Number: 12
Prime Numbers between 0 and 12: 2, 3, 5, 7, 11,
*/
