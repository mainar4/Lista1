#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

 float t,v, d,l;

     printf("Tempo: ");

     scanf("%f", &t);

     printf("Velocidade Media: ");

     scanf("%f", &v);

     d = t * v;

     l = d / 12;

     printf("A velocidade media e: %.2f\n", v);

     printf("O tempo gasto e: %.2fh\n", t);

     printf("A distancia percorrida e: %.2fkm\n",d);

     printf("O combustivel utilizado e: %.2fl",l);

}
