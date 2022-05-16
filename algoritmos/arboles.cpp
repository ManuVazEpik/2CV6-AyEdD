/*

Arboles

Una estructura lineal que da lugar a una estructura no lineal (Arboles binarios) y da a una estructura lineal.
La profundidad es la cantidad de nodos hijos (u hojas) que estén por debajo de la raíz (nodo principal).
	()
	/\		<----- Esto es un arbol binario
  ()  ()
 / \
()  ()
Sirve para:
-Almacenar datos.
-Almacenar conocimiento
-Clasificar
-Diagnosticar
-Filtrar

Requisitos:
	
	No recursivo
	Funciones permitidas
	El primero se llama raiz

*/

#include <stdio.h>
#include <iostream>

struct nodo{
	
	int valor;
	nodo *izq;
	nodo *der;
	
};

typedef struct nodo *apu_nodo;

int main(){
	
	int arreglo[] = {1,2,5,7,13,15,16};
	int num = 7;
	
	apu_nodo raiz, aux, aux2;
	int tope=num-1, minimo=0;
	int mitad = (tope+minimo)/2;
	int i=0;
	
	raiz = new(nodo);
	raiz->valor = arreglo[mitad];
	raiz->der=NULL;
	raiz->izq=NULL;
	aux2 = raiz;
	
	
	while(minimo<=tope && tope!=0){	
		
		tope = mitad-1;
		mitad = (tope+minimo)/2;
		
		aux = new(nodo);
		aux->valor = arreglo[mitad];
		aux->der =NULL;
		aux->izq = NULL;
		aux2->izq=aux;
		
		
		if(tope==minimo){
		
			aux = new(nodo);
			aux->valor = arreglo[mitad+2];
			aux->izq=NULL;
			aux->der=NULL;
			aux2->der=aux;
		
		}
		
		aux2=aux;
	}
	
	apu_nodo recorrido;
	recorrido = raiz;
	aux2 = recorrido->der; 
	
	while(recorrido!=NULL){
		
		printf("%d\n", recorrido->valor);
		if(aux2!=NULL){
			printf("%d", aux2->valor);
		}
		
		recorrido = recorrido->izq;
		aux2 = recorrido->der;
		
	}
	
	/*minimo = num/2;
	tope = num-1;
	mitad = (tope+minimo)/2;
	
	while(tope=>minimo && minimo!=num-1){	
		
		tope = mitad-1;
		mitad = (tope+minimo)/2;
		
		aux = new(nodo);
		aux->valor = arreglo[mitad];
		aux->der =NULL;
		aux->izq = NULL;
		aux2->der=aux;
		
		
		if(tope==min){
		
			aux = new(nodo);
			aux->valor = arreglo[mitad+2];
			aux->izq=NULL;
			aux->der=NULL;
			aux2->izq=aux;
		
		}
		
		aux2=aux;
	}*/
	
}


