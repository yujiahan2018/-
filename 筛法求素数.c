/*筛法求素数*/

#include <stdio.h>
int main() {
	int input;
	scanf("%d",&input);
	 
	int i,j;
	int prime[input+1];//定义数组 
	
	for(i=0;i<=input;i++)
		prime[i]=1;//初始化数组 
		

	for(i=2;i<=input;i++){
		if(prime[i]==1){
			for(j=2*i;j<=input;j++){
				if(prime[j]==0)
					continue;//如果数组的值为0，则跳过下面，继续循环 
				if(j%i==0)
					prime[j]=0;//如果不是素数，数组的值为0 
			}
		}
	}
	
	for(i=2;i<=input;i++){
		if(prime[i]==1){ 
			printf("%d\n",i);
		}
	}//对数组做遍历 ，输出素数 
		
	return 0;
}
