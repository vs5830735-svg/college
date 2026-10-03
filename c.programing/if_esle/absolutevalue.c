#include<stdio.h>
int main()
{
   int n;
   printf("enter the years");
   scanf("%d",&n);
   if(n<0){ //even
    n *= (-1);
   }
   printf("the absolute value is : %d",n);
    return 0;
}