/*
Name  : Rohit Baid
Class : FE
UIN   : 241A038
Aim   : WAP to print if entered number is even or odd.
*/

#include <stdio.h>
int main()
{
int num;
printf("\t\t\t*** Even Odd Finder ***\n\n\n");
printf("Enter Number:");
scanf("%d",&num);
if(num%2==0)
{
printf("%d is an Even number",num);
}
else
{
printf("%d is an Odd number",num);
}
return 0;
}

/* OUTPUT:
Part-1
                        *** Even Odd Finder ***


Enter Number:3
3 is an Odd number

Part-2
                        *** Even Odd Finder ***


Enter Number:4
4 is an Even number

*/


