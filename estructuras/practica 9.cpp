//Autor: Vazquez Peña Ivan Manuel
#include <iostream>

struct nodo{
    int valor;
    nodo *apu_sig;
    nodo *apu_ant;
};
typedef nodo *apu_nodo;

int main(){
	
	apu_nodo inicial, final, actual, aux;
	int num, i;
	
	printf("Ingrese la cantidad de nodos a crear\n");
	scanf("%d", &num);
	
	inicial = NULL;
	
	for(i=0; i<num; i++){
	
		if(inicial == NULL){
		
			inicial = new(nodo);
			printf("Ingrese valor del nodo %d:  ", i+1);
			scanf("%d", &inicial->valor);
			inicial->apu_ant=NULL;
			inicial->apu_sig=NULL;
		
			actual = inicial;
		}else{
				
			aux = new(nodo);
			printf("Ingrese valor del nodo %d:  ", i+1);
			scanf("%d", &aux->valor);
			aux->apu_ant = actual;
			aux->apu_sig = NULL;
			actual->apu_sig = aux;
			
			actual = aux;
			
			
		}
		
	}
	
	final = actual;
	actual = inicial;
	
	//Impresion de frente
	printf("Imprimiendo de frente: ");
	while(actual != NULL){
		
		printf("%d\t", actual->valor);
		actual = actual->apu_sig;
		
	}
	
	
	//Impresion de reversa
	actual = final;
	printf("\nImprimiendo de reversa: ");
	while(actual != NULL){
		
		printf("%d\t", actual->valor);
		actual = actual->apu_ant;
		
	}
	
	actual = inicial;
	
	aux = new(nodo);
	
	printf("\nIngrese el valor que quiere insertar:  ");
	scanf("%d", &aux->valor);
	
	while(actual != NULL){
		
		if(actual->valor < aux->valor){
			
			aux->apu_sig = actual->apu_sig;
			aux->apu_ant = actual;
			
			actual->apu_sig = aux;
			aux->apu_sig->apu_ant = aux;
			
		}
		
		actual = actual->apu_sig;
		
	}
	
	final = actual;
	actual = inicial;
	
	//Impresion de frente
	printf("Imprimiendo de frente despues de insertar: ");
	while(actual != NULL){
		
		printf("%d\t", actual->valor);
		actual = actual->apu_sig;
		
	}
	
	
	//Impresion de reversa
	actual = final;
	printf("\nImprimiendo de reversa despues de insertar: ");
	while(actual != NULL){
		
		printf("%d\t", actual->valor);
		actual = actual->apu_ant;
		
	}
	
}
