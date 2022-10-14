#include <stdio.h>
#include <math.h>
void printPoly(int a[], int terms)
{
    int d=0;
    printf("%dx^%d",a[d+1],a[d]);
    d+=2;
    while(d<(2*terms))
    {
        if(a[d]==0)
        {
            printf("+%d",a[d+1]);
        }
        else if(a[d]==1)
        {
            printf("+%dx",a[d+1]);
        }
        else
            printf("+%dx^%d",a[d+1],a[d]);
        d+=2;
    }
}
int main()
{
    int a[50],n,i,j,x,px=0;
    system("clear");
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("Enter powers and coefficients: ");
    for(i=0;i<(2*n);i++)
    {
        scanf("%d",&a[i]);
    }
    printPoly(a,n);
    printf("\n\nEnter the input of the function: ");
    scanf("%d",&x);
    for(i=0;i<(2*n);i+=2)
    {
        px+=(a[i+1]*(pow(x,a[i])));
    }
    printf("\n%d",px);
}
