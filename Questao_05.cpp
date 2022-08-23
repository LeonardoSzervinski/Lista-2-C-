#include<stdio.h>
#include<stdlib.h>

int i, dentro, fora, valor;

int main(){
	
	dentro=0;
	fora=0;
	
	for (i=1; i <= 10; i++){
		printf("Digite o valor %d: ", i);
		scanf("%d", &valor);
		
		if(valor>=10&valor<=20){
			dentro=dentro+1;
			
		}
		else 
			fora=fora+1;
				
	}
	
	printf("Quantidade de valores lidos que estão no intervalo [10,20]: %d\n", dentro);
	printf("Quantidade de valores fora que estão do intervalo: %d\n", fora);
	
	return 0;
	
}