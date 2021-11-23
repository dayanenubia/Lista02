#include <stdio.h>
#include <stdlib.h>

int main(){
	int v[100], qtd, i, aux, a, par=0, soma=0, media=0; //Declarando variaveis
	
	printf("Entre com a qtde de elementos para o vetor:\n"); //Entrada: quantidade de elementos do vetor
	scanf("%d",&qtd); //Resgatando o valor
	
	printf("Digite os elementos do vetor:\n "); //Entrada: valores do vetor
		
	for(a=0;a<qtd;a++){
	    scanf("%d",&v[a]); //Resgatando os valores
	}
		
	for(i=0;i<qtd;i++){
		if(v[i] % 2 == 0){
			par++;
			soma = v[i] + soma;
		}
	}
	
	media = soma / par;
	
	for(aux=0;aux<qtd;aux++){ 
		printf("%d |", v[aux]); //Mostrando na tela
		printf("\n");
	}
		
	printf("Quantidade de elementos pares do vetor:%d\n",par); //Mostrando na tela
	printf("Media dos elementos pares do vetor:%d\n",media); //Mostrando na tela
		   
	return 0;
}
