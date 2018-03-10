#include<stdio.h>
#include<math.h>
int a,b,c;
int main()
{
  int choice;
  while(choice != 0)
  {
      printf("1. Input sides");
      printf("2. Perimetere");
      printf("3. Area");
      scanf("%d",&choice);
      switch(choice)
      {
        case 1:
        {
          input_sides();
          break;
        }
        case 2:
        {
          Perimetere();
          break;
        }
        case 3:
        {
          Area();
          break;
        }
      }
  }
}
int Perimetere()
{
  int perimetere;
  perimetere=a+b+c;
  printf("Perimetere of triangle:%d\n",perimetere);
  return 0;
}
int Area()
{
  float area;
  float s;
  s=((a+b+c)/2);
  area = sqrt((s-a)*(s-b)*(s-c));
  printf("Area of triangle:%f\n",area);
  return 0;
}
int input_sides()
{
  printf("Enter sides values:\n");
  scanf("%d %d %d",&a,&b,&c);
  printf("Updated values:%d %d %d\n",a,b,c);
  return 0;
}
