/*ɸ��������*/

#include <stdio.h>
int main() {
	int input;
	scanf("%d",&input);
	 
	int i,j;
	int prime[input+1];//�������� 
	
	for(i=0;i<=input;i++)
		prime[i]=1;//��ʼ������ 
		

	for(i=2;i<=input;i++){
		if(prime[i]==1){
			for(j=2*i;j<=input;j++){
				if(prime[j]==0)
					continue;//��������ֵΪ0�����������棬����ѭ�� 
				if(j%i==0)
					prime[j]=0;//������������������ֵΪ0 
			}
		}
	}
	
	for(i=2;i<=input;i++){
		if(prime[i]==1){ 
			printf("%d\n",i);
		}
	}//������������ ��������� 
		
	return 0;
}
