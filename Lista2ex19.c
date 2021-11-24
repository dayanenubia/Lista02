#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaMatriz.h"

int main(){
	int mat[100][100], linhas, cols, maior, cont=0, i, j;
	printf("Dimensao da matriz:");
	scanf("%d%d",&linhas,&cols);
	geraMatriz(mat,linhas,cols);
	mostraMatriz(mat,linhas,cols);
	maior = mat[0][0];
	// percorrer para contar x na matriz
	for(i=0;i<linhas;i++)
		for(j=0;j<cols;j++)
		    if(maior < mat[i][j])
		       maior = mat[i][j];
	// ao terminar de percorrer a matriz, mostrar cont
	printf("O valor %d e o maior valor na matriz",maior);
	return 0;
}
