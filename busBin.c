//Autor: Vazquez Peña Ivan Manuel

#include <stdio.h>
#include <stdlib.h>
#define dim 5

int main(){
	int i,j, teclado;
	int pos_menor,alto,central,bajo;
	int menor,valor, auxiliar;
	
	printf("Ingrese la cantidad de datos que quiera ingresar\n");
	scanf("%d", &teclado);
	
	int* arregloD = (int*)malloc(sizeof(int)*teclado);
	srand(time(NULL));
	if(arregloD == NULL){
	
		printf("No se pudo crear la memoria");
		
	}else{
		
		for(i; i<teclado;i++){
		
		arregloD[i] = rand()%100; 
		
	}
}
	
	for(i=0; i<teclado; i++){
			
			j=0;
			for(j; j<teclado; j++){
		
			if(arregloD[j] > arregloD[j+1]){
			
				auxiliar = arregloD[j];
				arregloD[j] = arregloD[j+1];
				arregloD[j+1] = auxiliar;
		}
	}
}
	
	//Imprimir vector
	printf("\nLos elementos arreglados son\n:");
	for(i=0;i<teclado;i++){
		printf("Elemento[%d]: %d\n",i,(int)arregloD[i]);
	}
	
	printf("\nQue valor deseas buscar?: ");
	scanf("%i",&valor);
	
	bajo = 0;
	alto = teclado-1;
	central = (bajo+alto)/2;
	
	//Busqueda binaria
	while(bajo<=alto && arregloD[central]!=valor){
		central = (bajo+alto)/2;
		if(valor<arregloD[central])
			alto=central-1;
		else
			bajo=central+1;
	}
	
	if(valor==arregloD[central]){
		printf("\nEl valor se encuentra en la posicion: %d", central);
	}else{
		printf("\nEl valor no se encuentra");
	}
	
}
