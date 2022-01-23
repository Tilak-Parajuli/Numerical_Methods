/*Program: synthetic division */
#include<stdio.h>
int main(){
    int poly[6], m, r, i, q[6];
    printf("\t\tSYNTHETIC DIVISION");
    printf("\n Enter the highest degree of the equation (max 5): ");
    scanf("%d",&m);

    for(i=0;i<=m;i++){
        printf("\n Coefficient x[%d] = ", m-i);
        scanf("%d",&poly[i]);
    }

    printf("\n Enter the value of constant in (x-r) : ");
    scanf("%d",&r);
    q[0] = poly[0];
    for(i=1;i<=m;i++){
        q[i] = (q[i-1]*r)+poly[i];
    }

    printf("\n Coefficients of quotient are: \n");
    for(i=0;i<m;i++){
        printf("\t%d",q[i]);
    }
    printf("\n Remainder is: %d\n", q[m]);
    return 0;
}