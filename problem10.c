#include<stdio.h>
int main()
{
    int h,op;
    while(scanf("%d %d",&h,&op)!=EOF)
    {
        if(h>op)
        {
            printf("%d\n",h-op);

        }
        else{
            printf("%d\n",op-h);
        }
    }
    return 0;
}