#include<stdio.h>
#include<stdlib.h>

int main() {
	
  int x, n, potencia, contador; 
  
  printf("\nEntre com um numero inteiro: ");
  scanf("%d", &x);
  printf("Entre com um numero inteiro nao negativo: ");
  scanf("%d", &n);
  
  
  potencia = 1;
  contador = 0;
  
  
  while (contador != n) {
    potencia = potencia * x;
    contador = contador + 1;
  }
  
  printf("\nO Valor de %d elevado a %d: %d\n", x, n, potencia);
  return 0;
}
