/*本题要求两个给定正整数的最大公约数和最小公倍数。

输入格式:
输入在一行中给出两个正整数M和N（≤1000）。
输出格式:
在一行中顺序输出M和N的最大公约数和最小公倍数，两数字间以空格分隔。*/
#include <stdio.h>
int main(){
	int m=0,n=0;
	scanf("%d %d",&m,&n);
	int m1=m,n1=n;
	double i,a;
	
	while(m%n!=0){
		i=m%n;
		m=n;
		n=i;
		
	}
	a=n1*m1;
	a=a/i;
	
	printf("%.lf ",i);
	printf("%.lf",a);
	return 0;
}

