#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct x {int repeat; char ch; struct x *next;} NODE;

int main()
{
	int T, I;
	scanf("%d", &T);
	getchar();
	for(I=0; I<T; I++)
	{
		char s[510];
		int i=0;
		fgets(s, 510, stdin);
		NODE *p, *q, *head;
		p=(NODE*)malloc(sizeof(NODE));
		p->ch=s[i++];
		p->repeat = 1;
		head=p;
		p->next=NULL;
		while(s[i]!='\n' && s[i]!='\0')
		{
			if(s[i]-s[i-1] || p->repeat == 255)
			{
				q=(NODE*)malloc(sizeof(NODE));
				q->ch=s[i++];
				q->repeat = 1;
				q->next=NULL;
				p->next=q;
				p=q;
			}
			else
			{
				p->repeat++;
				i++;
			}
		}
		p=head;
		printf("case #%d:\n",I);
		while(p->next != NULL)
		{
			printf("%d%c",p->repeat, p->ch);
			p=p->next;
		}
		printf("%d%c\n", p->repeat, p->ch);
	}
	return 0;
}