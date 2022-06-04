#include<stdio.h>
void main()
{
	int n,r,c;
	printf("Enter N and R: ");
	scanf("%d%d",&n,&r);

	c = fact(n)/(fact(r)*fact(n-r));

	printf("The value of  %dC%d is %d",n,r,c);

}
int fact(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
	f=f*i;
	}
	if(f==0)
	{printf("INVALID NUMBERS\n");}

	else
	return f;


}
