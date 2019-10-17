//实现代码判断2个float变量相等
//误差精确到时小数点后5位
#include <stdio.h>
int main()
{
    float m = 1.78;
    float x = 1.779999, y = 2;
    int a,b;
    a=m*100000;
	b=x*100000;
	float z = a / y, z1 = b / y;
    if (z == z1) {
        m=a*0.00001;
		x=b*0.00001;
		z = (m + x) / y;
    }
    printf("Z is %f\n", z);
    printf("Z1 is %f\n", z1);
    return 0;
}
