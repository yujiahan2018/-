/*题目内容：
我们认为2是第一个素数，3是第二个素数，5是第三个素数，依次类推

现在，给定两个整数n和m，0<n<=m<=200，你的程序要计算第n个素数
到第m个素数之间所有的素数的和，包括第n个素数和第m个素数。
注意：是第n个素数到第m个素数，不是n和m之间的素数！

输入格式:
两个正整数，第一个表示n，第二个表示m。
输出格式：
一个整数，表示第n个素数到第m个素数之间所有的素数的和，包括
第n个素数和第m个素数。
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
