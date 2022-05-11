//Autor: Vazquez Peña Ivan Manuel
#include <iostream>

struct nodo{
	
	int valor;
	nodo *apu_ant;
	
};

typedef nodo *apu_nodo;

int main(){
	
	apu_nodo tope, auxiliar;
	int repetir, accion;
	
	tope = new(nodo);
	
	do{
		
		printf("Que accion desea realizar?\n1.-Insertar\n2.-Ver\n3.-Eliminar");
		scanf("%d", &accion);
		
		switch(accion){
			
			case 1:
				
				if(tope == NULL){
		
				printf("Ingrese el valor:  ");
				scanf("%d", &tope->valor);
				tope->apu_ant = NULL;
		
				}else{
					
					auxiliar = new(nodo);
					printf("Ingrese el valor:  ");
					printf("/n");
					scanf("%d", &auxiliar->valor);
					auxiliar->apu_ant=tope;
					tope=auxiliar;
					
					
				}
				break;
			case 2:
				
				if(tope == NULL){
					printf("La pila no tiene elementos\n");
				}else{
					
					printf("El elemento tiene valor: %d", tope->valor);
					
				}
			break;
			
			case 3:
				
				if(tope == NULL){
					printf("La pila no tiene elementos\n");
				}else{
					auxiliar = tope->apu_ant;
				delete(tope);
				tope = auxiliar;
				printf("Elemento eliminado y lista actualizada\n");
				}
				break;
				
			default:
				
				printf("Esa no es una opcion valida\n");
				break;
				
		}
		
		
	}while(repetir == 1);
	
	
	
}

