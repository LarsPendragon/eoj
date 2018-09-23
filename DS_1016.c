#include <stdio.h>
int main(void)
{
    int N, M, I, order, number;
    scanf("%d %d", &N, &M);
    int toward[N], point=0;
    char name[N][12];
    for(I=0; I<N; I++)
    {
        scanf("%d %s", &toward[I], &name[I]);

    }
    for(I=0; I<M; I++)
    {
        scanf("%d %d", &order, &number);
        if(toward[point]==0)
        {
            if(order==0)
                point-=number;
            else
                point+=number;
            point%=N;
            while(point<0)
                point+=N;
        }
        else
        {
            if(order==0)
                point+=number;
            else
                point-=number;
            point%=N;
            while(point<0)
                point+=N;
        }
    }
    point%=N;
    while(point<0)
        point+=N;
    printf("%s", name[point]);
    return 0;
}
