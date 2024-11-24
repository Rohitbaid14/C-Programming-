/*
Name  : Rohit Baid
Class : FE
UIN   : 241A038
Aim   : Design a structure student_record to contain name, roll_number, and total marks obtained.
Write a program to read 5 students data from the user and then display the topper on the screen.
*/

#include <stdio.h>
struct student_record{
char name[50];
int roll_num;
float total_marks;

};


void input_student_data(struct student_record students[],int n)
{
    int i;
    for(i=0;i < n;i++)
    {
        printf("Enter details for student %d:\n",i+1);
        printf("Name: ");
        scanf(" %s",&students[i].name);
        printf("Roll Number: ");
        scanf("%d",&students[i].roll_num);
        printf("Total Marks");
        scanf("%d", &students[i].total_marks);
    }
}

int find_topper(struct student_record students[],int n)
{
    int i,topper_index = 0;
    for(i = 1;i < n;i++)
    {
        if(students[i].total_marks > students[topper_index].total_marks)
        {
            topper_index = i;
        }
    }
    return topper_index;
}

int main()
{
    int n=5;
    struct student_record students[n];
    printf("\t\t ***Topper Finder***\n\n");
    input_student_data(students,n);

    int topper_index = find_topper(students,n);
    printf("\nTopper Details:\n");
    printf("Name: %s\n",students[topper_index].name);
    printf("Roll Number: %d\n",students[topper_index].roll_num);
    printf("Total Marks: %d\n",students[topper_index].total_marks);

    return 0;

}

/* OUTPUT:
Enter details for student 1:
Name: rohit
Roll Number: 35
Total Marks25
Enter details for student 2:
Name: mohsin
Roll Number: 29
Total Marks20
Enter details for student 3:
Name: samrat
Roll Number: 34
Total Marks10
Enter details for student 4:
Name: aayush
Roll Number: 32
Total Marks45
Enter details for student 5:
Name: muntazir
Roll Number: 16
Total Marks34

Topper Details:
Name: aayush
Roll Number: 32
Total Marks: 45
*/
