#include <stdio.h>
#include <stdlib.h>

int num[1000000], v;
int main()
{
	int i, n, m;
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&num[i]);
	}
	scanf("%d",&v);
	i = 0;
	int j = n-1;
	while( i <= j)
	{
		m = (i+j)/2;
		if(v==num[m])
		{
			printf("%d\n",m);
			return 0;
		}
		if(v<num[m]) j=m-1;
		else i=m+1;
	}
	printf("-1\n");
	return 0;
}

