#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
    int *p1 = (int*)a, *p2= (int*)b;
    return *p1-*p2;
}

int main()
{
    int n, num[1500], i, j;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
        for(j=0; j<i; j++)
        {
            if(num[i]==num[j])
            {
                i--;
                n--;
                break;
            }
        }
    }
    qsort(num, n, sizeof(int), cmp);
    for(i=0; i<n-1; i++) printf("%d ",num[i]);
    printf("%d\n", num[i]);
    return 0;
}

