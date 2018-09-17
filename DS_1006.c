#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, n, num[10100], v;
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&num[i]);
	}
	scanf("%d",&v);
	for(i=0; i<n; i++)
		if(num[i]==v)
		{
			printf("%d\n",i);
			break;
		}
	if(i==n) printf("-1\n");
	return 0;
}

