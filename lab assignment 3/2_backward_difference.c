#include<stdio.h>
#include<math.h>
#define PI 3.1415
#define f(x) 2*exp(x)
int main(){
    float h,x,d;
    printf("Enter the value at which derivative is required \n");
    scanf("%f",&x);
    printf("Enter h\n");
    scanf("%f",&h);
    d=((f(x))-(f(x-h)))/h;
    printf("Value of Derivative =%f\n",d);
    return 0;
}