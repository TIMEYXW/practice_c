#include<stdio.h>

int main()
{
	int x, a, b ,c,d ;

	printf("请输入金额：");
	scanf("%d",&x);

	a = x/20;
	b = x%20/10;
	c = x%20%10/5;
	d = x%20%10%5;

	printf("$20:%d\n$10:%d\n$5:%d\n$1:%d\n",a,b,c,d);

	return 0;
}
