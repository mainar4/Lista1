#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
char *c;
int a = 1, b = 1,n,i;

printf("***Entre com o nesimo termo ***");

scanf("%d", &n);
	printf("\n");
		for(i=0;i<n;i++) {
			if(i % 2 == 0) {
				printf("%d ", a);
					a += b;
	} else {
		printf("%d ", b);
			b += a;
	}
		}		

	fflush(stdin);

return 0;
}
