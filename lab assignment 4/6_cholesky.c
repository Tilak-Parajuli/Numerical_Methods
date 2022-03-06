#include<stdio.h>
#include<malloc.h>
#include<math.h>

int main()
{

 double a[3][3]={{2,-1,0},{-1,2,-1},{0,-1,2}};
 double L[3][3]={0};
 double LT[3][3]={0};
 int i=0,j=0,k=0;
 double temp=0; 

 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  { 
   temp=0;
   if(i==j)
   {
    for(k=0;k<j;k++)
    {
     temp+=((L[j][k])*(L[j][k]));
    }

    L[i][j]=sqrt((double)(a[i][j]-temp));
   }

   if(i>j)
   {
    for(k=1;k<j;k++)
    {
     temp+=((L[i][k]*L[j][k]));
    }
    L[i][j]=(1/(L[j][j]))*((a[i][j])-temp);
   }

   if(i<j)
   {
    L[i][j]=0;
   }
  }
 }
 printf("\n\nGiven Matrixis\n\n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   printf("%2f\t",a[i][j]);
  }
  printf("\n");
 }
 // Cheloskey Transform
 printf("\n\n\nGiven Matrix cheloskey Transform is\n\n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   printf("%2f\t",L[i][j]);
  }
  printf("\n");
 }

 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   LT[i][j]=L[j][i];

  }
 }

 printf("\n");
 printf("\n\n\nTranspose of L MAtrix is");
 printf("\n");
 printf("\n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   printf("%2f\t",LT[i][j]);
  }
  printf("\n");
 }
 
 return 0;
}