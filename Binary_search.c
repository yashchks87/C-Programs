#include<stdio.h>
int main(){
  int myArray[20], length;
  printf("Enter length of array.\n");
  scanf("%d\n", &length);
  for(int i=1;i<=length;i++){
    scanf("%d\n", &myArray[i]);
  }
}
