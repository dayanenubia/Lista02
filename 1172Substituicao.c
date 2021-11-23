#include <stdio.h>
int main(){
	int num[10];
	int aux, aux2;
	printf("Digite os valores da lista: ");
	for(aux=0; aux<10; aux++){
		scanf("%d", &num[aux]);
	}

	for(aux2=0;aux2<10;aux2++){
		if(num[aux2] == 0 || num[aux2] < 0){
			num[aux2] = 1;
		}
		printf("X [ %i ] = %d\n", aux2, num[aux2]);
	}
	
}
