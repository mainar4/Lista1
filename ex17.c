#include<stdio.h>

int main(){
	
	int fat, n;
	
	printf("Entre com um numero: ");
	
  scanf("%d", &n) ;

  for(fat = 1; n > 1; n = n - 1)
  {
    fat = fat * n;
  }

  printf("\n O fatorial e: %d", fat);
  
  return 0;
}
