/* name:Rohit Baid class:FE UIN:241A038
   Aim:WAP to get students PCM marks from the user and find the average.
       Use conditional operator to print if the student is eligible for admission. Eligibility criteria is 50% in PCM
*/
#include <stdio.h>
int main()
{
int p,c,m,avg;
printf("Enter Physics Marks:");
scanf("%d",&p);
printf("\nEnter Chemistry Marks:");
scanf("%d",&c);
printf("\nEnter Math Marks:");
scanf("%d",&m);
avg=(p+c+m)/3;
printf("\nPCM Average =%d",avg);
avg >= 50? printf("\nEligible for Admission"): printf("\nNot Eligible for Admission");
return 0;
}

/* output:

Enter Physics Marks: 46

Enter Chemistry Marks:78

Enter Math Marks:67

PCM Average =63
Eligible for Admission */

