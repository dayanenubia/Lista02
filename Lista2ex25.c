#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaMatriz.h"

int main(){
	int mat[100][100], linhas, cols, x, i, j, qtdP, qtdI;
	printf("Dimensao da matriz:");
	scanf("%d%d",&linhas,&cols);
	geraMatriz(mat,linhas,cols);
	mostraMatriz(mat,linhas,cols);
	for(i=0;i<linhas;i++)
		for(j=0;j<cols;j++)
		    if(mat[i][j] % 2 == 0){
		    	qtdP++;
			} else {
				qtdI++;
			}
		       
	// ao terminar de percorrer a matriz, mostrar cont
	printf("A quantidade de valores pares sao: %d e impares: %d ",qtdP, qtdI);
	return 0;
}
