#include <stdio.h>
#include <stdlib.h>

int main(){
	
    int tabuada = 0;
    
    printf("Entre com um numero: ");
    
    scanf("%i", &tabuada);

    for(int x = 1; x<=10; ++x){
    
        printf("%ix%i = %i\n", x, tabuada, x * tabuada);
    }

    return 0;
}
