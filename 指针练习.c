/*指针练习*/ 
#include <stdio.h>
int q(int *a,int *b); 
int main() {
	int a=2;
	int b=8;

	printf("原始值:a=%d,b=%d\n",a,b);
	q(&a,&b);// 此处注意必须加'&' 	送值 
			//将a,b的值交给函数q
	 
	printf("函数值:a=%d,b=%d",a,b);//得到函数q中a,b的值
}

int q(int *a,int *b) {	//此处注意是*a和*b 	接值 
	int c=0;
	c=*a;
	*a=*b;
	*b=c;
	 
	return *a,*b;//将现在函数q中a,b的值分别传给主函数
}

