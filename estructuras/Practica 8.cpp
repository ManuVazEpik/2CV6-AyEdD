//Autor: Vazquez Peña Ivan Manuel
#include<iostream>
using namespace std;

struct nodo{
    int valor;
    nodo *apu_sig;
};
typedef nodo *apu_nodo;

int main(){
	
    apu_nodo inicial=NULL, auxiliar, actual,recorrido;
    int n,i, j, control;
    
	actual=new(nodo);
    recorrido=new(nodo);
    
	printf("Introduce el numero de nodos que tendra la lista: ");
    scanf("%d",&n);
    
	for(i=1;i<=n;i++){
    	
		if(inicial==NULL){
    	
			inicial=new(nodo);
    		printf("Valor del nodo %d: ",i);
    		scanf("%d",&inicial->valor);
    		inicial->apu_sig=NULL;
    		actual=inicial;
		
		}else{
		
			if(i!=n){
		
				auxiliar=new(nodo);
				printf("Valor del nodo %d: ",i);
    			scanf("%d",&auxiliar->valor);
    			auxiliar->apu_sig=NULL;
    			actual->apu_sig=auxiliar;
    			actual=auxiliar;
		
			}else{
		
				auxiliar=new(nodo);
				printf("Valor del nodo %d: ",i);
				scanf("%d",&auxiliar->valor);
    			auxiliar->apu_sig=NULL;
    			actual->apu_sig=auxiliar;
    	
				actual=auxiliar;
			}
		}		
	}
	
	//imprimiendola
	recorrido=inicial;
	i=1;
	printf("\n la lista sin eliminar el primero es\n");
	while(i<=n){
	
		printf("%d\t",recorrido->valor);
		recorrido=recorrido->apu_sig;
		i++;
	
	}
	
	apu_nodo siguiente, eliminar, nuevoAux;
	
	eliminar = inicial;
	nuevoAux = inicial;
	inicial = inicial->apu_sig;
	nuevoAux = nuevoAux->apu_sig;
	delete eliminar;
	
	recorrido = inicial;
	siguiente = recorrido->apu_sig;
	
	while(recorrido != NULL){
		
			siguiente = recorrido->apu_sig;
			while(siguiente!=NULL){
				
				if(recorrido->valor > siguiente->valor){
					
					control = siguiente->valor;
					siguiente->valor = recorrido->valor;
					recorrido->valor = control;
					
				}
				siguiente = siguiente->apu_sig;
			}
		recorrido = recorrido->apu_sig;
	}
	
	//imprimiendola
	recorrido=inicial;
	i=1;
	printf("\n la lista acomodada es\n");
	while(recorrido!=NULL){
	
		printf("%d\t",recorrido->valor);
		recorrido=recorrido->apu_sig;
		i++;
	
	}
    return 0;
}

