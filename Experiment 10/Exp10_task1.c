/*
Name  : Rohit Baid
Class : FE
UIN   : 241A038
Aim   : WAP to add two numbers using pointers.
*/

#include <stdio.h>

int main()
{
  int num1,num2,sum;
  int *ptr1, *ptr2;

  printf("\t\t * Addition using Pointers * \n\n");

  printf ("Enter first number: ");
  scanf("%d", &num1);

  printf("Enter second number: ");
  scanf("%d", &num2);

  ptr1 = &num1;
  ptr2 = &num2;

  sum = *ptr1 + *ptr2;

  printf("Sum of %d and %d is: %d\n",num1,num2,sum);

  return 0;
}

/* OUTPUT:
                 * Addition using Pointers *

Enter first number: 12
Enter second number: 13
Sum of 12 and 13 is: 25
*/
