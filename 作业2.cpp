+#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Please enter two numbers");
	scanf("%d%d",&a,&b);
	while(c<a or c<b)
	{
		c=c+1;
	}
	while(c%a!=0 or c%b!=0)
	{
		c=c+1;
	}
	printf("%d",c);
	return 0;
}
