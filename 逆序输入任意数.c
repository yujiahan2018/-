/*��������������*/
#include <stdio.h>

int main()
{
	int a, b,c,d;
	//printf("������һ����λ����\n");
	scanf("%d",&a);
	while(a%10!=0){
		b=a%10;
		a/=10;
		printf("%d",b);
	} 
	return 0;
}
