#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
int main(){
 
int id, soma, count;

float media;
 
soma = 0;
count = 0;
scanf("%d",&id);
 
while (id > 0){
soma += id;
count++;
scanf("%d",&id);
}

media = (float)soma / (float)count;
 
printf("A idade media e: %.2f\n",media);
 
     return 0;
}
