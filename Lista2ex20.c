#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaMatriz.h"

int main(){
	int mat[100][100], linhas, cols, menor, cont=0, i, j;
	printf("Dimensao da matriz:");
	scanf("%d%d",&linhas,&cols);
	geraMatriz(mat,linhas,cols);
	mostraMatriz(mat,linhas,cols);
	menor = mat[0][0];
	// percorrer para contar x na matriz
	for(i=0;i<linhas;i++)
		for(j=0;j<cols;j++)
		    if(menor > mat[i][j])
		       menor = mat[i][j];
	// ao terminar de percorrer a matriz, mostrar cont
	printf("O valor %d e o menor valor na matriz",menor);
	return 0;
}
