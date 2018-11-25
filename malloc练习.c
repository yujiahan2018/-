#include <stdio.h>
#include <stdlib.h> //使用malloc必须包含的头文件 
int main(){
	int number;
	int *a;
	int i;
	printf("请输入要使用的数组容量:\n"); //使用malloc函数设置数组容量
	scanf("%d",&number);
	a=(int *)malloc(number*sizeof(int)); 
	
	for ( i=0; i<number; i++ ){ //输入数组值
		scanf("%d",&a[i]);
	}
	for ( i=number-1; i>=0; i--){ //逆序输出
		printf("%d ",a[i]);
	}
	free(a); //释放所使用的内存 
} 
