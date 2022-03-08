#include<stdio.h>
#include<math.h>
#define f(x) (x)*(x)+2*(x)+1

int main(){
 float h,x0,x1,fx0,fx1,v;
 printf("Enter lower limit of integration: ");
 scanf("%f", &x0);
 printf("Enter upper limit of integration: ");
 scanf("%f", &x1);
 h=x1-x0;
 fx0=f(x0);
 fx1=f(x1);
 v=h/2*(fx0+fx1);
 printf("\nRequired value of integration is: %f\n",v);
 return 0;
}