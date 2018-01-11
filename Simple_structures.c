#include<stdio.h>
#include<string.h>
int main()
{
  struct Person {
    int number;
    char name[25];
    int nu_of_hobbies;
  } Person1;
  Person1.number = 14;
  //Only strcpy will work, no assignment is possbile in this criteria.
  strcpy(Person1.name,"Yash");
  Person1.nu_of_hobbies = 3;
  printf("Number alloted to person=%d\n",Person1.number);
  printf("Name of person=%s\n",Person1.name);
  printf("Number of hobbies of person=%d\n",Person1.nu_of_hobbies);
}
