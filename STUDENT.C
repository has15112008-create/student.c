#include <stdio.h>
struct student
{
char name[50];
int rollno;
float marks;
char city [20];
char dream [20];
};
void main()
{
int i;

struct student s[10];
clrscr();
for(i=0;i<10;i++)
{
printf("\nenter student %d\n",1+1);
printf("enter the name:");
flushall();
scanf("%s",s[i].name);
printf("enter the rollno:");
flushall();
scanf("%d",&s[i].rollno);
printf("enter the marks:");
flushall();
scanf("%d",&s[i].marks);
printf("enter the city:");
flushall();
scanf("%s",s[i].city);
printf("enter the dreams");
flushall();
scanf("%s",s[i].dream);
}
printf("\n====5 students details====\n");
for(i=0;i<10;i++);
{
printf("\n===student %d===\n",i+1);
printf("name:%s\n",s[i].name);
printf("rollno:%%d\n",s[i].rollno);
printf("marks:%d\n",s[i].marks);
printf("city:%s\n",s[i].city);
printf("dream:%s\n",s[i].dream);
}
getch();
}







