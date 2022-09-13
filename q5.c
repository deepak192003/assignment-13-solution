// Write a recursive function to calculate sum of digits of a given number
#include<stdio.h>
int sumdigit(int);
int main()
{
    int n;
    int sum;
    printf("Enter a number: ");
    scanf("%d",&n);
    sum=sumdigit(n);
    printf("The total sum of digits of a given number is %d",sum);
    return 0;
}
int sumdigit(int num)
{
    if(num==0)
    return 0;
    else
    return sumdigit(num/10)+num%10;
}