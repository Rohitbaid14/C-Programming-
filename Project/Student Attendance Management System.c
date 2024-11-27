#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char studname[20][30];
int presentattendance[20]={0};
int absentattendance[20]={0};
int indexnumber=0;

void checkattendance()
{
    int i;
    printf("\n\tTotal present | Total absent \n");
    for(i=0;i<indexnumber;i++)
    {
        printf("%s",studname[i]);
        printf("\t\t %d\t%d \n",presentattendance[i],absentattendance[i]);
    }
}

void addstudent()
{
    int i,num,add;
    if(indexnumber==0)
    {
        printf("Enter how many students you want to add:");
        fflush(stdin);
        scanf("%d",&num);
        for(i=0;i<num;i++)
        {
            printf("\n Enter %d student name to add in attendance register:",i+1);
            fflush(stdin);
            gets(studname[i]);
            indexnumber++;
        }
    }
    else
    {
        printf("Enter how many students you want to add:");
        fflush(stdin);
        scanf("%d",&num);
        add=indexnumber+num;
        for(i=indexnumber;i<add;i++)
        {
            printf("\n Enter %d student name to add in attendance register:",i+1);
            fflush(stdin);
            gets(studname[i]);
            indexnumber++;
        }
    }
}
void removestudent()
{
    char name[30];
    printf("Enter student name to remove:");
    fflush(stdin);
    gets(name);
    for(int i=0;i<indexnumber;i++)
    {
        if(strcmp(name,studname[i])==0)
        {
            for(int j=i;j<indexnumber;j++)
            {
                strcpy(studname[j],studname[j+1]);
                presentattendance[i]=presentattendance[i+1];
                 absentattendance[i]=absentattendance[i+1];
            }
            indexnumber--;
            printf("\n %s student is removed \n",name);
            break;
        }
        else if(i==indexnumber-1)
        {
            printf("This name is not exit \n");
        }
    }
}
void takeattendance()
{
    int i;
    char ch;
    printf("\n Enter Y for present and N for absent \n");
    for(i=0;i<indexnumber;i++)
    {
        repeate:
        printf("%d %s is present:",i+1,studname[i]);
        fflush(stdin);
        scanf("%c",&ch);
        if(ch=='Y'||ch=='y')
        {
            presentattendance[i]+=1;
        }
        else if(ch=='N'||ch=='n')
        {
            absentattendance[i]+=1;
        }
        else
        {
            printf("Invalid character try again \n");
            goto repeate;
        }
    }
}
int main()
{
    int choose;

    printf("\t\t***STUDENT ATTENDANCE SYSTEM***\n\n");
    do
    {
        printf("\n*Main Menu*\n");
        printf("Enter 1 for add student\n");
        printf("Enter 2 for take attendance \n");
        printf("Enter 3 for check attendance \n");
        printf("Enter 4 for remove student \n");
        printf("Enter 5 for exit \n");
        printf("please choose any menu: ");
        fflush(stdin);
        scanf("%d",&choose);
        switch(choose)
        {
            case 1:
            addstudent();
            break;
            case 2:
            takeattendance();
            break;
            case 3:
            checkattendance();
            break;
            case 4:
            removestudent();
            break;
            case 5:
                printf("\n\t*Thank you*");
            exit(0);
            break;
            default:
                printf("Error! Invalid option.");
        }
    }while(choose!=5);
    return 0;
}
