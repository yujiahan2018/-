#include <stdio.h>
#include <stdlib.h> //ʹ��malloc���������ͷ�ļ� 
int main(){
	int number;
	int *a;
	int i;
	printf("������Ҫʹ�õ���������:\n"); //ʹ��malloc����������������
	scanf("%d",&number);
	a=(int *)malloc(number*sizeof(int)); 
	
	for ( i=0; i<number; i++ ){ //��������ֵ
		scanf("%d",&a[i]);
	}
	for ( i=number-1; i>=0; i--){ //�������
		printf("%d ",a[i]);
	}
	free(a); //�ͷ���ʹ�õ��ڴ� 
} 
