/*逆序输入任意数*/
#include <stdio.h>

int main()
{
	int a, b,c,d;
	//printf("请输入一个三位数：\n");
	scanf("%d",&a);
	while(a%10!=0){
		b=a%10;
		a/=10;
		printf("%d",b);
	} 
	return 0;
}
