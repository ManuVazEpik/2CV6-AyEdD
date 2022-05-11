//Autor: Vazquez Ivan
#include <iostream>
#include <stdlib.h>

int main(){
	
	int num, i, j;
	
	printf("Cuantos numeros necesita?\n");
	scanf("%d", &num);
	
	int* arreglo = (int*)malloc(sizeof(int)*num);
	
	for(i=0; i<num; i++){
		
		arreglo[i] = (int*)malloc(sizeof(int)*num);
		
	}
	
	for(i=0; i<num; i++){
		
		printf("Ingrese el numero\n");
		scanf("%d", &arreglo[i][i]);
		
	}
	
}
