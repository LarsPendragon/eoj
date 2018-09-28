#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXN 300000

int stack[MAXN];
int top1=150000, top2=149999, upsidedown=0;

int push(int x)
{
	if(upsidedown) 
	{
		stack[top2%MAXN] = x;
		top2--;
	}
	else 
	{
		stack[top1%MAXN] = x;
		top1++;
	}
	return 0;
}

int pop()
{
	if((top1)%MAXN == (top2)%MAXN) return 1;
	if(upsidedown) top2=(++top2)%MAXN;
	else top1=(--top1)%MAXN;
	return 0;
}

int main()
{
	int q, i, cmd, x;
	scanf("%d",&q);
	for(i=0; i<q; i++)
	{
		scanf("%d",&cmd);
		if(cmd==1) 
		{
			scanf("%d",&x);
			push(x);
		}
		else if(cmd==2)
		{
			pop();
		}
		else
		{
			if(upsidedown) upsidedown=0;
			else upsidedown=1;
		}
		if((top1%MAXN) == (top2%MAXN+1)) printf("-1\n");
		else if(upsidedown) printf("%d\n", stack[(top2+1)%MAXN]);
		else printf("%d\n", stack[(top1-1)%MAXN]);
	}
	return 0;
}