#include<stdio.h>
int main(){
    float m1,m2,m3,m4,m5;
    printf("Enter math :");
    scanf("%f",&m1);
     printf("Enter hindi :");
    scanf("%f",&m2);
     printf("Enter english :");
    scanf("%f",&m3);
     printf("Enter science :");
    scanf("%f",&m4);
     printf("Enter social :");
    scanf("%f",&m5);
    float p = (m1 + m2 + m3 + m4 + m5 )/100;
    printf("precentage of the student : %f",m1,m2,m3,m4,m5,p);
    return 0;
}