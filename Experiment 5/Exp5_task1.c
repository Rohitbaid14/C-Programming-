/*
Name  : Rohit Baid
Class : FE
UIN   : 241A038
Aim   : WAP to find the factorial of a number using iterative function.
*/

#include<stdio.h>

int factorialIterative (int num)
{
 int prod = 1,i;
 for(i=1; i<= num; i++)
  {
  prod = prod * i;
  }
 return prod;
}
int main()
 {
  int num;

  printf("\t\t\t*** Iterative Factorial Function *** \n\n");

  printf("Enter Number:"); scanf("%d", &num);

  printf("Factorial of %d is %d", num, factorialIterative (num));

  return 0;
  }
 /*   OUTPUT:

 */
