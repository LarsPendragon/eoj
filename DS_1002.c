#include <stdio.h>
#include <stdlib.h>

int compare(int A[], int B[], int m, int n)
{
    int i, min=(m<n)?m:n;
    for(i=0; i<min; i++)
        if(A[i]-B[i]) break;
    //printf("%d\n",i);
    if(i==min)
    {
        if(m==n) return 0;
        else if(m<n) return -1;
    }
    //printf("%d %d\n",i, min);
    if(i<min && A[i]<B[i]) return -1;
    //printf("%d\n",i);
    return 1;
}

int main()
{
    int i, m, n, M[1000], N[1000];
    scanf("%d %d",&m,&n);
    for(i=0; i<m; i++) scanf("%d",&M[i]);
    for(i=0; i<n; i++) scanf("%d",&N[i]);
    printf("%d\n",compare(M, N, m, n));
    return 0;
}

