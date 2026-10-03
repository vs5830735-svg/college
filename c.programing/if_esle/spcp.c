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
   else if(sp<cp){
    printf("loss");
   }
  else{
  	printf("no profit no loss");
  }
    return 0;
}
