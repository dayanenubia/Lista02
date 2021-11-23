#include <stdio.h>
#include <stdlib.h>

int main(){
	int v[100], qtd, i, aux, a, impar=0; //Declarando variaveis
	
	printf("Entre com a qtde de elementos para o vetor:\n"); //Entrada: quantidade de elementos do vetor
	scanf("%d",&qtd); //Resgatando o valor
	
	printf("Digite os elementos do vetor:\n "); //Entrada: valores do vetor
		
	for(a=0;a<qtd;a++){
	    scanf("%d",&v[a]); //Resgatando os valores
	}
		
	for(i=0;i<qtd;i++){
		if(v[i] % 2 != 0){
			impar++;
		}
	}
	
	for(aux=0;aux<qtd;aux++){ 
		printf("%d |", v[aux]); //Mostrando na tela
		printf("\n");
	}
		
	printf("Quantidade de elementos impares do vetor:%d\n",impar); //Mostrando na tela
		   
	return 0;
}
