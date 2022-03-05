#include<stdio.h>
#include<math.h>
int fact(int n){
    if(n==1){
        return 1;
    }
    else
        return(n*fact(n-1));
}
int main(){
    float x,x0,yx0,yx,fdy,sdy,tdy;
    printf("Enter initial value of x and y \n");
    scanf("%f%f",&x0,&yx0);
    printf("ENter x at which function to be evaluated\n");
    scanf("%f",&x);
    fdy=(x0)*(x0)*(yx0)*(yx0);//first derivative
    sdy=2*(x0)+2*(yx0)*fdy;//second derivative
    tdy=2+2*yx0*sdy+2*fdy*fdy;//Third derivative
    yx=yx0+(x-x0)*fdy+(x-x0)*(x-x0)*sdy/fact(2)+(x-x0)*(x-x0)*(x-x0)*tdy/fact(3);
    printf("Functional value at x= %f is %f \n\n\n",x,yx);
    return 0;
}