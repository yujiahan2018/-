/*��Ŀ���ݣ�
������Ϊ2�ǵ�һ��������3�ǵڶ���������5�ǵ�������������������

���ڣ�������������n��m��0<n<=m<=200����ĳ���Ҫ�����n������
����m������֮�����е������ĺͣ�������n�������͵�m��������
ע�⣺�ǵ�n����������m������������n��m֮���������

�����ʽ:
��������������һ����ʾn���ڶ�����ʾm��
�����ʽ��
һ����������ʾ��n����������m������֮�����е������ĺͣ�����
��n�������͵�m��������
*/
#include <stdio.h>

int main() {
	int  n,m;
	scanf("%d %d",&n,&m);

	int number1=0,number2=0;
	int prime;
if(n>0){
//}
	for(prime=2; prime<=10000000; prime++) {
		int i;
		int isPrime=1;
		for(i=2; i<prime; i++) {
			if(prime%i==0) {
				isPrime=0;
				break;
			}
		}
		if(isPrime==1) {

			number1++;
			if(number1<n) 
				continue;
			
			number2=number2+prime;

			if(number1==m) 

				break;
			

		}


	}
	printf("%d\n",number2);
}
	return 0;

}
