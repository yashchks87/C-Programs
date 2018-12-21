#include<stdio.h>
#include<math.h>
int main()
{
  struct point
  {
    int x1, y1, x2, y2;
  };
  struct point p1;
  printf("Enter point x1:\n");
  scanf("%d",&p1.x1);
  printf("Enter point y1:\n");
  scanf("%d",&p1.y1);
  printf("Enter point x2:\n");
  scanf("%d",&p1.x2);
  printf("Enter point x2:\n");
  scanf("%d",&p1.y2);
  printf("x1:%d\n y1:%d\n x2:%d\n y2:%d\n",p1.x1, p1.y1, p1.x2, p1.y2);
  int x_variance, y_variance;
  int distance_phase1 = (x_variance*x_variance) + (y_variance*y_variance);
  float distance = sqrt(distance_phase1);
  printf("The distance between 2 points:%f\n",distance);
}
