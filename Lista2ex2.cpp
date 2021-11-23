#include <stdio.h>
#include <stdlib.h>
int main(){
    int aux, qtd, maior=0, menor=0; //Declarando variaveis
    float A[100]; //Inicializando o vetor

    printf("Digite a quantidade de elementos do vetor:\n");  //Entrada: quantidade de elementos do vetor
	scanf("%d",&qtd); //Resgatando o valor
    
    for (aux=0;aux<qtd;aux++){
    	printf("Digite: "); //Entrada: valores do vetor
    	scanf("%f", &A[aux]); //Resgatando o valor
    	
      	if(aux==0){ //verificando se o usuario digitou 0 e armazenando esse valor nas variaveis maior e menor
	  		maior=A[aux];
			menor=A[aux];
		}
		
      	if(A[aux]>maior){//verificando o maior e o menor valor do vetor
        	maior=A[aux];
      	}else if(A[aux]<menor){
            menor=A[aux];
        }
    }
    printf("\nO maior valor: %d\n", maior);
    printf("\nE o menor valor: %d\n\n", menor);
    return 0;
}
