#include <stdio.h>
int main() {
	FILE *fp;
	char i,name[100];
	
	printf("输入要创建的文件名:\n");//创建文件 
	scanf("%s",&name);
	fp=fopen(name,"w");
	fclose(fp);
	
	fp=fopen(name,"r+");//写文件 
	char r[1000];
	printf("请输入文本:\n");
	scanf("%s",&r);
	fprintf(fp,"%s",r);
	fclose(fp);


	fp=fopen(name,"r+");//读文件 
	printf("下面是文件里的所有内容:\n");
	while(!feof(fp)) {
		int n;
		fseek(fp,n,0);
		fscanf(fp,"%c",&i);
		printf("%c",i);
		n++;
	}
	fclose(fp);
}
