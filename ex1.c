#include<stdio.h>
#include<stdlib.h>

int main(void) 
{
    float reais, cotacao, dolar;
    
    printf("\n\nEntre com o valor em reais\n");
    
    scanf("%f",&reais);
    
    printf("\n\nDigite a cotacao\n");
    
    scanf("%f",&cotacao);
    
    dolar = reais*cotacao;
    
    printf("\n** O valor em dolares sera de: $%.2f **",dolar);
    
    return 0;
}

