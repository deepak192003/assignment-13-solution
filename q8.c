// Write a recursive function to print first N terms of Fibonacci series
#include<stdio.h>
int fibonacciseries(int);
int main()
{
    int n;
    int i;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Fibonacci series of %d are: ",n);
for(i=0;i<n;i++)
{
    printf("%d",fibonacciseries(i));
}
    return 0;
}
int fibonacciseries(int n)
{
    if(n==0)
    {
  return 0;
    }
    else if(n==1)
    {
  return 1;
    }
  
    else
{
  return (fibonacciseries(n-1)+fibonacciseries(n-2));
}
  

}