#include<stdlib.h>
#include<stdio.h>

int main(){
    int A,B;
    printf("Entre com o primeiro numero: ");
    scanf("%d", &A);
    printf("Entre com o segundo numero: ");
    scanf("%d", &B);
    if(A>B){
        printf("%d\n",A);
    }else{
        printf("%d\n",B);
    }
    system("PAUSE");
}
