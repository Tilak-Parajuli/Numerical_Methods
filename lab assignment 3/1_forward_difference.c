#include<stdio.h>
#include<math.h>
#define PI 3.1415
#define f(x) sin(x)+1
int main(){
    float angle,h,x,d;
    printf("Enter angle in Degree \n");
    scanf("%f",&angle);
    printf("Enter h\n");
    scanf("%f",&h);
    x=PI/180*angle;//converting degree to radian
    d=((f(x+h))-(f(x)))/h;
    printf("Vlue of Derivative =%f\n",d);
    return 0;
}