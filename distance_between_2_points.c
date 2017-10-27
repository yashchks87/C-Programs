#include<stdio.h>
#include<math.h>
int main()
{
  int x1,x2,y1,y2;
  float distance;
  printf("Enter co-ordinates of 2 points\n");
  scanf("%d %d %d %d",&x1,&x2,&y1,&y2);
  distance=sqrt(((x2-x1)*(x2-x1))-((y2-y1)*(y2-y1)));
  printf("Distance between 2 points:%f\n",distance);
}
