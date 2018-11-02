/*文件的输入输出*/
#include <stdio.h>
void WriteStr(char *fn,char *str);
int main() {
	WriteStr("t1.dat","123");
	WriteStr("t1.dat","456");
	return 0;
}
void WriteStr(char *fn,char *str) {
	FILE *fp;
	fp=fopen(fn,"r+");
	fprintf(fp, "%d", str);
	fscanf(fp,"%d",str);
	printf("%d",str); 
	fclose(fp);
}
