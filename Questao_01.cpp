#include<stdio.h>
#include<stdlib.h>

int prato, sobremesa, bebida, caloria;

int main(){

	printf("Escolha uma opcao (digite o numero):\n Prato: 1-vegetariano, 2-peixe, 3-frango, 4-carne: ");	
	scanf("%d", &prato);
		
			
	switch (prato){
	    case 1 :
	    caloria=caloria+180;
	    break;
	    
	    case 2 :
	    caloria=caloria+230;
	    break;
	    
	    case 3 :
	    caloria=caloria+250;
	    break;
	    
	    case 4 :
	    caloria=caloria+350;
	    break;
	    
 	}

		printf("Escolha uma opcao (digite o numero):\n Sobremesa: 1-abacaxi, 2-sorvete diet, 3-mouse diet, 4-mouse chocolate: ");	
	scanf("%d", &sobremesa);
		
			
	switch (sobremesa){
	    case 1 :
	    caloria=caloria+75;
	    break;
	    
	    case 2 :
	    caloria=caloria+110;
	    break;
	    
	    case 3 :
	    caloria=caloria+170;
	    break;
	    
	    case 4 :
	    caloria=caloria+200;
	    break;
	    
 	}	
	
	printf("Escolha uma opcao (digite o numero):\n Sobremesa: 1-abacaxi, 2-sorvete diet, 3-mouse diet, 4-mouse chocolate: ");	
	scanf("%d", &bebida);
		
			
	switch (bebida){
	    case 1 :
	    caloria=caloria+20;
	    break;
	    
	    case 2 :
	    caloria=caloria+70;
	    break;
	    
	    case 3 :
	    caloria=caloria+100;
	    break;
	    
	    case 4 :
	    caloria=caloria+65;
	    break;
	    
 	}
 	
 	printf("Quantidade total de calorias: %d", caloria);
	return 0;
	
}