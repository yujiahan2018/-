/*每个非素数（合数）都可以写成几个素数（也可称为质数）相乘的形式，
这几个素数就都叫做这个合数的质因数。比如，6可以被分解为2x3，而24可以被分解为2x2x2x3。
现在，你的程序要读入一个[2,100000]范围内的整数，然后输出它的质因数分解式；
当读到的就是素数时，输出它本身。

输入格式:
一个整数，范围在[2,100000]内。
输出格式：
形如：
n=axbxcxd 或 n=n
所有的符号之间都没有空格，x是小写字母x。
*/

/*输入6,8*/
#include <stdio.h>
int main() {
	int input;
	scanf("%d",&input);
	int i,j,c=0,d=0,f=1,g,h=0;
	
	
	int prime[input+1];//定义数组
	for(i=0; i<=input; i++)
		prime[i]=1;//初始化数组


	for(i=2; i<=input; i++) {
		if(prime[i]==1) {
			for(j=2*i; j<=input; j++) {
				if(prime[j]==0)
					continue;//如果数组的值为0，则跳过下面，继续循环
				if(j%i==0)
					prime[j]=0;//如果不是素数，数组的值为0
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
