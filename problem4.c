#include<stdio.h>
int main()
{
    int num,temp,r,sum=0;
    printf("Enter any positive Number:");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        r =temp%10;
        sum=sum+r*r*r;
        temp=temp/10;
    }
    if(num==sum)
    {
        printf("%d is Armstrong Number.",num);
    }
    else{
         printf("%d is not Armstrong Number.",num); 
    }
    return 0;
}