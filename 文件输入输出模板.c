#include <stdio.h>
int main() {
	FILE *fp;
	char i,name[100];
	
	printf("����Ҫ�������ļ���:\n");//�����ļ� 
	scanf("%s",&name);
	fp=fopen(name,"w");
	fclose(fp);
	
	fp=fopen(name,"r+");//д�ļ� 
	char r[1000];
	printf("�������ı�:\n");
	scanf("%s",&r);
	fprintf(fp,"%s",r);
	fclose(fp);


	fp=fopen(name,"r+");//���ļ� 
	printf("�������ļ������������:\n");
	while(!feof(fp)) {
		int n;
		fseek(fp,n,0);
		fscanf(fp,"%c",&i);
		printf("%c",i);
		n++;
	}
	fclose(fp);
}
