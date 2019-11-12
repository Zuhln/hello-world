#include<stdio.h>
int main(){
	int n=2;
	for(int f=0;f!=n-1;n++){
		f=0;
		for(int i=1;i<=n;i++){
			int k=i;
			while(i!=0){
				if(i%10==1){
					f++;
				}
				i=i/10;
			}
			i=k;
		}
		printf("%d %d\n",n,f);
	}
	printf("\n%d\n",n-1);
	return 0;
} 
