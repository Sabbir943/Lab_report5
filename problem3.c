#include<stdio.h>
int main()
{
    int row,col,n,add=1;
    printf("Enter Any positive Number:");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d ",add++);
        }
        printf("\n");
    }
    return 0;
}