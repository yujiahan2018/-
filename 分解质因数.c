/*ÿ����������������������д�ɼ���������Ҳ�ɳ�Ϊ��������˵���ʽ��
�⼸�������Ͷ�������������������������磬6���Ա��ֽ�Ϊ2x3����24���Ա��ֽ�Ϊ2x2x2x3��
���ڣ���ĳ���Ҫ����һ��[2,100000]��Χ�ڵ�������Ȼ����������������ֽ�ʽ��
�������ľ�������ʱ�����������

�����ʽ:
һ����������Χ��[2,100000]�ڡ�
�����ʽ��
���磺
n=axbxcxd �� n=n
���еķ���֮�䶼û�пո�x��Сд��ĸx��
*/

/*����6,8*/
#include <stdio.h>
int main() {
	int input;
	scanf("%d",&input);
	int i,j,c=0,d=0,f=1,g,h=0;
	
	
	int prime[input+1];//��������
	for(i=0; i<=input; i++)
		prime[i]=1;//��ʼ������


	for(i=2; i<=input; i++) {
		if(prime[i]==1) {
			for(j=2*i; j<=input; j++) {
				if(prime[j]==0)
					continue;//��������ֵΪ0�����������棬����ѭ��
				if(j%i==0)
					prime[j]=0;//������������������ֵΪ0
			}
		}
	}
printf("%d=",input);

	if(input!=i) {
		for(i=2; i<=input; i++) {
			if(prime[i]==1) {
				if(input%i==0) {
					while(input%i==0) {
						int e=0;
						h++;
						if(g==i)
							f++;
						if(h==1)
						printf("%d",i);
						else {
						printf("x");
						printf("%d",i);
				}
						g=i;
						input=input/i;
						if(input%i!=0)
							continue;
					}
				}
			}
		}

	}


	 if(input==i)
		printf("%d",i);


	return 0;
} 
