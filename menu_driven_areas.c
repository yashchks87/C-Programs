#include<stdio.h>
float area_of_triangle();
float area_of_circle();
int area_of_square();
int area_of_rectangle();
int main()
{
  //int r,l,b;
  float triangle,circle,square,rectangle;
  int choice;
  do
  {
    printf("******MAIN MENU******\n");
    printf("1.Triangle\n");
    printf("2.Circle\n");
    printf("3.Square\n");
    printf("4.Rectangle\n");
    printf("Choose any 1 option\n");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
      {
        triangle=area_of_triangle();
        printf("Area of triangle=%f\n",triangle);
        break;
      }
      case 2:
      {
        circle=area_of_circle();
        printf("Area of circle=%f\n",circle);
        break;
      }
      case 3:
      {
        square=area_of_square();
        printf("Area of square=%f\n",square);
        break;
      }
      case 4:
      {
        rectangle=area_of_rectangle();
        printf("Area of square=%f\n",rectangle);
        break;
      }
    }
  }
  while(choice>0);
}
float area_of_triangle()
{
  int b,h;
  float area_of_triangle1;
  printf("Enter values of base & height\n");
  scanf("%d %d",&b,&h);
  area_of_triangle1=0.5*b*h;
  return area_of_triangle1;
  //printf("Area of tringle:%f\n",area_of_triangle1);
  //return 0;
}
float area_of_circle()
{
  int r;
  float area_of_circle1;
  printf("Enter value of radius\n");
  scanf("%d",&r);
  area_of_circle1=3.14*r*r;
  return area_of_circle1;
  //printf("Area of tringle:%f\n",area_of_triangle1);
  //return 0;
}
int area_of_square()
{
  int l;
  float area_of_square1;
  printf("Enter value of length\n");
  scanf("%d",&l);
  area_of_square1=l*l;
  return area_of_square1;
  //printf("Area of tringle:%f\n",area_of_triangle1);
  //return 0;
}
int area_of_rectangle()
{
  int l,b;
  float area_of_rectangle1;
  printf("Enter value of length and breadth\n");
  scanf("%d %d",&l,&b);
  area_of_rectangle1=l*b;
  return area_of_rectangle1;
  //printf("Area of tringle:%f\n",area_of_triangle1);
  //return 0;
}
