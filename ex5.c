#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(void){
	
	
float numero,quadrado,raiz;

printf("Digite o numero: ");

scanf("%f",&numero);

quadrado=pow(numero,2);

raiz=sqrt(numero);

printf("**O numero digitado ao quadrado = %3.1f**",quadrado);

printf("\n**A raiz quadrada do numero digitado = %3.4f**",raiz);

getch();

}
