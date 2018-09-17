#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n, q, cmd, k, x, num[200001];
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d",&num[i]);
    scanf("%d",&q);
    for(i=0; i<q; i++)
    {
        scanf("%d",&cmd);
        if(cmd==1)
        {
            scanf("%d %d",&k, &x);
            if(k<0) k=0;
            if(k>n) k=n;
            if(k>=0 && k<=n)
            {
                for(j=n; j>k; j--) num[j]=num[j-1];
                num[k] = x;
                n++;
            }
        }
        else
        {
            scanf("%d",&k);
            if(k<=0 || k>n) printf("-1\n");
            else
            {
                printf("%d\n", num[k-1]);
                for(j=k-1; j<n-1; j++) num[j]=num[j+1];
                n--;
            }
        }
        //for(j=0; j<n; j++) printf("%d ",num[j]);
        //printf("\n");
    }
    return 0;
}

