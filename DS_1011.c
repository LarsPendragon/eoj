#include <stdio.h>

int main()
{
    int i, j, k, n, num[105], cnt=1;
    scanf("%d %d %d",&n,&i,&k);
    for(j=0; j<n; j++) num[j]=1;
    j=(i-2)%n;
    i=0;
    while(cnt<=n)
    {
        while(1)
        {
            j=(++j)%n;
            if(num[j]==1) {++i;}
            if(i==k) {i=0;  num[j]=0; break;}
        }
        printf("%d ",j+1);
        cnt++;
    }
    return 0;
}
