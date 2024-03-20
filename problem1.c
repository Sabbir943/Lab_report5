#include<stdio.h>
int main()
{
    int row,col,n;//all variable declear
    printf("Enter Any positive Number:");
    scanf("%d",&n);
    for(row=1;row<=n;row++)//condition for row
    {
        for(col=1;col<=row;col++)//condition for col
        {
            printf("%d ",col);
        }
        printf("\n");
    }
    return 0;
}