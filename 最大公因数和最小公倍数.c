/*����Ҫ���������������������Լ������С��������

�����ʽ:
������һ���и�������������M��N����1000����
�����ʽ:
��һ����˳�����M��N�����Լ������С�������������ּ��Կո�ָ���*/
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

