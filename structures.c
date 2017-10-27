#include<stdio.h>
#include<string.h>
struct Student
{
  int roll_no;
  long mobile;
  char name[20];
};
int main()
{
  struct Student stud1;
  printf("Enter name of student\n");
  scanf("%s",&stud1.name);
  printf("Enter roll number of student\n");
  scanf("%d",&stud1.roll_no);
  printf("Enter mobile of student\n");
  scanf("%ld",&stud1.mobile);
  printf("Student's name:%s\n",stud1.name);
  printf("Enter mobile of student:%d\n",stud1.roll_no);
  printf("Enter mobile of student:%ld\n",stud1.mobile);
}
