#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,d,primo;			
	d = 2;
    primo = 1;		

    printf("**Entre com um numero inteiro positivo **:");
    scanf("%d", &n);
    printf("Numero = %d \n", n);

    if (n <= 1)
	primo = 0;

    while (primo == 1 && d <= n / 2) {
	if (n % d  == 0)
	    primo = 0;
	d = d + 1;
    }

    if (primo == 1)
	printf("%d O numero e primo \n", n);
    else
	printf("%d O numero nao e primo \n", n);

    return 0;
}

