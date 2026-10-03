#include<stdio.h>
int main()
{
   int n;
   printf("enter the years");
   scanf("%d",&n);
   if(n%4==0){ //even
    printf("leap year by 4");
   }
   else{
    printf("not leap year by 4");
   }
    return 0;
}