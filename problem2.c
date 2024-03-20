#include<stdio.h>
int main()
{
    int col,row,n;//all variable declear
    printf("Enter any positive Number:");
    scanf("%d",&n);
    for(row=1;row<=n;row++)//condition for row
    {
        for(col=1;col<=n-row;col++)//condition for col and space
        {
            printf("  ");//printing space
        }
        for(col=1;col<=row;col++)//condition for col and row
        {
            printf(" *  ");//printing star
        }
        printf("\n");
    }
    return 0;
}