#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


int main() {
    float m,al,imc;

    printf("Digite seu peso: ");
    scanf("%f",&m);
    printf("Digite sua altura: ");
    scanf("%f",&al);

    imc = m/(pow(al,2));

    printf("Seu IMC: %0.2f\n",imc);

    if(imc<17)
    {
        printf("* ATENCAO: Muito abaixo do peso*\n");
    }
    else
    {
        if(imc>17 && imc<18.49)
        {
            printf("*ATENCAO: Abaixo do peso*\n");
        }
        else
        {
            if(imc>18.5 && imc<24.99)
            {
                printf("*ATENCAO: Peso normal*\n");
            }
            else
            {
                if(imc>25 && imc<29.99)
                {
                    printf("*ATENCAO: Acima do peso*\n");
                }
                else
                {
                    if(imc>30 && imc<34.99)
                    {
                        printf("*ATENCAO: Voce esta Obeso*\n");
                    }
                    else
                    {
                        if(imc>35 && imc<39.99)
                        {
                            printf("*ATENCAO: Obesidade Severa*\n");
            }
    			else
    			{
    			if(imc>40)
    			{
    	printf("*ATENCAO: Obesidade Morbida*\n");
    					}
    				}
    		}
    	}
    		}
    	}
    }

    return 0;
}
