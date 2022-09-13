// Write a recursive function to calculate sum of squares of first n natural numbers
#include<stdio.h>
int sumsquare(int);
int main()
{
    int num;
    int sum;
    printf("Enter a number : ");
    scanf("%d",&num);
    sum=sumsquare(num);
    printf("Sum of squares of first n natural number is %d",sum);
}
int sumsquare(int n)
{
    if(n==1)
    return 1;
    else
    return sumsquare(n-1)+n*n;
}