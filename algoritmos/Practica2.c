//Autor: Vazquez Peña Ivan Manuel
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
	
	// Start measuring time
    time_t comienzo, fin;
    time(&comienzo);
	
	
	double total = 0;
    double sumar = 1;
    
	long int* arreglo_dinamico;
	long int n=889999999999;
	
	arreglo_dinamico = (long int*) malloc(sizeof(long int)*n);
	
	if(arreglo_dinamico == NULL){
		printf("No se pudo reservar espacio en memoria");
	}else{
		
		//srand(time(NULL));
		int guardar;
		
		long int i=0;
		for(i; i < n ; i++){
			
			total += sumar;
        	sumar /= 2.0;
			
			guardar = rand()%20;
			
			arreglo_dinamico[i] = guardar;
			//printf("%d\n",arreglo_dinamico[i]);
			
		}
		
	}
	
	time(&fin);
    time_t lapso = fin - comienzo;
    
    printf("Primer numero: %d\n", arreglo_dinamico[0]);
    printf("Primer numero: %d\n", arreglo_dinamico[n-1]);
    
    printf("Tiempo pasado: %ld segundos.\n", lapso);
	
	return 0;
	
}
