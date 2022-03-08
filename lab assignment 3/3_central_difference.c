#include<stdio.h>
#include<math.h>
#define f(x) 2*(x)*(x)+5*(x)+9
int main(){
    float h,x,d;
    printf("Enter the value at which derivative is required \n");
    scanf("%f",&x);
    printf("Enter h\n");
    scanf("%f",&h);
    d=((f(x+h))-(f(x-h)))/(2*h);
    printf("Value of Derivative =%f\n",d);
    return 0;
}