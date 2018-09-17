#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int m, cnt, head, dic[100];

int Find_in_Dic(int x)
{
	int i;
	for(i=0; i<m; i++)
	{
		if(dic[i]==x)
		{
			return 0;
		}
	}
	//printf("!\n");
	dic[head%m] = x;
	head++;
	cnt++;
	return 1;
}

int main()
{
	int n, i;
	cnt=0;
	head = 0;
	scanf("%d %d",&m,&n);
	for(i=0; i<n; i++)
	{
		int num;
		scanf("%d",&num);
		Find_in_Dic(num);
	}
	printf("%d\n",cnt);
	return 0;
}

