#include <stdio.h>

#define MAX 100

int stack[MAX], top = -1;

void push(int data)
{
    if (top == MAX - 1)
        printf("\nStack overflow");
    else
        stack[++top] = data;
}

int pop()
{
    int del;
    if (top == -1)
    {
        printf("\nStack empty");
        return -1;
    }
    else
    {
        del = stack[top--];
        return del;
    }
}

int peek()
{
	if(top == -1)
		return -1;
	else
		return stack[top];
}

void display()
{
    if (top == -1)
        printf("\nStack empty");
    else
    {
        printf("\n");
        for (int i = 0; i <= top; i++)
        {
            printf("%d, ", stack[i]);
        }
    }
}

void convertToBinary(int num)
{
    while (num)
    {
        push(num%2);
        num /= 2;
    }
}

void displayBinary()
{
    printf("\nBinary : ");
    while(top != -1)
    {
        printf("%d",pop());
    }
    printf("\n");
}

void convertToHex(int n)
{
    while (n)
    {
        push(n%16);
        n /= 16;
    }
}

void displayHex()
{
    printf("\nHex : ");
    while(top != -1)
    {
        int item = pop();
        switch (item)
        {
        case 10:
            printf("A");
            break;
        case 11:
            printf("B");
            break;
        case 12:
            printf("C");
            break;
        case 13:
            printf("D");
            break;
        case 14:
            printf("E");
            break;
        case 15:
            printf("F");
            break;
        
        default:
            printf("%d",item);
            break;
        }
        
    }
    printf("\n\n");
}

int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    convertToBinary(n);
    displayBinary();
    
    convertToHex(n);
    displayHex();
    return 0;
}