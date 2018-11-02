/*getchar*/
#include <stdio.h>
int main()
{
int a,b,c;/* getchar从标准输入(stdin)读入字符，标准输入是行缓冲的，也就是你输入回车后，
或者缓冲区满了，系统才读 */
char string[10];
while ((a = getchar()) != '\n') //getchar用while循环读入缓冲区的值，直到遇到回车
scanf("%s",&b);

printf("%c", a); //输出
return 0;
}


