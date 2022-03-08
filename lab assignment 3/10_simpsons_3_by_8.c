#include<stdio.h>
#include<math.h>

/* Define function here */
#define f(x) 2*(x)*(x)+1;

int main()
{
 float h,x0,x1,x2,x3,fx0,fx1,fx2,fx3,v;
 int n=3;
 printf("Enter lower limit of integration: ");
 scanf("%f", &x0);
 printf("Enter upper limit of integration: ");
 scanf("%f", &x3);
 h=(x3-x0)/n;
 x1=x0+h;
 x2=x0+2*h;
 fx0=f(x0);
 fx1=f(x1);
 fx2=f(x2);
 fx3=f(x3);
 v=3/8.0*h*(fx0+3*fx1+3*fx2+fx3);
 printf("\nRequired value of integration is: %f\n",v);
 return 0;
}