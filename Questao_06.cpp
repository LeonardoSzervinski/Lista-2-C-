#include<stdio.h>
#include<stdlib.h>

int i, soma, valor;

int main(){
	
	soma=0;
	
	for (i=1; i <= 10; i++){
		printf("Digite o valor %d: ", i);
		scanf("%d", &valor);
		
		if(valor<40){
			soma=soma+valor;	
		}			
	}
	
	printf("O valor final da soma efetuada: %d\n", soma);
	
	return 0;
	
}