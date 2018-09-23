#include <stdio.h>
#include <stdlib.h>

typedef struct o{int num; struct o *prev, *next;}NUM;

int Delete(NUM *p, int a)
{
	NUM *q = p;
	int tag=1;
	while(p->num!=-1)
	{
		if(p->num==a) 
		{
	  		p->prev->next=p->next;
			p->next->prev=p->prev;
			tag=0;
		}
		p=p->next;
	}
	if(tag) return 1;
	return 0;
}

int main()
{
	int x;
	NUM *head = (NUM*)malloc(sizeof(NUM));
	NUM *p = head;
	p->prev = head;
	p->next = head;
	head->num=-1;
	while(1)
	{
		scanf("%d",&x);
		if(x==-1) break;
		NUM *q = (NUM*)malloc(sizeof(NUM));
		q->num=x;
		q->prev=p;
		q->next=head;
		head->prev=q;
		p->next=q;
		p=q;
	}
	while(1)
	{
		scanf("%d",&x);
		if(x==-1) break;
		if(Delete(head->next, x)) printf("-1\n");
	}
	p=head->next;
	while(p->next->num!=-1)
	{
		printf("%d ",p->num);
		p=p->next;
	}
	if(p->num!=-1)
		printf("%d\n", p->num);
	return 0;
}