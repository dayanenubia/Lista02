#include <stdio.h>
int main(){
	int idade, cont=0;
	float soma=0,media;
	do{
		printf("Entre com uma idade:");
		scanf("%d",&idade);
		if(idade>=0){
			soma+= idade; // soma = soma + idade;
			cont++; 
		}// fim if
	}while(idade>=0);
	media = soma / cont;
	printf("Media:%.2f",media);
	return 0;
}// fim main
