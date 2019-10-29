//小明有 5 张数字卡片，上面分别为数字 1， 2， 3， 6， 9。小明想用这 5 张数字卡片组成一个最大的 5 位
//数，这个五位数是_______。
//编程：任意输入5个数字，将它们组合为最大的5位数输出。
#include<stdio.h>
int main(){
	int x[5],t,i,j,k; 
	for(t=0;t<=4;t++){
	scanf("%d",&x[t]);
	}
	for(i=0;i<t-1;i++){
		for(j=i+1;j<=t-1;j++){
			if(x[i]<x[j]){
				k=x[i];
				x[i]=x[j];
				x[j]=k;
			}
		}
	}
	for(t=0;t<=4;t++){
		printf("%d",x[t]);
	}
	return 0;
}
