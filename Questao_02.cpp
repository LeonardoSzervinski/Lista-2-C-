#include<stdio.h>
#include<stdlib.h>

int i, j, media;

int main(){

	media=0;
	j=0;
	
	for (i=15; i <= 100; i++){
		media=media+i;
		j=j+1;			
	}
	
	media=media/j;
		
	printf("A media aritmetica dos numeros inteiros entre 15 e 100: %d\n", media);
	
	return 0;	
}