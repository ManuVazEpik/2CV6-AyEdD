//Autor: Vazquez Peña Ivan Manuel
#include<iostream>
using namespace std;

struct nodo{
    int valor;
    nodo *apu_sig;
};
typedef nodo *apu_nodo;

int main(){
	
    apu_nodo inicial = NULL, auxiliar, actual, recorrido, anterior;
    int n,i;
    
	actual=new(nodo);
    recorrido=new(nodo);
    
	printf("Cuantos nodos necesita?: ");
    scanf("%d",&n);
    
	for(i=1;i<=n;i++){
    	
		if(inicial==NULL){
    	
			inicial=new(nodo);
    		printf("Introduce el valor del nodo %d: ",i);
    		scanf("%d",&inicial->valor);
    		inicial->apu_sig=NULL;
    		actual=inicial;
		
		}else{
		
			if(i!=n){
		
				auxiliar=new(nodo);
				printf("Introduzca el valor del nodo %d: ",i);
    			scanf("%d",&auxiliar->valor);
    			auxiliar->apu_sig=NULL;
    			actual->apu_sig=auxiliar;
    			actual=auxiliar;
		
			}else{
		
				auxiliar=new(nodo);
				printf("Valor del nodo %d: ",i);
				scanf("%d",&auxiliar->valor);
    			auxiliar->apu_sig=auxiliar; //el ultimo apunta a si mismo
    			actual->apu_sig=auxiliar;
    	
				actual=auxiliar;
			}
		}		
	}
	
	recorrido=inicial;
	
	printf("\n la lista antes de borrar es\n");
	i=1;
	while(i<=n){
	
		printf("%d\t",recorrido->valor);
		//suma += recorrido->valor;
		recorrido=recorrido->apu_sig;
		i++;
	
	}
	
	//imprimiendola
	recorrido=inicial;
	int suma;
	i=1;
	
	apu_nodo eliminar;
	eliminar = new(nodo);
	anterior = new(nodo);
	
	while(i<=n){
		
		if((inicial->valor%2)==0){
			
			 
			
		}
		
		anterior = recorrido;
		recorrido = recorrido->apu_sig;
		
		
		if((recorrido->valor%2)==0){
			
			anterior->apu_sig = recorrido->apu_sig;
			eliminar = recorrido;
			delete(eliminar);
			recorrido = anterior;
			
		}
		i++;
	}
	
	recorrido=inicial;
	
	printf("\n la lista es\n");
	i=1;
	while(recorrido!=NULL){
	
		printf("%d\t",recorrido->valor);
		//suma += recorrido->valor;
		recorrido=recorrido->apu_sig;
		i++;
	
	}
	
	//printf("La suma es: %d \n", suma);
	//printf("El promedio es: %d \n", suma/n);
    return 0;
}

