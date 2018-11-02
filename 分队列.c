/*班级第一次列队，通常老师会让同学按身高排成一列，然后1、2报数，喊到1的同学
向前一 步，就这样，队伍就变成两列了。假设现在一个班级有n个同学，并且他们已
经按身高排成 了一列，同学按身高从1到n编号，你能告诉我最后哪些编号的同学站在
了第一列么? */
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
