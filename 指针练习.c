/*ָ����ϰ*/ 
#include <stdio.h>
int q(int *a,int *b); 
int main() {
	int a=2;
	int b=8;

	printf("ԭʼֵ:a=%d,b=%d\n",a,b);
	q(&a,&b);// �˴�ע������'&' 	��ֵ 
			//��a,b��ֵ��������q
	 
	printf("����ֵ:a=%d,b=%d",a,b);//�õ�����q��a,b��ֵ
}

int q(int *a,int *b) {	//�˴�ע����*a��*b 	��ֵ 
	int c=0;
	c=*a;
	*a=*b;
	*b=c;
	 
	return *a,*b;//�����ں���q��a,b��ֵ�ֱ𴫸�������
}

