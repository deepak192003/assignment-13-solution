// Write a recursive function to calculate factorial of a given number
#include<stdio.h>
int sum_factorial(int);
int main()
{
    int num;
    int sum;
    printf("Enter a number: ");
    scanf("%d",&num);
    sum=sum_factorial(num);
    printf("Sum is %d",sum);
}
int sum_factorial(int n)
{
    if(n==1)
    return 1;
    else
    return sum_factorial(n-1)*n;
}