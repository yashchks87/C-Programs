//Puts is used but compiler shows it as a unsafe function.
#include<stdio.h>
//We have written string.h as header file but both gets and puts are
//also part of stdio.h header file.
#include<string.h>
int main()
{
  char name[30];
  printf("Enter Name:\n");
  gets(name);
  //It shows as a unsafe function becasue it doesn't give proper inforamtion
  //about how many actual words are there in your string.
  printf("Your entered text:\n");
  puts(name);
}
