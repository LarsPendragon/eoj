#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXN 100001

int q[MAXN];
int head=0, tail=0, tag=0;

int enqueue(int x)
{
	if(tail == head && tag == 1)
		return 1;
	tail = (tail+1) % MAXN;
	q[tail] =  x;
	if(tail == head) tag = 1;
	return 0;
}

int dequeue(int *p)
{
	if(head == tail && tag == 0)
		return 1;
	head = (head + 1)%MAXN;
	*p = q[head];
	if(head == tail) tag = 0;
	return 0;
}

int main()
{
	int i, n, x, y;
	char operation[10];
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		scanf("%s",operation);
		if(strcmp(operation, "enqueue")==0)
		{
			scanf("%d",&x);
			if(enqueue(x))
			{
				printf("Full\n");
			}
		}
		else
		{
			if(dequeue(&y))
			{
				printf("-1\n");
			}
			else printf("%d\n",y);
		}
	}
	return 0;
}
