#include <stdio.h>

 //Atividade 8

	int main () {

    float grausCelsius, grausFahrenheit;
    
    	printf("Informe os graus em  Fahrenheit: ");
    	  scanf("%f", &grausFahrenheit);    	  
    	  
    		grausCelsius = (grausFahrenheit - 32) / 1.8;   		
    		    
				printf("Os graus em Fahrenheit = %f",grausFahrenheit);
				
				printf(" e ");
				
				printf("os graus em celsius = %.1f", grausCelsius);
    		}
