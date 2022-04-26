//Autor: Vazquez Peña Ivan Manuel
#include <stdlib.h>
#include <stdio.h>

int main(){
	
	int teclado, control1, control2, evitarDup, salidaF, valor, bajo, central, alto, pasos;
	int i =0;
	printf("Ingrese la cantidad de datos que quiera ingresar\n");
	scanf("%d", &teclado);
	
	int* arregloD = (int*)malloc(sizeof(int)*teclado);
	srand(time(NULL));
	if(arregloD == NULL){
	
		printf("No se pudo crear la memoria");
		
	}else{
		
		for(i; i<teclado;i++){
		
		do{
			
			evitarDup = rand()%10001;
			salidaF = buscarNumero(evitarDup, arregloD, teclado);
			
		}while(salidaF);
		
		arregloD[i] = evitarDup;
		
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
	
	printf("Escriba 1 si quiere imprimir el arreglo, de lo contrario cualquier numero");
	scanf("%d", &control2);
	if(control2 == 1){
		i=0;
		printf("Ordenados\n");
	for(i; i<teclado;i++){
		
		printf("%d\t",arregloD[i]);
		
	}	
	}
		
	}
	
	printf("\nQue valor deseas buscar?: ");
	scanf("%i",&valor);
	
	bajo = 0;
	alto = teclado-1;
	central = (bajo+alto)/2;
	
	//Busqueda binaria
	while(bajo<=alto && arregloD[central]!=valor){
		central = (bajo+alto)/2;
		if(valor<arregloD[central]){
			alto=central-1;
		}
		else{
			bajo=central+1;
		}
		
		pasos++;
		
	}
	
	if(valor==arregloD[central]){
		printf("\nEl valor se encuentra en la posicion: %d", central);
		printf("\nCantidad de pasos necesitados: %d", pasos+1);
	}else{
		printf("\nEl valor no se encuentra");
	}
	
	return 0;
}

int buscarNumero(int numero, int arreglo[], int tam){
	int i, para=0;
	
	for(i=0; i<tam; i++){
		
		if(arreglo[i]==numero){
			para=1;
		}
		
	}
	
	return para;
	
}
