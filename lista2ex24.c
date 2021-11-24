#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaMatriz.h"

int main(){
	int mat[100][100], linhas, cols, x, cont=0, l, tam;
	printf("Dimensao da matriz:");
	scanf("%d%d",&linhas,&cols);
	geraMatriz(mat,linhas,cols);
	mostraMatriz(mat,linhas,cols);
	if(linhas<cols){
		tam = linhas;
	} else if (cols<linhas){
		tam = cols;
	} else {
		tam = cols;
	}
	printf("\n\nDiagonal secundaria: ");
    for(l = 0; l < tam; l++){
        printf("%d ", mat[l][tam - 1 - l]);
    }
	return 0;
}


 
