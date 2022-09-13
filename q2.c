// Write a recursive function to calculate sum of first N odd natural numbers
#include<stdio.h>
int sumN_odd(int);
int main()
{
    int n;
    int sum;
    printf("Enter a number : ");
    scanf("%d",&n);

    sum=sumN_odd(n);
    printf("The sum of first N odd natural numbers:%d ",sum);
}
int sumN_odd(int num)
{
    if(num==0)
    return 0;
else
return sumN_odd(num-1)+(2*num-1);
}