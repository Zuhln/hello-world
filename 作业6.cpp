//求解如下方程
//ax + by = c
//dx + ey = f
//注意输入/输出，数据类型
#include<stdio.h>
int main(){
	float a,b,c,d,e,f,x,y;
	scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f); 
	x=(c*e-b*f)/(a*e-b*d);
	y=(a*f-c*d)/(a*e-b*d);
	printf("x=%f,y=%f",x,y);
	return 0;
} 
