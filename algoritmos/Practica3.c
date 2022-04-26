//Autor: Vazquez Peña Ivan Manuel
#include <stdlib.h>
#include <stdio.h>

int main(){
	
	int teclado;
	int i =0;
	printf("Ingrese la cantidad de datos que quiera ingresar\n");
	scanf("%d", &teclado);
	
	int* arregloD = (int*)malloc(sizeof(int)*teclado);
	srand(time(NULL));
	if(arregloD == NULL){
	
		printf("No se pudo crear la memoria");
		
	}else{
		
		for(i; i<10;i++){
		
		arregloD[i] = rand()%100; 
		
	}
	
	//int arreglo[10]={3,2,5,4,1,8,9,7,6,10};
	//{2,3,4,1,5,8,7,9,6,10}
	int auxiliar =0;
	
	printf("Ingrese 1 si quiere imprimir el arreglo, si no cualquier otro numero");
	scanf("%d", &control1);
	
	if(control1 == 1){
		i =0;
	
		printf("Desordenados\n");
	
	for(i; i<teclado;i++){
		
		printf("%d\t", arregloD[i]);
		
	}
		printf("\n");
	}
	
	
	int j=0;
	i=0;
		
		for(i; i<teclado; i++){
			
			j=0;
			for(j; j<teclado; j++){
		
			if(arregloD[j] > arregloD[j+1]){
			
				auxiliar = arregloD[j];
				arregloD[j] = arregloD[j+1];
				arregloD[j+1] = auxiliar;
		}
		
	}
	
			
		}
	
	i=0;
		printf("Ordenados\n");
	for(i; i<teclado;i++){
		
		printf("%d\t",arregloD[i]);
		
	}
		
	}
	
	
	
	return 0;
}
