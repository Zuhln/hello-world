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
		printf("����������"); 
	}
	else
	{
		printf("��������");
	}
	return 0 ;
}
