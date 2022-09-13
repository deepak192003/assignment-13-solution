// Write a program in C to calculate the power of any number using recursion
#include<stdio.h>
int power(int,int);
int main()
{
    int n,p;
    printf("Enter base");
    scanf("%d",&n);
    printf("Enter power: ");
    scanf("%d",&p);
    printf("Answer is %d",power(n,p));

}
int power(int n,int p)
{
    if(p!=0)
    {
        return (n*power(n,p-1));
    }
    else
    {
        return 1;
    }
}