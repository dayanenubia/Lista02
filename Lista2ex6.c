#include <stdio.h>
#include <stdlib.h>
int main(){
	do{
		int numSorte, aux, i, s=0, n=0, p;
		int v[100];
	
		printf("Digite um valor: ");
		scanf("%d", &numSorte);
	
		for(aux = 0; aux < 100; aux++){
			v[aux] = rand()%100;
			if(v[i] == numSorte){
				s = 1;
				p = v[aux];
			} else {
				n = 1;
			}	
		}
	
		if(s == 1){
			printf("O numero %d esta na %d posicao do vetor!\n", numSorte, p);
		} else {
			printf("O numero %d nao esta no vetor\n", numSorte);
		}
	}while(1);
	
	
}
