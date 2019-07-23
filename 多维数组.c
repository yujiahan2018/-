#include <stdio.h>
int main(){
	int j,i,b[12][10],c;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&b[i][j]);
	printf("\n\n");
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			printf("%d\n",b[i][j]);
	return 0;
} 
