#include<stdio.h>
#include<ctype.h>

char stack[100];
int top = -1;

void push(char x)
{
    stack[++top] = x;
}

char pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}

int priority(char x)
{
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
    return 0;
}

void toPostfix(char *ch)
{
    char x;
    while(*ch != '\0')
    {
        if(isalnum(*ch))
            printf("%c ",*ch);
        else if(*ch == '(')
            push(*ch);
        else if(*ch == ')')
        {
            while((x = pop()) != '(')
                printf("%c ", x);
        }
        else
        {
            while(priority(stack[top]) >= priority(*ch))
                printf("%c ",pop());
            push(*ch);
        }
        ch++;
    }
    
    while(top != -1)
    {
        printf("%c ",pop());
    }
}
int main()
{
    char str[100];
    char *ch;
    printf("Enter the expression : ");
    scanf("%s",str);
    printf("\n");
    ch = str;
    toPostfix(ch);
    return 0;
}