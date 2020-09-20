#include<stdlib.h>
#include<stdio.h>

int main(){
	
float Carro, NovoP;

printf(" Qual o custo de fabrica? ");
scanf("%f", &Carro);

NovoP = Carro + (Carro * 0.25) + (Carro * 0.42);

printf("\n Seu carro ira custar R$ %.2f ", NovoP);

getch();
}
