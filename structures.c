#include<stdio.h>
struct Student
{
  char name[20];
  long mobile;
  long enroll;
};
int main()
{
  struct Student stud1;
  // struct Student stud2;
  printf("Enter name of student:\n");
  scanf("%s",&stud1.name);
  printf("Enter mobile of student:\n");
  scanf("%ld",&stud1.mobile);
  printf("Enter name of student:\n");
  scanf("%ld",&stud1.enroll);
  printf("%s\n",stud1.name);
  printf("%ld\n",stud1.mobile);
  printf("%ld\n",stud1.enroll);
}
