#include <stdio.h>
#define MAX 100
int stack[MAX],top1=-1,top2=(MAX    /2);
int stackNo;
void push(int stackNo, int item)
{
    if(stackNo==1)
    {
        if(top1==((MAX/2)-1))
        {
            printf("Stack 1 Overflow");
        }
        else
        {
            stack[++top1]=item;
        }
    }
    else
    {
        if(top2==MAX)
        {
            printf("Stack 2 Overflow");
        }
        else
        {
            stack[++top2]=item;
        }
    }
}
void pop(int stackNo)
{
    if(stackNo==1)
    {
        if(top1==-1)
        {
            printf("Stack is empty");
        }
        else
        {
            printf("Popped element %d\n",stack[top1--]);
        }
    }
    else
    {
        if(top2==(MAX/2))
        {
            printf("Stack is empty");
        }
        else
        {
            printf("Popped element %d\n",stack[top2--]);
        }
    }
}
int main()
{
    int ch,element,i;
    system("clear");
    printf("Enter stack No (1 or 2): ");
    scanf("%d",&stackNo);
    do
    {
        printf("\n1. Push");
        printf("\n2. Pop\n");
        printf("3. Change Stack Number\n");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1: 
                printf("Enter element to push: ");
                scanf("%d",&element);
                printf("pushed %d",element);
                push(stackNo,element);
                break;
            case 2:
                pop(stackNo);
                break;
            case 3:
                printf("Enter stack No (1 or 2): ");
                scanf("%d",&stackNo);
                break;
        }
    }while(ch<=3);
}
