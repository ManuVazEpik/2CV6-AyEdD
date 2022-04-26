//Autor: Vazquez Peña Ivan Manuel
#include <stdio.h>
#include <stdlib.h>

int partir(int* arreglo,int longitud){
    
	int paso=1;
    int *m1=(int *)malloc(longitud*sizeof(int));
    if(!m1){
    	
    printf("El arreglo no se pudo crear");
	return -1;
    	
	}
    int *m2=(int *)malloc(longitud*sizeof(int));
    if(!m2){
    	
    printf("El arreglo no se pudo crear");
	return -1;
    	
	}
	int i,paso1,limite1,paso2,limite2, k;
    
	while (paso<longitud) {
    
    
	    for(i=0;(i+paso-1)<(longitud-1);i+=2*paso){
    
	        paso1=i;
            limite1=i+paso-1;
            paso2=limite1+1;
    		
    		//Operador ternario para comprobar que lado debe acomodarse primero
	        (i+2*paso-1)<(longitud-1)?(limite2=i+2*paso-1):(limite2=longitud-1);
    
	        mezcla(arreglo,paso1,limite1,paso2,limite2,m1,m2);
	        
    
	    }
    
    
	    paso=paso*2;
    
	}
    
	return 0;

}

int mezcla(int *arreglo,int paso1,int limite1,int paso2,int limite2,int* m1,int* m2){
	
	int longitud1=limite1-paso1+1;
    int longitud2=limite2-paso2+1;
    int a=0;
    int b=0;
    int p=paso1;
    
    //Copiando la memoria hasta el punto medio de los arreglos creados
    memcpy(m1,arreglo+paso1,sizeof(int)*longitud1);
    memcpy(m2,arreglo+paso2,sizeof(int)*longitud2);
	while (a<longitud1&&b<longitud2) {
    
	    if(m1[a]<m2[b]){
    
	        arreglo[p++]=m1[a++];
    
	    }
    
	    else{
    
	        arreglo[p++]=m2[b++];
    
	    }
    }
    while (a<longitud1) {
        arreglo[p++]=m1[a++];
    }
    while(b<longitud2){
        arreglo[p++]=m2[b++];
    }
    int i;
    
    return 0;
}



int main(){
	
	int i, num, control;
	printf("Cuantos numeros quiere ingresar?\n");
	scanf("%d", &num);
	
	int* arreglo = (int*)malloc(num*sizeof(int));
	if(!arreglo){
		printf("No se pudo guardar la memoria asignada");
		return 0;
	}
	
	srand(time(NULL));
	
	printf("Quiere imprimir el arreglo? 1.-Si\n");
	scanf("%d", &control);
	
	
	if(control == 1){
			printf("Arreglo sin ordenar\n");
		}
	
	for(i=0; i<num; i++){
		
		arreglo[i] = rand()%100001;
		
		if(control == 1){
			printf("%d\t", arreglo[i]);
		}
		
	}
	
	printf("\n");
	
	partir(arreglo, num);
	
	control = 0;
	printf("Quiere imprimir el arreglo? 1.-Si\n");
	scanf("%d", &control);
	
	
	if(control == 1){
			printf("Arreglo ordenado\n");
		}
	
	for(i=0; i<num; i++){
		
		if(control == 1){
			printf("%d\t", arreglo[i]);
		}
		
	}
	
	return 1;
	
}
