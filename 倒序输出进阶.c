//�Ӽ�������һ����λ����234������432
#include <stdio.h>
#include <math.h>
main(){
	int i;
	scanf("%d",&i);
	int a,c=0,b=0;
	while(i%10){
		a=i%10;
		i/=10;
		a*=pow(10,c);
		b+=a;
		c++;
	}
	printf("%d",b);
	return 0;
} 
