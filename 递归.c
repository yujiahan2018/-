#include <stdio.h>
int fact(int n);
int main(){
	int input;
	printf("������һ����������\n");
	scanf("%d",&input);
	printf("%d!=%d",input,fact(input));
	return 0;
}

int fact(int n){
	if(n==0)
		return 1;
	else
		return n*fact(n-1);
}
