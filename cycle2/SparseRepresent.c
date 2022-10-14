#include <stdio.h>
typedef struct{
    int row;
    int col;
    int val;
}sparse;
void printSparse(sparse a[])
{
    int i;
    for(i=0;i<=a[0].val;i++)
    {
        printf("\n%d %d %d",a[i].row,a[i].col,a[i].val);
    }
    printf("\n\n");
}
int main()
{
    int i,j,m,n,k=1,element;
    float sparsity;
    sparse a[100];
    system("clear");
    printf("Enter the number of rows: ");
    scanf("%d",&m);
    printf("Enter the number of columns: ");
    scanf("%d",&n);
    a[0].row=m;
    a[0].col=n;
    printf("Enter the sparse matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&element);
            if(element!=0)
            {
                a[k].row=i;
                a[k].col=j;
                a[k].val=element;
                k++;
            }
        }
    }
    a[0].val=k-1;
    sparsity = (float) (m*n+1-k)/(m*n);
    printSparse(a);
    printf("\nsparsity = %f",sparsity);
}
