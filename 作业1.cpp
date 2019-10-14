#include<stdio.h>
int main()
{
	int a,b,c=1,d;
	scanf("%d%d",&a,&b);
	while(c<=a and c<=b)
	{
		c=c+1;
		if(a%c==0 and b%c==0)
		{
			d=c;
		}
	}
	if(d>1)
	{
		printf("This two number is not coprime"); 
	}
	else
	{
		printf("This two nuber is coprime");
	}
	return 0 ;
}
