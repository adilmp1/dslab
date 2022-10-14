#include <stdio.h>
#include <stdlib.h>
int count=1;
typedef struct{
    int row;
    int col;
    int val;
}sparse;
void readSparse(sparse a[])
{
    int i,j,k=1,row,element;
    printf("Matrix - %d\n",count);
    count++;
    printf("Enter number of rows: ");
    scanf("%d",&row);
    printf("Enter matrix representation\n");
    for(i=0;i<row;i++)
    {
        scanf("%d",&a[i].row);
        scanf("%d",&a[i].col);
        scanf("%d",&a[i].val);
    }
}
void sparseAdd(sparse a[],sparse b[],sparse sum[])
{
    int i=1,j=1,l=1;
    if(a[0].row!=b[0].row || a[0].col!=b[0].col)
    {
        printf("Cannot Add !");
        exit(0);
    }
    sum[0].row=a[0].row;
    sum[0].col=a[0].col;
    while(i<=a[0].val && j<=b[0].val)
    {
        if(a[i].row < b[j].row || (a[i].row == b[j].row && a[i].col < b[j].col))
        {
            sum[l].row=a[i].row;
            sum[l].col=a[i].col;
            sum[l].val=a[i].val;
            i++;
            l++;
        }
        else if(a[i].row > b[j].row || (a[i].row == b[j].row && a[i].col > b[j].col))
        {
            sum[l].row=b[j].row;
            sum[l].col=b[j].col;
            sum[l].val=b[j].val;
            j++;
            l++;
        }
        else if(a[i].row==b[j].row && a[i].col==b[j].col)
        {
            sum[l].row=a[i].row;
            sum[l].col=a[i].col;
            sum[l].val=a[i].val+b[j].val;
            j++;
            i++;
            l++;
        }
    }
    while(i<=a[0].val)
    {
        sum[l].row=a[i].row;
        sum[l].col=a[i].col;
        sum[l].val=a[i].val;
        i++;
        l++;
    }
    while(j<=b[0].val)
    {
        sum[l].row=b[j].row;
        sum[l].col=b[j].col;
        sum[l].val=b[j].val;
        j++;
        l++;
    }
    sum[0].val=l-1;
    
}
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
    sparse a[100],b[100],sum[100];
    system("clear");
    readSparse(a);
    readSparse(b);
    printSparse(a);
    printSparse(b);
    sparseAdd(a,b,sum);
    printSparse(sum);
}
