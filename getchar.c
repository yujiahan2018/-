/*getchar*/
#include <stdio.h>
int main()
{
int a,b,c;/* getchar�ӱ�׼����(stdin)�����ַ�����׼�������л���ģ�Ҳ����������س���
���߻��������ˣ�ϵͳ�Ŷ� */
char string[10];
while ((a = getchar()) != '\n') //getchar��whileѭ�����뻺������ֵ��ֱ�������س�
scanf("%s",&b);

printf("%c", a); //���
return 0;
}


