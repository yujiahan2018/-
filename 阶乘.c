#include <stdio.h>    
int main()    
{    
    int n;    
    int a[9000]; //确保保存最终运算结果的数组足够大    
     int digit = 1; //位数    
     int temp;   //阶乘的任一元素与临时结果的某位的乘积结果    
     int i, j, carry; //carry：进位    
      
     printf("please in put n:\n");    
    scanf("%d",&n);    
    a[0] = 1;   //将结果先初始化为1    
      
    for ( i=2; i<=n; i++ )  //开始阶乘，阶乘元素从2开始依次"登场"    
    {  //按最基本的乘法运算思想来考虑，将临时结果的每位与阶乘元素相乘    
         for( j=1, carry=0;  j<=digit; j++ )    
        {    
            temp = a[j-1] * i + carry; //相应阶乘中的一项与当前所得临时结果的某位相乘（加上进位）    
              a[j-1] = temp % 10; //更新临时结果的位上信息    
              carry = temp / 10; //看是否有进位    
         }    
        while(carry)    
        {    //如果有进位    
              a[++digit-1] = carry % 10; //新加一位，添加信息。位数增1    
            carry = carry / 10; //看还能不能进位    
         }    
    }    
    printf("n ! = ");    //显示结果    
    for(j = digit; j >=1;j--)    
    {    
        printf("%d",a[j-1]);    
    }    
    printf("\n");    
    return 0;    
}
