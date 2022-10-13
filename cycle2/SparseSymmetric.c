#include <stdio.h>
typedef struct
{
    int row;
    int col;
    int val;
}term;
int main()
{
    int i,n,j,flag=0;
    term a[10];
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
    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            
            if(((a[i].col==a[j].row) && (a[i].row==a[j].col)))
            {
                if(a[i].val!=a[j].val)
                    flag=1;
            }
        }
    }
    if(flag)
    {
        printf("Not Symmetric");
    }
    else
        printf("Symmetric");
}
