#include <stdio.h>
#include <stdlib.h>

int main(){
	int V1[100], V2[100], V3[100];
	int qtd, a, b, c, aux;
	
	printf("Digite a quantidade de elementos que tera seus vetores: ");
	scanf("%d", &qtd);
	
	printf("Digite os valores do primeiro vetor: ");
	for(a=0;a<qtd;a++){
	    scanf("%d",&V1[a]); //Resgatando os valores
	}
	
	printf("Digite os valores do segundo vetor: ");
	for(b=0;b<qtd;b++){
	    scanf("%d",&V2[b]); //Resgatando os valores
	}
	
	
	for(c=0; c<qtd; c++){
		if(V1[c] == V2[c]){
			printf("%d |", V1[c]); //Mostrando na tela
			printf("\n");
		} 	
	}
}

