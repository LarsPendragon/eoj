#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXN 200000

int stack[MAXN], top = 0;

int push(int x)
{
	if(top > MAXN) return 1;
	stack[top++] = x;
	return 0;
}

int pop()
{
	if(top==0) return 1;
	top--;
	return 0;
}

int ask()
{
	int i, max=0;
	for(i=0; i<top; i++)
	{
		if(stack[i] > max)
			max = stack[i];
	}
	return max;
}

int main()
{
	int n, i, op, x;
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&op);
		if(op==0)
		{
			scanf("%d",&x);
			push(x);
		}
		else if(op==1)
		{
			pop();
		}
		else
		{
			printf("%d\n", ask());
		}
	}
	return 0;
}

