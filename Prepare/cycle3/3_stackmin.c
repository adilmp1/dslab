#include <stdio.h>
#define MAX 100
int stack[MAX],min[MAX],top=-1,top2=-1;
void push(int item)
{
    if(top==(MAX-1))
    {
        printf("Stack Overflow");
    }
    else
    {
        stack[++top]=item;
        if(top2==-1)
        {
            min[++top2]=item;
        }
        else
        {
            if(item<=min[top2])
            {
                min[++top2]=item;
            }
        }
    }
}
void displayMin()
{
    printf("%d",min[top2]);
}
void pop()
{
    if(top==-1)
    {
        printf("Stack Underflow");
    }
    else
    {
        printf("%d\n",stack[top--]);
    }
}
int main()
{
    int size,element,i;
    system("clear");
    printf("Enter the size of the stack: ");
    scanf("%d",&size);
    printf("Enter %d elements you want to push: ",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&element);
        push(element);
    }
    displayMin();
    
}
