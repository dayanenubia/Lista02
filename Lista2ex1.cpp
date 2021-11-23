#include <stdio.h>
#include <stdlib.h>

int main(){
	int v[100], qtd, i, aux, a, soma=0; //Declarando variaveis
	
	printf("Entre com a qtde de elementos para o vetor:\n"); //Entrada: quantidade de elementos do vetor
	scanf("%d",&qtd); //Resgatando o valor
	
	printf("Digite os elementos do vetor:\n "); //Entrada: valores do vetor
		
	for(a=0;a<qtd;a++){
	    scanf("%d",&v[a]); //Resgatando os valores
	}
	
	for(aux=0;aux<qtd;aux++){ 
		printf("%d |", v[aux]); //Mostrando na tela
		printf("\n");
	}
		
	for(i=0;i<qtd;i++){
		soma+=v[i]; // soma = soma + v[i]; //Somando os valores do vetor
	}
		
	printf("Soma dos elementos do vetor:%d\n",soma); //Mostrando na tela
		   
	return 0;
}
