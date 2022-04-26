//Autor: Vazquez Peña Ivan Manuel
#include <stdio.h>
#include <math.h>

int main() {
	
	//Declaracion de variables
	double a, b, c, dis, dissq, da, disfin, x1, x2;
	int reset = 0;
    
    do{
    	
    	a, b, c, dis, dissq, da, disfin, x1, x2;
    	
	    //Obtenemos valores y guardamos en memoria
	    printf("Escribe el valor de a\n");
	    scanf("%lf", &a);
	    
	    printf("Escribe el valor de b\n");
	    scanf("%lf", &b);
	    
	    printf("Escribe el valor de c\n");
	    scanf("%lf", &c);
	    
		//Obteniendo el discriminante de la formula
	    dis = (b*b) - (4*a*c);
	    	
	    	//Caso de numeros complejos
	    if(dis < 0.0){
	    	
	    	//Obteniendo la variable compleja
	       dissq = sqrt(abs(dis));
	       da = 2*a;
	       
	       //Caso especial de b cuando es 0
	        if (b == 0){
	        	
	            printf("Primer valor de x: (%lfi)/%lf\n",dissq,da);
	            printf("Segundo valor de x: (%lfi)/%lf\n",dissq,da);
	            
	        }else{
	        	
	            printf("Primer valor de x: (%lf+%lfi)/%lf\n",-b,dissq,da);
	            printf("Segundo valor de x: (%lf-%lfi)/%lf\n",-b,dissq,da);
	            
	        }
	    }else{
	    	
	    	//Procedimiento normal
	        disfin = sqrt(dis);
	        x1 = (-b + disfin)/(2.0*a);
	        x2 = (-b - disfin)/(2.0*a);
	        
	        printf("Primer valor de x: %lf\n", x1);
	        printf("Segundo valor de x: %lf\n", x2);
	    }
	    
	    	printf("Si quiere repetir el proceso, presione 1, de lo contrario, digite otro numero");
	    	scanf("%d", &reset);
    	
	}while(reset == 1);
	
    
    
    return 0;
}
