#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main(){
	
	int matriz[MAX][MAX];
	int fila = 3;
	int col = 3;
	
	//Llenar matriz
	for(int i = 0; i < fila; i++){
		for(int j = 0; j < col; j++){
			matriz[i][j] = rand(); //Insetrta valor aleatorio
		}
	}
	
	//Mostrar
	for(int i = 0; i < fila; i++){
		for(int j = 0; j < col; j++){
			printf("\n El valor en %d x %d es : %d", i, j, matriz[i][j]);
		}
	}
	
	return 0;	
}
