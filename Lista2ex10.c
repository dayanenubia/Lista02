#include <stdio.h>
#include <stdlib.h>

int main(){
	int A[100];
	int qtd, a, b=0, c, x;
	
	printf("Digite a quantidade de elementos que tera seu vetor: ");
	scanf("%d", &qtd);
	
	printf("Digite os valores do vetor: ");
	for(a=0;a<qtd;a++){
	    scanf("%d",&A[a]); //Resgatando os valores
	}
	
	printf("Digite um valor inteiro: ");
	scanf("%d", &x);
	
	for(c=0; c<qtd; c++){
		if(A[c] == x){
			b++;
		}
		printf("%d |", A[c]); //Mostrando na tela
		printf("\n");
	}
	
	printf("O numero %d apareceu %d vezes.", x, b);
}

