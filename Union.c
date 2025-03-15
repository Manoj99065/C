#include<stdio.h>
#include<conio.h>
union student
{
   char name[10];
   int age;
   int roll_no;
};
union date_of_birth
{
   int date;
   int month;
   float year;
};
void main()
{
   union student s1={"manoj",21,23};
   union date_of_birth d1={14,12,2003.1};
   printf("The name of student is = %s \nThe age of student is = %d \nThe Roll_no of the student is = %d ",s1.name,s1.age,s1.roll_no);
   printf("\n\nThe date of the student is = %d \nTHe month of the student is = %d \nThe year of the student is = %f ",d1.date,d1.month,d1.year);
   getch();

}
