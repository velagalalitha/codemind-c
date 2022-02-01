#include<stdio.h>
int main()
{
   int num,r,a = 0;
   scanf("%d",&num);
   while (num>0) {
       r = num % 10;
       if (a<r) {
           a=r;
       }
       num=num/10;
   }
   printf("%d",a);
   return 0;
}