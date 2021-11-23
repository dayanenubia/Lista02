#include<stdio.h>
#include<stdlib.h>
#include"bibliotecaVetor.h"

int retornaMelhorVolta(int v[], int n){
	int i, melhorVolta, menorTempo;
	menorTempo = v[0];
	melhorVolta = 0;
	for(i = 1; i < n; i++){
		if(v[i] < menorTempo){
			menorTempo = v[i];
			melhorVolta = i;
		}
	}
	return melhorVolta;
}

float retornaMedia(int v[], int n){
	int i; 
	float soma=0;
	for(i=0; i<n; i++){
		soma+= v[i];
	}
	return soma/n;
}

main(){
	int voltas, tempo[100], melhorVolta; 
	float tempoMedio;
	
	printf("Quntidade de voltas: ");
	scanf("%d", &voltas);
	
	leiaVetor(tempo, voltas);
	mostraVetor(tempo, voltas); 
	
	melhorVolta = retornaMelhorVolta(tempo, voltas);
	tempoMedio = retornaMedia(tempo, voltas);
	
	printf("\n Melhor tempo foi de %d segundo.\n", tempo[melhorVolta]);
	printf("\n Volta que ocorreu o melhor tempo foi na %d volta.\n", melhorVolta + 1);
	printf("\n Tempo medio dos %d voltas: %.2f segundos.", voltas, tempoMedio);
	
	return 0;
}
