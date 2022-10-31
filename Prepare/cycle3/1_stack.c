#include <stdio.h>
#define MAX 100
int stack[MAX],top=-1;
void push(int item)
{
    if(top==(MAX-1))
    {
        printf("Stack Overflow");
    }
    else
    {
        stack[++top]=item;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Stack is Empty");
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
    printf("Enter count of pop: ");
    {
        scanf("%d",&element);
    }
    for(i=0;i<element;i++)
    {
        pop();
    }
    
}
