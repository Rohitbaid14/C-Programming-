/*
Name  : Rohit Baid
Class : FE
UIN   : 241A038
Aim   : WAP to check if the entered string is palindrome or not.
*/

#include<stdio.h>
#include<string.h>
void main(){
char str[100];
int i;
printf("\t\t***palindrome finder***\n\n");
printf("enter your string:");
gets(str);
for(i=0;i<strlen(str)-1;i++){
    if(str[i]!=str[strlen(str)-1-i] ){
        printf("the string is not a palindrome");
        return 0;
    }
    }
    printf("the string is palindrome");
    return 0;
}

/* OUTPUT:
                ***palindrome finder***

enter your string:malayalam
the string is palindrome
*/
