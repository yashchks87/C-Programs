#include<stdio.h>
#include<math.h>
int main()
{
  int X;
  float new_balance,Y,final_balance;
  printf("Enter amount to withdraw:\n");
  scanf("%d",&withdraw);
  printf("Enter existing balance:\n");
  scanf("%f",&balance);
  new_balance=(balance-withdraw)-0.5;
  final_balance=roundf(100*new_balance)/100;
  printf("New balance will be: %.2f\n",final_balance);
}
