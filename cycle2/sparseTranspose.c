#include <stdio.h>
typedef struct
{
    int row;
    int col;
    int val;
}term;
void transpose(term a[], term b[])
{
    int i,j,k=1,n;
    n=a[0].val;
    b[0].col=a[0].row;
    b[0].row=a[0].col;
    b[0].val=n;
    if(n>0)
    {
        for(i=0;i<a[0].col;i++)
        {
            for(j=0;j<n+1;j++)
            {
                if(a[j].col==i)
                {
                    b[k].row=a[j].col;
                    b[k].col=a[j].row;
                    b[k].val=a[j].val;
                    k++;
                }
            }
        }
    }
    printf("\n");
    for(i=0;i<n+1;i++)
    {
        printf("%d ",b[i].row);
        printf("%d ",b[i].col);
        printf("%d",b[i].val);
        printf("\n");
        
    }
}
int main()
{
    int i,n;
    term a[10],b[10];
    system("clear");
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    printf("Enter the sparse matrix representation\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i].row);
        scanf("%d",&a[i].col);
        scanf("%d",&a[i].val);
    }
    transpose(a,b);
}
