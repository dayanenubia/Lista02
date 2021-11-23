#include <stdio.h>
#include <string.h>

int main(){
	char dna[100];
	int a, b, c = 0;
	fflush(stdin);
	scanf("%s", dna);
	b = strlen(dna);
	for(a = 0; a < b; a++){
		if(dna[a] == 'A' && dna[a + 1] == 'T' && dna[a + 2] == 'G'){
			c = 1;
		}
	}
	if(c == 1){
			printf("EXISTE");
		} else {
			printf("INEXISTENTE");
		}
	return 0;
}
