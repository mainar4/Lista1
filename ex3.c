#include<stdio.h>
#include<stdlib.h>

int main() {
	
  int numero;

  printf("Informe um numero entre 1 e 7: ");
  scanf("%d", &numero);

  if (numero == 1) {
    printf("Domingo\n");
  }
  
  if (numero == 2) {
    printf("Segunda\n");
  }
  
  if (numero == 3) {
    printf("Terca\n");
}
if (numero == 4) {
    printf("Quarta\n");
}

if (numero == 5) {
    printf("Quinta\n");
}

if (numero == 6) {
    printf("Sexta\n");
}

if (numero == 7) {
    printf("Sabado\n");

}

  return 0;
}
