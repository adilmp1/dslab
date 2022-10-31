#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char stack[100];
int top = -1;

void push(char ele)
{
	stack[++top] = ele;
}

char pop()
{
	return stack[top--];
}

int isPalindrome(char str[])
{
	int length = strlen(str);
	int i, mid = length / 2;

	for (i = 0; i < mid; i++) {
		push(str[i]);
	}

	if (length % 2 != 0) {
		i++;
	}

	while (str[i] != '\0') 
    {
		char ele = pop();

		if (ele != str[i])
			return 0;
		i++;
	}

	return 1;
}

int main()
{
	char str[100];
    printf("Enter a string: ");
    scanf("%s",str);

	if (isPalindrome(str)) {
		printf("This is a palindrome\n");
	}
	else {
		printf("This is not a palindrome\n");
	}

	return 0;
}