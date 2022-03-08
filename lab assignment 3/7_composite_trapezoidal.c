#include<stdio.h>
#include<math.h>
#define f(x) (x)*(x)+2*(x)+1

int main(){
 float a,h,x0,xn,fx0,fxn,term,v;
 int i,k;
 printf("Enter lower limit of integration: ");
 scanf("%f", &x0);
 printf("Enter upper limit of integration: ");
 scanf("%f", &xn);
 printf("Enter number of segments :");
 scanf("%d",&k);
 h=(xn-x0)/k;
 fx0=f(x0);
 fxn=f(xn);
 term=f(x0)+f(xn);
 for(i=1;i<=k-1;i++){
     a=x0+i*h;
     term=term+2*(f(a));
 }
 v=h/2*term;
 printf("\nRequired value of integration is: %f\n",v);
 return 0;
}