#include<stdio.h>
int or1,or2;
float answer;
int main()
{
  int option;
  while(option!=0)
  {
    printf("1. Read values.\n");
    printf("2. Display values and answer.\n");
    printf("3. Sum\n");
    printf("4. Diff\n");
    printf("5. Mul\n");
    printf("6. Div\n");
    printf("Choose a option\n");
    scanf("%d",&option);
    switch(option)
    {
      case 1:
      {
        Read();
        break;
      }
      case 2:
      {
        Display();
        break;
      }
      case 3:
      {
        Sum();
        break;
      }
      case 4:
      {
        Diff();
        break;
      }
      case 5:
      {
        Mul();
        break;
      }
      case 6:
      {
        Div();
        break;
      }
    }
  }
}
Read()
{
  printf("Enter values:\n");
  scanf("%d %d",&or1,&or2);
}
Display()
{
  printf("Values you entered are:%d %d \n",or1,or2);
  printf("Answer:%f",answer);
}
Sum()
{
  answer=or1+or2;
  printf("Opertation performed:+\n");
}
Diff()
{
  answer=or1-or2;
  printf("Opertation performed:-\n");
}
Mul()
{
  answer=or1*or2;
  printf("Opertation performed:*\n");
}
Div()
{
  answer=or1/or2;
  printf("Opertation performed:/\n");
}
