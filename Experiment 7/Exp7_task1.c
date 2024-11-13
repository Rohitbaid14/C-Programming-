/*
Name  : Rohit Baid
Class : FE
UIN   : 241A038
Aim   : WAP to find the largest element in an array.
*/

#include<stdio.h>

int main()
{


  int i,n,a[100],large;
 printf("Enter the number of elements :");
 scanf("%d",&n);

 for(i=0;i<n;i++)
  {
    printf("Enter a number:");
    scanf("%d",&a[i]);
  }
  large = a[0];
 for(i=1;i<n;i++)
  {
    if(large <a[i])
     {
        large = a[i];
     }
  }
printf("The largest value is %d ",large);
return 0;
}

/* OUTPUT :
Enter the number of elements :5
Enter a number:23
Enter a number:34
Enter a number:9
Enter a number:4
Enter a number:100
*/

