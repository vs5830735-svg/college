#include<stdio.h>
int main()
{    
   int cp;
   printf("enter the cost price:");
   scanf("%d",&cp);
   int sp;
   printf("enter the selling price:");
   scanf("%d",&sp);
   if(sp>cp){ //even
    printf("profit");
   }
   if(sp<cp){
    printf("loss")
   }
   if(sp==cp)
   {
    printf("no profit, no loss")
   }
    return 0;
}