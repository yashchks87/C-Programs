#include<stdio.h>
// Variables which are declared using define will be reamin constat through whole program.
#define MAX 10
int st[MAX];
int top= -1;
// These 4 function definition will be declared on top of scope to get accessed from anywhere.
int push();
int pop();
int peep();
int display();
int main()
{
  int option;
  // While will loop will terminate if "0" is pressed.
  while(option!=0)
  {
    printf("******MAIN MENU******\n");
    printf("Folks are you ready to some play with stack?????\n");
    printf("1.PUSH\n");
    printf("2.POP\n");
    printf("3.PEEP\n");
    printf("4.DISPLAY\n");
    printf("Choose appropriate option\n");
    scanf("%d",&option);
    switch(option)
    {
      case 1:
      {
        // It will add value in stack.
        push();
        break;
      }
      case 2:
      {
        // It will remove value from stack.
        pop();
        break;
      }
      case 3:
      {
        // It will display top-most value in stack.
        peep();
        break;
      }
      case 4:
      {
        // It will display whole stack.
        display();
        break;
      }
    }
  }
  return 0;
}
int push()
{
  int val;
  printf("Enter value to push in stack.\n");
  scanf("%d\n",&val);
  //If the top value is at very bottom then the stack will be empty.
  if(top == MAX-1)
  {
    printf("everything is full, let me empty first...\n");
  }
  else
  {
// First we require to create space and then we can fill some new values.
    top+=1;
    st[top]=val;
  }
  return 0;
}
int pop()
{
  int del_value;
  if(top == -1)
  {
    printf("Nothing to delete.");
  }
  else
  {
    del_value = st[top];
    // Actual deletion of values is done over-here upper statement will just print the value.
    top--;
  }
  return 0;
}
int display()
{
  // int i;
  if(top==-1)
  {
    printf("Nothing to show, stack is empty.\n");
  }
  else
  {
    for(int i=top;i>=0;i--)
    {
      printf("%d\n",st[i]);
    }
  }
  return 0;
}
// This function will simply print the top-most value of the stack.
int peep()
{
  int top_value;
  if(top==-1)
  {
    printf("Nothing to print....\n");
  }
  else
  {
    top_value=st[top];
    printf("The top most value is %d\n",top_value);
  }
  return 0;
}
