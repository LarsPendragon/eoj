#include <stdio.h>
#include <string.h>

int stack[10];
int top;

int push(int x)
{
    stack[top++] = x;
    return 0;
}

int pop()
{
    return stack[--top];
}

int main()
{
    int N, I;
    scanf("%d",&N);
    for(I=0; I<N; I++)
    {
        top =0;
        int i, j, n, s[10];
        scanf("%d",&n);
        char car[20];
        scanf("%s", car);
        for(i=0, j=0; i<strlen(car); i++, j++)
        {
            if(car[i]=='1' && car[i+1]=='0')
            {
                i++;
                s[j]=10;
            }
            else s[j]=car[i]-'0';
        }
        j=0;
        //for(i=0; i<n; i++) printf("%d ",s[i]);
        //printf("\n");
        for(i=0; i<n; i++)
        {
            while(s[i]>j)
            {
                push(++j);
            }
            if(pop()!=s[i])
            {
                printf("no\n");
                break;
            }
        }
        if(i==n) printf("yes\n");
    }
    return 0;
}
