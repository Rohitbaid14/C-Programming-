/*
Name  : Rohit Baid
Class : FE
UIN   : 241A038
Aim   : WAP to calculate sum of two matrix
*/

#include<stdio.h>
int main()
{
 int arr1[50][50],brr1[50][50],crr1[50][50],i,j,n;

 printf("Enter the sizs of matix :");
 scanf("%d",&n);

  printf("\n\nAddition of two matrix :\n");
  printf("_____________________________\n");

  printf("Input elements in the first matrix :\n");
  for(i=0;i < n;i++)
  {
        for(j=0;j < n;j++)
        {
            printf("element - [%d],[%d]",i,j);
            scanf("%d :",&arr1[i][j]);

        }

  }

   printf("Input elements in the first matrix :\n");
    for(i=0;i < n;i++)
    {
        for(j=0;j < n;j++)
        {
            printf("element - [%d],[%d] :",i,j);
            scanf("%d :",&brr1[i][j]);
        }
    }

    printf("/nThe First matrix is :\n");
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            printf("%d\t",arr1[i][j]);
        }

    }


    printf("/nThe Second matrix is :\n");
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            printf("%d\t",brr1[i][j]);
        }

    }

    for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
    {
        crr1[i][j] = arr1[i][j] + brr1[i][j];
    }

    printf("\nThe Addition of two matrix is : \n");
    for (i = 0; i < n; i++)
        {
           printf("\n");
           for (j = 0; j < n; j++)
           printf("%d\t", crr1[i][j]);
        }
    printf("\n\n");

  return 0;
}


/* OUTPUT :
*/
