#include<stdio.h>
int sum(int n)
{
    if(n==1)
        return 1;
    else
        return sum(n-1)+n;
}
void main()
{
    int n,s;
    printf("Enter the no of integers you want to find sum of: ");
    scanf("%d",&n);
    sum(n);
    printf("The sum of %d consecutive integers is %d",n,sum(n));
}
