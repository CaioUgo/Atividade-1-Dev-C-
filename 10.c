#include <stdio.h>

//Atividade 10
	
	int main (){
	
	int primeiroValor,primeiroNovo,segundoNovo,segundoValor;
	
	 printf("\nInforme o primeiro valor: ");
	  scanf("%d", &primeiroValor);
	  
	printf("\nInforme o segundo valor: ");
	  scanf("%d", &segundoValor);
	  
	  primeiroNovo = segundoValor;
	  segundoNovo = primeiroValor;
	  
	printf("\nO valor antigo do primeiro valor = %d",primeiroValor);
	printf(" e o novo valor = %d",primeiroNovo);
	printf("\nO valor antigo do segundo valor = %d", segundoValor);
	printf(" e o novo valor = %d" , segundoNovo);
	
	
}
