//Autor:Vazquez Peña Ivan Manuel
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int *a,*b,*c;
    int tamA,tamB; 
    int i=0,j=0,k=0;                                  
    a=(int *)malloc(sizeof(int)*3);                   

    b=(int *)malloc(sizeof(int)*4);                   
    c=(int *)malloc(sizeof(int)*7);                


    printf("Introduce el tam de a: ");
    scanf("%d",&tamA);
    printf("Introduce el tam de b: ");
    scanf("%d",&tamB);
    a=(int *)malloc(sizeof(int)*tamA);
    b=(int *)malloc(sizeof(int)*tamB); 
    c=(int *)malloc(sizeof(int)*(tamA+tamB));
    
    printf("Arreglo a: ");
	for(i=0; i<tamA; i++){
		a[i]=rand()%30;
		printf("%d\t",a[i]);
	}
	printf("\n Arreglo b: ");	
	for(i=0; i<tamB; i++){
		b[i]=rand()%20;
		printf("%d\t",b[i]);
	} 
    ordenar(a,tamA);
    ordenar(b,tamB);
    //arreglos ordetamAdos
    printf("\n Arreglos ordenados\nArreglo a: ");
	for(i=0; i<tamA; i++)
		printf("%d\t",a[i]);
	printf("\nArreglo b: ");
	for(i=0; i<tamB; i++)
		printf("%d\t",b[i]);
	printf("\n");  
    i=0;
    while(i<(tamA+tamB)){
    	 if(k>=tamB){
            c[i]=a[j];
            i++;
            j++;
            continue;
        }
        if(j>=tamA){
            c[i]=b[k];
            i++;
            k++;
            continue;
        }
        if(a[j]>b[k]){
            c[i]=b[k];
            i++;
            k++;
        }else{
            c[i]=a[j];
            i++;
            j++;
        }
    }
    printf("\nEl arreglo final y ordenado es: ");
    for(i=0; i<(tamA+tamB); i++){
        printf("\t%d",c[i]);
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
