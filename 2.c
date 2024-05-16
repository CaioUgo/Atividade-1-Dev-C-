#include <stdio.h>

//Atividade 2

 int main() {
    
     //Declaração de variáveis
     
   
     float media,nota1, nota2, nota3, nota4,totalNotas; 
      
      
    
     
     //Exibindo as váriaveis
    printf("Digite a primeira nota: ");
     scanf("%f", &nota1);
 
    printf("Digite a segunda nota: ");
     scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
     scanf("%f", &nota3);

    printf("Digite a quarta nota: ");
     scanf("%f", &nota4);
     
         

	     totalNotas = nota1 + nota2 + nota3 + nota4;
         media = totalNotas / 4;
     
     
   			 printf("Media do aluno = %.2f/n",media);


 }
