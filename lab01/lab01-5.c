#include<stdio.h>
int main()
{
   int amount = 19;
   int b50 = amount / 50;
   int b20 = (amount - b50*50) / 20;
   int b5 = (amount - b50*50 -b20*20) / 5;
    int b1 = (amount - b50*50 - b20*20 -b5*5);
    printf("1: %d\n", b1);
    printf("5: %d\n", b5);
    printf("20: %d\n", b20);
    printf("50: %d\n", b50);
   return 0;
}