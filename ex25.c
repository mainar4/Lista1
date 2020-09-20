#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {

int segundos=0;

float mi, mf;

printf("Digite a massa inicial: ");

scanf("%f",&mi);

mf=mi;

while (mf>=0.10)
{

mf=mf/0.25;

segundos=segundos+30;

}

int h= segundos/3600;

int m=(segundos%3600)/60;

int s=(segundos%3600)%60;

printf("Tempo: %hi%mi%si,h,m,s");

return 0;

}
