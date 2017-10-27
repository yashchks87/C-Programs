#include<stdio.h>
convert_bin();
hamming_check();
int main()
{
  int datasend[10],dataatrec[10],option;
  while(option>0)
  {
    printf("Enter a correct option\n");
    scanf("%d",&option);
    printf("*****MAIN MENU*****\n");
    printf("1.Covert decimal to binary\n");
    printf("2.Check Hamming code\n");
    printf("Please press 0 for exit\n");
    printf("\n\n");
    switch(option)
    {
      case 1:
      {
          convert_bin();
          break;
      }
      case 2:
      {
        hamming_check();
        break;
      }
    }
  }
}
convert_bin()
{
  int dec_num,reminder=0,nu_of_1s=0,binary=0,base=1;
  printf("Enter decimal number\n");
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
  printf("Decimal number=%d\n",dec_num);
  printf("Number of 1s in this binary=%d",nu_of_1s);
  printf("Your equivalent binary number=%d",binary);
}
hamming_check()
{
    int data_sent[10],data_receiver[10],changed_bits=0,i,j;
    printf("Please write data send values\n");
    for(i=1;i<=5;i++)
    {
      scanf("%d",&data_sent[i]);
    }
    for(i=1;i<=5;i++)
    {
      printf("Data sent bits are:%d",data_sent[i]);
    }
    printf("Please write data receiver values\n");
    for(i=1;i<=5;i++)
    {
      scanf("%d",&data_receiver[i]);
    }
    for(i=1;i<=5;i++)
    {
      printf("Data sent bits are:%d",data_receiver[i]);
    }
    for(i=1,j=1;i<=5,j<=5;i++,j++)
    {
        if(data_sent[i]!=data_receiver[j])
        {
          changed_bits++;
        }
    }
    printf("The hamming distance=%d\n",changed_bits);
}
