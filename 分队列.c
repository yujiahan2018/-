/*�༶��һ���жӣ�ͨ����ʦ����ͬѧ������ų�һ�У�Ȼ��1��2����������1��ͬѧ
��ǰһ ����������������ͱ�������ˡ���������һ���༶��n��ͬѧ������������
��������ų� ��һ�У�ͬѧ����ߴ�1��n��ţ����ܸ����������Щ��ŵ�ͬѧվ��
�˵�һ��ô? */
#include <stdio.h>
int main(){
	int number,c=0,number1=0;
	scanf("%d",&number);
	
	while(number>=number1){
	
	if(number1%2!=0&&c!=1)
		printf(" %d",number1);
		

	if(number1%2!=0&&c==1)
		printf("%d",number1);
		c++;
		number1++;
}
	
	return 0;
} 
