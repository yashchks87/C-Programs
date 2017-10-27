#include<stdio.h>
int main()
{
  int dec_num,reminder=0,nu_of_1s=0,binary=0,base=1;
  printf("Enter a decimal number\n");
  scanf("%d",&dec_num);
  while(dec_num>0)
  {
    reminder=dec_num%2;
    if(reminder==1)
    {
      nu_of_1s++;
    }
    binary=binary+reminder*base;
    dec_num/=2;
    base*=10;
  }
  printf("Your decimal number=%d\n",dec_num);
  printf("Number of 1's in binary=%d\n",nu_of_1s);
  printf("Your binary equivalent=%d\n",binary);
}
