/*
Name  : Rohit Baid
Class : FE
UIN   : 241A038
Aim   : WAP to find the factorial of a number using recursive function.
*/

#include<stdio.h>

int factorialRecursive (int num)
{
if(num <= 0)
 {
 return 1;
 }
 else
 {
 return(num*factorialRecursive(num-1));
 }
}
int main()
 {
  int num;

  printf("\t\t\t*** Recursive Factorial Function *** \n\n");

  printf("Enter Number:");
  scanf("%d", &num);

  printf("Factorial of %d is %d", num, factorialRecursive(num));

  return 0;
  }

  \ /*   OUTPUT:
                        *** Recursive Factorial Function ***

Enter Number:5
Factorial of 5 is 120
 */
