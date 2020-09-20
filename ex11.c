#include<stdio.h>
#include<stdlib.h>

int main(){
	
    int idade=0;

    printf("Digite sua idade:");
    
    scanf("%d",&idade);

    if(idade>18 && idade<=65){
        printf("Eleitor obrigatorio\n");
    }
    else if(idade>=16 && idade<=18 || idade>65){
        printf("Eleitor facultativo\n");
    }
    else
    {
        printf("Nao eleitor\n");
    }

    system("pause");
    return 0;
}
