int ss(int a){
	int cs;
	for(cs=2;cs<=a&&a%cs!=0;cs++);
	if(cs==a){
		return 1;
	}
	else{
		return 0;
	}
}
#include<stdio.h>
int main(){
	int a,i=0,spvalue[300],Sa,Saf;
	for(a=100;a<10000;a++){
		if(a<1000){
			printf("a:%d\n",a);
			Sa=a%10+a/10%10+a/100%10;
			printf("Sa:%d\n",Sa);
			Saf=a%10*(a%10)+a/10%10*(a/10%10)+a/100%10*(a/100%10);
			printf("Saf:%d\n",Saf);
			int check1=ss(a),check2=ss(Sa),check3=ss(Saf);
			if(check1==1&&check2==1&&check3==1){
				i++;
				spvalue[i]=a;
				printf("Victory!:%d\n",a);
			}
			printf("\n");
		}
		else{
			printf("a:%d\n",a);
			Sa=a%10+a/10%10+a/100%10+a/1000%10;
			printf("Sa:%d\n",Sa);
			Saf=a%10*(a%10)+a/10%10*(a/10%10)+a/100%10*(a/100%10)+a/1000%10*(a/1000%10);
			printf("Saf:%d\n",Saf);
			int check1=ss(a),check2=ss(Sa),check3=ss(Saf);
			if(check1==1&&check2==1&&check3==1){
				i++;
				spvalue[i]=a;
				printf("Victory!:%d\n",a);
			}
			printf("\n");
		}
	}
	
	int j,Sum=0;
	for(j=1;j<=i;j++){
		printf("spvalue[%d]:%d\n",j,spvalue[j]);
		Sum=Sum+spvalue[j];
	}
	printf("verage:%d",Sum/i);
	return 0; 
} 
