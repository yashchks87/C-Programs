#include<stdio.h>
int main()
{
  struct student
  {
    int roll_no;
    char name[20];
    float fees;
    char DOB[10];
  };
  struct student stud1;
  printf("Enter roll number:\n");
  scanf("%d",&stud1.roll_no);
  printf("Enter name:\n");
  scanf("%s",&stud1.name);
  printf("Enter fees:\n");
  scanf("%f",&stud1.fees);
  printf("Enter Date of Birth:\n");
  scanf("%s",&stud1.DOB);
  printf("Roll No : %d\n",stud1.roll_no);
  printf("Name : %s\n",stud1.name);
  printf("Fees : %f\n",stud1.fees);
  printf("Date of Birth : %s\n",stud1.DOB);
  return 0;
}
