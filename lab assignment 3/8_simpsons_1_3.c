#include<stdio.h>
#include<math.h>

/* Define function here */
#define f(x) 3*(x)*(x)+2*(x)-5

int main()
{
 float h,x0,x1,x2,fx0,fx1,fx2,v;
 int n=2;
 printf("Enter lower limit of integration: ");
 scanf("%f", &x0);
 printf("Enter upper limit of integration: ");
 scanf("%f", &x2);
 h=(x2-x0)/n;
 x1=x0+h;
 fx0=f(x0);
 fx1=f(x1);
 fx2=f(x2);
 v=h/3*(fx0+4*fx1+fx2);
 printf("\nRequired value of integration is: %f\n",v);
 return 0;
}