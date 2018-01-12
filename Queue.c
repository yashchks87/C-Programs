#include<stdio.h>
#define MAX 4
int que[MAX];
int front=MAX;
int rear=MAX;
int enque();
int deque();
int peek();
int isFull();
int isEmpty();
int display();
int main()
{
  int option;
  while(option!=0)
  {
    printf("*****MAIN MENU******\n");
    printf("1.Add new value in queue\n");
    printf("2.Remove value from array\n");
    printf("3.Print top-most value of queue.\n");
    printf("4.Check queue is full or not.\n");
    printf("5.Check queue is empty or not.\n");
    printf("6.Print whole queue.\n");
    printf("Choose appropriate option\n");
    scanf("%d",&option);
    switch(option)
    {
      case 1:
      {
        enque();
        break;
      }
      case 2:
      {
        deque();
        break;
      }
      case 3:
      {
        peek();
        break;
      }
      case 4:
      {
        isFull();
        break;
      }
      case 5:
      {
        isEmpty();
        break;
      }
      case 6:
      {
        display();
      }
    }
  }
  return 0;
}
int enque()
{
  int val;
  printf("Enter value you want to enter\n");
  scanf("%d",&val);
  if(isFull()==0)
  {
    printf("Queue is full, can't able to add.\n");
  }
  else
  {
    que[rear]=val;
    rear--;
  }
  return 0;
}
int deque()
{
  int removed_value;
  if(isEmpty()==1)
  {
    printf("Yes, Queue is empty nothing to deque.\n");
  }
  else
  {
    removed_value = que[front];
    front--;
  }
  return 0;
}
int isFull()
{
  if(front == MAX && rear == 0)
  {
    printf("Queue is full\n");
    return 0;
  }
  else
  {
    printf("Scope is present, you can add some elements.\n");
    return 1;
  }
}
int isEmpty()
{
  if(front < rear)
  {
    printf("Queue is empty.\n");
    return 1;
  }
  else
  {
    printf("Queue is not empty.\n");
    return 0;
  }
}
int peek()
{
  int top_value;
  top_value = que[front];
  printf("First value in queue is:%d\n",top_value);
  return 0;
}
int display()
{
  for(int i=front;i>rear;i--)
  {
    printf("Queue[%d]=%d\n",i,que[i]);
  }
  return 0;
}
