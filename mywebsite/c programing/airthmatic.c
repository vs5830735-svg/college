#include<stdio.h>
int main(){
   float r;
    printf("Enter the radious:");
    scanf("%f",&r);
    float pi = 3.14;
    float area = pi*r*r;
    float c = 2*pi*r;
    printf("area of circle:%f \nperimeter of circle:%f",area,c);
    int l,b;
    printf("\nenter the first number:");
    scanf("%d",&l);
     printf("enter the second number:");
    scanf("%d",&b);
     area = l*b;
     int perimeter =2*(l+b);
    printf("area of rectangle:%f \nperimeter of rectangle:%d",area,perimeter);
    float base,h,e;
    printf("\nenter the base: ");
    scanf("%f",&base);
     printf("enter the height:");
    scanf("%f",&h);
     printf("enter the hypotenese:");
    scanf("%f",&e);
    area = base*h/2;
   float pe = base+h+e;
    printf("area of triangle:%f \nperimeter of triangle:%f",area,pe);
   return 0;
}