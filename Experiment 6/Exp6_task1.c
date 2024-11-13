/*
Name  : Rohit Baid
Class : FE
UIN   : 241A038
Aim   : WAP to define a counter function to print how many times the function is called.Use static storage classes
*/

#include<stdio.h>
 void counter()
{
 static int count = 0;
 count++;
 printf(" Counter function called :%d\n", count);
}
 int main()
 {
  int i;
  printf("\t\t\t  ***Storage Class*** \n\n");
  for(i=1;i<=32;i++)
   {
    counter();
   }
   return 0;
 }
/* OUTPUT :
                         ***Storage Class***

 Counter function called :1
 Counter function called :2
 Counter function called :3
 Counter function called :4
 Counter function called :5
 Counter function called :6
 Counter function called :7
 Counter function called :8
 Counter function called :9
 Counter function called :10
 Counter function called :11
 Counter function called :12
 Counter function called :13
 Counter function called :14
 Counter function called :15
 Counter function called :16
 Counter function called :17
 Counter function called :18
 Counter function called :19
 Counter function called :20
 Counter function called :21
 Counter function called :22
 Counter function called :23
 Counter function called :24
 Counter function called :25
 Counter function called :26
 Counter function called :27
 Counter function called :28
 Counter function called :29
 Counter function called :30
 Counter function called :31
 Counter function called :32
*/
