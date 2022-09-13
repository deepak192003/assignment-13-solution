// Write a recursive function to calculate sum of first N natural numbers
#include<stdio.h>
int sumN(int);
int main()
{
    int n,total_sum;
    printf("Enter a number: ");
    scanf("%d",&n);
    total_sum=sumN(n);
    printf("The sum of first n natural number is %d",total_sum);
}
int sumN(int num)
{
    int sum=0;
    if(num==0)
        return num;
    else
    return sumN(num-1)+num;
}