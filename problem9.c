#include<stdio.h>
int main()
{
    int num,i,sum=0;
    printf("Enter any number:");
    scanf("%d",&num);
    printf("The positive divisor :");
    for(i=1;i<num;i++)
    {
     if(num%i==0)
     {
        sum=sum+i;
        printf("%d ",i);
        
     }
    }
    printf("\nThe sum of the divisor is :%d\n",sum);
    if(sum==num)
    {
        printf("So, the number is  perfect");
       
    }
    else{
         printf("So, the number is not  perfect");
    }
    return 0;
}