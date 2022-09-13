#include<stdio.h>
int countdigit(int);
int main()
{
    int n;
    
    int total;
    printf("Enter a number ");
    scanf("%d",&n);
    total=countdigit(n);
    printf("Total digit of a given number is %d",total);
    return 0;
}
int countdigit(int n)
{
    static int count=0;
    if(n>0)
    {
        count++;
        countdigit(n/10);
    }
    else
    {
        return count;
    }
}