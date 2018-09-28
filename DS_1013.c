#include <stdio.h>
#include <stdlib.h>

int l, r, length=1000001, master[5000], work[1000000], left=0, right=0, mastercnt=0;

void Quitq()
{
	while(master[work[left]-1]>1)
	{
		master[work[left++]-1]--;
	}
	//printf("%d %d\n",right-left, length);
	if(right - left < length)
	{
		l=left+1;
		r=right;
		length = right-left;
	}
	return;
}

void Enterq(int x, int m)
{
	work[right++] = x;
	if(master[x-1] == 0)
	{
		mastercnt++;
	}
	master[x-1]++;
	if(mastercnt==m)
	{
		Quitq();
	}
	return;
}

int main()
{
	int m, n, i, j, x;
	scanf("%d %d",&n,&m);
	for(i=0; i<m; i++) master[i]=0;
	for(i=0; i<n; i++)
	{
		scanf("%d",&x);
		Enterq(x, m);
	}
	printf("%d %d",l,r);
	return 0;
}