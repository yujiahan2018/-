#include <stdio.h>
int main() {
	int n;
	scanf("%d",&n);

	int a,b,c,d;
	for(a=2; a<=n; a++) {
		for(b=2; b<a; b++) {
			for(c=b; c<a; c++) {
				for(d=c; d<a; d++) {
					if(a*a*a==b*b*b+c*c*c+d*d*d) {
						printf("Cube=%d,triple=(%d,%d,%d)\n",a,b,c,d);
					}
				}
			}
		}
	}
	return 0;
}
