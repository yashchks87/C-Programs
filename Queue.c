#include<stdio.h>
#define MAX 20
int myArray[MAX];
int front = 1, rear = 0;
int insert();
int delete();
int peek();
int display();
int main(){
  int option;
  while(option!=0){
    printf("********MAIN MENU********\n");
    printf("1. Insert\n");
    printf("2. Delete\n");
    printf("3. PEEK\n");
    printf("4. DISPLAY\n");
    printf("Please choose appropriate option.\n");
    printf("Please press 0 for exit.\n");
    scanf("%d",&option);
    switch(option){
      case 1:
        insert();
        break;

      case 2:
        delete();
        break;

      case 3:
        peek();
        break;

      case 4:
        display();
        break;
    }
  }
}
int insert(){
  if(rear == MAX){
    printf("Queue is full nothing to add.\n");
  }
  else{
    int data;
    printf("Enter value which you want to add in queue.\n");
    scanf("%d",&data);
    rear++;
    myArray[rear] = data;
    printf("The added value is %d\n.",data);
  }
  return 0;
}
int delete(){
  if(front == MAX && rear == 0){
    printf("Queue is empty.\n");
  }
  else{
    int data = myArray[front];
    front++;
    printf("Deleted value is %d\n", data);
  }
  return 0;
}
int peek(){
  if(front == MAX && rear == 0){
    printf("Queue is empty, nothing to show.\n");
  }
  else{
    int data = myArray[front];
    printf("The very first element is %d.\n", data);
  }
  return 0;
}
int display(){
  if(front == MAX && rear == 0){
    printf("Queue is empty, nothing to show.\n");
  }
  else{
    for(int i=1;i<=MAX;i++){
      printf("Queue[%d]=%d\n",i,myArray[i]);
    }
  }
  return 0;
}
