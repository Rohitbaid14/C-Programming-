/*
Name  : Rohit Baid
Class : FE
UIN   : 241A038
Aim: WAP to print the elements of an array in Reverse order using pointers.
*/

#include <stdio.h>
int main()
{
int n,i;
printf("*** Array Reverser *** \n\n");

printf("Enter the size of the array: ");
scanf("%d", &n);

int arr[n];
int *ptr = arr;


printf("Enter the elements of the array:\n");
for(i=0;i<n;i++)
{
    printf("%d :",i);
    scanf("%d",ptr + i);
}
printf("\nArray elements in reverse order:\n");
for(i = n - 1;i >= 0;i--)
{
    printf("%d ", *(ptr + i));
}
printf("\n");

return 0;
}

/* OUTPUT:
*** Array Reverser ***

Enter the size of the array: 3
Enter the elements of the array:
0 :23
1 :45
2 :78

Array elements in reverse order:
78 45 23
*/
