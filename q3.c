// Write a recursive function to calculate sum of first N even natural numbers
#include<stdio.h>
int sumeven(int);
int main()

{
    int n,sum;
    printf("Enter a number: ");
    scanf("%d",&n);

    sum=sumeven(n);
    printf("The sum of first even n natural number is %d",sum);
    return 0;
}
int sumeven(int n)
{
    if(n==0)
    return 0;
    else
    return sumeven(n-1)+2*n;
}
