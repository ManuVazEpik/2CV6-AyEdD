//Autor:Vazquez Peña Ivan Manuel
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int *arreglo1,*arreglo2,*arreglo3;
    int tamA,tamB; 
    int i=0,j=0,k=0;                                  
    arreglo1=(int *)malloc(sizeof(int)*3);                   

    arreglo2=(int *)malloc(sizeof(int)*4);                   
    arreglo3=(int *)malloc(sizeof(int)*7);                


    printf("Introduce el tam de a: ");
    scanf("%d",&tamA);
    printf("Introduce el tam de b: ");
    scanf("%d",&tamB);
    arreglo1=(int *)malloc(sizeof(int)*tamA);
    arreglo2=(int *)malloc(sizeof(int)*tamB); 
    arreglo3=(int *)malloc(sizeof(int)*(tamA+tamB));
    
    printf("Arreglo a: ");
	for(i=0; i<tamA; i++){
		arreglo1[i]=rand()%30;
		printf("%d\t",arreglo1[i]);
	}
	printf("\n Arreglo b: ");	
	for(i=0; i<tamB; i++){
		arreglo2[i]=rand()%20;
		printf("%d\t",arreglo2[i]);
	}
	 
    ordenar(arreglo1,tamA);
    ordenar(arreglo2,tamB);
    
    printf("\nArreglos ordenados\nArreglo a: ");
	for(i=0; i<tamA; i++)
		printf("%d\t",arreglo1[i]);
	printf("\nArreglo b: ");
	for(i=0; i<tamB; i++)
		printf("%d\t",arreglo2[i]);
	printf("\n");  
    i=0;
    
    while(i<(tamA+tamB)){
    	
    	 if(k>=tamB){
    	 	
            arreglo3[i]=arreglo1[j];
            i++;
            j++;
            continue;
            
        }
        if(j>=tamA){
            arreglo3[i]=arreglo2[k];
            i++;
            k++;
            continue;
        }
        
        if(arreglo1[j]>arreglo2[k]){
        
		    arreglo3[i]=arreglo2[k];
            i++;
		    k++;
		    
        }else{
        	
            arreglo3[i]=arreglo1[j];
            i++;
            j++;
            
        }
    }
    printf("\nEl arreglo final y ordenado es: ");
    for(i=0; i<(tamA+tamB); i++){
        printf("\t%d",arreglo3[i]);
    }
    return 0;
}

void ordenar(int arreglo[],int tam){
	
	int i,j,aux;
	
	for(i=0; i<tam; i++){
		
		for(j=0; j<(tam-1); j++){
			
			if(arreglo[j]>arreglo[j+1]){
				aux=arreglo[j+1];
				arreglo[j+1]=arreglo[j];
				arreglo[j]=aux;
				
			}
			
		}
		
	}	
	
}
