#include <stdio.h>
#include<math.h>
int main(){
	int w[6],x[6],y[121],z[121],d,i,j,k,s=10;
	for(i=1;i<=5;i++){//输入
		scanf("%d",&x[i]);
		w[i]=x[i];
	}
	for(i=1;i<=4;i++){//排序
		for(j=i+1;j<=5;j++){
			if(x[i]<x[j]){
				k=x[i];
				x[i]=x[j];
				x[j]=k;
			}
		}
	}
	k=1;
	for(i=10000;i<100000;i++){//寻找这五位数可以组成的所有数 
		for(j=1;j<=5;j++){
			if(i%10==x[j]){
				x[j]=-1;
				for(j=1;j<=5;j++){
					if(i/10%10==x[j]){
						x[j]=-1;
						for(j=1;j<=5;j++){
							if(i/100%10==x[j]){
								x[j]=-1;
								for(j=1;j<=5;j++){
									if(i/1000%10==x[j]){
										x[j]=-1;
										for(j=1;j<=5;j++){
											if(i/10000==x[j]){
												y[k]=i;
												k++;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		for(j=1;j<=5;j++){
			x[j]=w[j];
		}
	}
	printf("\n");
	k=1;
	z[k]=0;
	for(j=1;j<=120;j++){//判断y中哪些是素数赋值给z
		s=sqrt(y[j]);
		for(i=2;i<=s & y[j]%i!=0;i++);
		if(s<i){
			z[k]=y[j];
			k++;
		}
	}
	if(z[1]==0){
		printf("ERROR");
	}
	else{
		for(i=1;i<k;i++){//找出最大项
			d=z[1];
			if(z[i]>d){
				d=z[i];
			}
		}
		printf("%d",d);
	}
	return 0;
}
