#include<stdio.h>
#include<stdlib.h>

int valor;

int main(){
	
	do {
		printf("Digite um numero inteiro entre 1 e 12: ", valor);	
		scanf("%d", &valor);
		
		switch ( valor ){
		
		case 1 :
	    	printf ("Janeiro.\n");
		    break;
			    
	    case 2 :
		   printf ("Fevereiro.\n");
		    break;
			    
	    case 3 :
		    printf ("Março.\n");
		    break;
			    
	    case 4 :
		    printf ("Abril.\n");
		    break;
			    
	    case 5 :
			    printf ("Maio.\n");
			    break;
			    
			    case 6 :
			    printf ("Junho.\n");
			    break;
			    
			    case 7 :
			    printf ("Julho.\n");
			    break;
			    
			    case 8 :
			    printf ("Agosto.\n");
			    break;
			    
			    case 9 :
			    printf ("Setembro.\n");
			    break;
			    
			    case 10 :
			    printf ("Outubro.\n");
			    break;
			    
			    case 11 :
			    printf ("Novembro.\n");
			    break;
			    
			    case 12 :
			    	printf ("Dezembro.\n");
			    	break;
			    
			    default:
			    	printf("es referente a este numero, realize uma nova tentativa.");
			    	break;
		 	}
	} while( valor<1 || valor>12);
	
		
	
		
	return 0;
	
}
