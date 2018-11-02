#include <stdio.h>
int main() {
	int p,e,i,d;
	while(scanf("%d %d %d %d",&p,&e,&i,&d)!=EOF&&p!=-1) {
		
		int k;
		for(k=d+1; (k-p)%23!=0; k++);

		for(; (k-e)%28!=0; k+=23);

		for(; (k-i)%33!=0; k+=23*28);

		printf("%d",k-d);
		return ;

	}
	return 0;
}
