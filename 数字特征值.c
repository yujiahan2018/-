/*对数字求特征值是常用的编码算法，奇偶特征是一种简单的特征值。对于一个整数，从个位开始
对每一位数字编号，个位是1号，十位是2号，以此类推。这个整数在第n位上的数字记作x，如果x和
n的奇偶性相同，则记下一个1，否则记下一个0。按照整数的顺序把对应位的表示奇偶性的0和1都记
录下来，就形成了一个二进制数字。比如，对于342315，这个二进制数字就是001101。*/
#include <stdio.h>
int main () {
	int number=0;
	scanf("%d",&number);
	int count=0,i=number,n,n1,count1=0,count2=0,n2=0;

	while(number!=0) { //求输入数字的位数
		number/=10;
		count++;
   
		n=i%10;
		 i/=10;

		if(n%2==count%2)//输出对应的二进制
			n1=1;
		if(n%2!=count%2)
			n1=0;
		count1++;
		count2=count1-1;

		while(count2!=0){

			n1=n1*2;
			
//			
			
			count2--;
		}n2+=n1;
		
	}
printf("%d",n2);


	return 0;
}

/*i      i%10    i/10
123      3       12

*/
