#include<stdio.h>
int main()
{
    int num1,num2,lcm,gcd,count=1,fact=1;
    printf("Enter Frist Number:");
    scanf("%d",&num1);
    printf("Enter Second Number:");
    scanf("%d",&num2);
    lcm=(num1>num2)?num1:num2;
    while(count)
    {
        if(lcm%num1==0&&lcm%num2==0)
        {
            printf("LCM of %d and %d is %d\n",num1,num2,lcm);
            count=0;
        }
        lcm++;
    }
    while(fact<=num1&&fact<=num2)
    {
        if(num1%fact==0&&num2%fact==0)
        {
            gcd=fact;
        }
        fact++;
    }
    printf("GCD of %d and %d is %d\n",num1,num2,gcd);
    return 0;

}