//Program for Solution of ODE using Heun's Method
#include<stdio.h>
#define f(x,y) 2*y/x
int main(){
    float x,y,h,xn,l;
    printf("Enter value for x and y\n");
    scanf("%f%f",&x,&y);
    printf("Enter value for h and last of x\n");
    scanf("%f%f",&h,&xn);
    while(x+h<=xn){
        l=(h/2)*(f(x,y)+f(x+h,y+h*f(x,y)));
        y=y+l;
        x=x+h;
        printf("y = %f\tx = %f\n",y,x);
    }
    return 0;
}