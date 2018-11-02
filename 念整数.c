/*题目内容：
你的程序要读入一个整数，范围是[-100000,100000]。然后，用汉语拼音将这个整数
的每一位输出出来。
如输入1234，则输出：
yi er san si
注意，每个字的拼音之间有一个空格，但是最后的字后面没有空格。当遇到负数时，
在输出的开头加上“fu”，如-2341输出为：
fu er san si yi*/
#include <stdio.h>
int shuchu(int a);
int main(){
	int number;
	scanf("%d",&number);
	
	int a,number1,c=1,b=0,z=1;
	for(number1=number;number1/10!=0;c*=10,z++)
		number1/=10;
		
	if(number<0){
		printf("fu ");
		number*=-1;	
	}
	
	int n=z;
	while(z!=0){
		a=number/c;
		number%=c;
		c/=10;
		b++;
		z--;
		
	if(b>1&&b<=n)
		printf(" ");
		
	shuchu(a);
	}
	return 0;
}

int shuchu(int a){
	switch(a){
		case 0:
			printf("ling");
			break;
		case 1:
			printf("yi");
			break;
		case 2:
			printf("er");
			break;
		case 3:
			printf("san");
			break;
		case 4:
			printf("si");
			break;
		case 5:
			printf("wu");
			break;
		case 6:
			printf("liu");
			break;
		case 7:
			printf("qi");
			break;
		case 8:
			printf("ba");
			break;
		case 9:
			printf("jiu");
			break;				
	}
}
