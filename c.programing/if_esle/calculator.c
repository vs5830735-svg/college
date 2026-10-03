#include<stdio.h>
int main(){
	int choice,a,b;
	printf("1. Addition\n 2. subtraction\n 3. multiplication\n 4. division");
	printf("\nchoice the number:");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("Enter the number:");
			scanf("%d %d",&a,&b);
			printf("Addition a+b=%d",a+b);
			break;
			case 2:
			printf("Enter the number:");
			scanf("%d %d",&a,&b);
			printf("subtraction a-b=%d",a-b);
			break;
			case 3:
			printf("Enter the number:");
			scanf("%d %d",&a,&b);
			printf("multiplication a*b=%d",a*b);
			break;
			case 4:
			printf("Enter the number:");
			scanf("%d %d",&a,&b);
			printf("division a/b=%d",a/b);
			break;
			default:
				printf("invalid number");
	}
	return 0;
}
