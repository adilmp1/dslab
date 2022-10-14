#include <stdio.h>
#include <stdlib.h>
void printPoly(int a[], int terms)
{
    int d=0;
    printf("%dx^%d",a[d+1],a[d]);
    d+=2;
    while (d < (2*terms))
    {
        if(a[d]==0)
        {
            printf("+%d", a[d+1]);
        }
        else if(a[d]==1)
        {
            printf("+%dx", a[d+1]);
        }
        else
            printf("+%dx^%d", a[d+1], a[d]);
        d+=2;
    }
}
int main()
{
    int a[10], b[10], c[10], m, n, k, k1, i, j, x;
    system("clear");
    printf("Enter number of terms of the first polynomial:");
    scanf("%d", &m);
    printf("Enter the degrees and coefficients:");
    for (i = 0; i < 2 * m; i++)
        scanf("%d", &a[i]);
    printf("First polynomial is:");
    printPoly(a,m);
    printf("\n\nEnter number of terms of 2nd polynomial:");
    scanf("%d", &n);
    printf("Enter the degrees and co-efficients:");
    for (j = 0; j < 2 * n; j++)
        scanf("%d", &b[j]);
    printf("Second polynomial is:");
    printPoly(b,n);
    i = 0,j = 0,k = 0;
    while (m > 0 && n > 0)
    {
        if (a[i] == b[j])
        {
            c[k + 1] = a[i + 1] + b[j + 1];
            c[k] = a[i];
            m--;
            n--;
            i += 2;
            j += 2;
        }
        else if (a[i] > b[j])
        {
            c[k + 1] = a[i + 1];
            c[k] = a[i];
            m--;
            i += 2;
        }
        else
        {
            c[k + 1] = b[j + 1];
            c[k] = b[j];
            n--;
            j += 2;
        }
        k += 2;
    }
    while (m > 0)
    {
        c[k + 1] = a[i + 1];
        c[k] = a[i];
        k += 2;
        i += 2;
        m--;
    }
    while (n > 0)
    {
        c[k + 1] = b[j + 1];
        c[k] = b[j];
        k += 2;
        j += 2;
        n--;
    }
    printf("\n\nSum of the two polynomials is:");
    printPoly(c,k/2);
    return 0;
}