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
        return stack[top--];
    }
}
void parantheses(char* ch)
{
    int i=0;
    while (ch[i] != '\0')
    {
        if (ch[i] == '(')
        {
            push(ch[i]);
        }
        else if (ch[i] == ')')
        {
            pop();
        }
        i++;
    }
    if (top==-1)
    {
        printf("chion is balanced");
    }

    else
    {
        printf("Expression is unbalanced");
    }
    return 0;
}
int main()
{
    char expression[50];
    int x = 0, i = 0;
    printf("\nEnter an expression");
    scanf("%s", expression);
    int * ch = expression;
    parantheses(ch);


}
