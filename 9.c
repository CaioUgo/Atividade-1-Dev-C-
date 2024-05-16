#include <stdio.h>

//Atividade 9

	int main(){
	
	
	float diametro,raio,comprimento,area;
	float pi = 3.14;
	
      printf("\nInforme o raio: ");
       scanf("%f", &raio);
       
    	comprimento = 2 * pi * raio;
		diametro = raio * 2;
		area = pi * (raio * raio);
		
			printf("\nO comprimento da circunferencia = %.2f", comprimento );
            printf("\nO diametro da circunferencia = %.2f", diametro);
			printf("\nA area da circunferencia = %.2f", area);


}
