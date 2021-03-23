#include <stdio.h>
#include <stdlib.h>

int main(){
	
	FILE *fs;
	int vector[100];
	
	//1. Arbir archivo
	fs = fopen("./muestravector.txt", "w");
	
	if(fs == NULL){
		printf("Error");
		return 0;
	}
	
	fprintf(fs, "\n\n\n\n Append \n\n\n\n");
	//2. Procesar o leer archi
	for(int i = 0; i < 100; i++){
		vector[i] = rand();
	}
	for(int i = 0; i < 100; i++){
		
		if(i != 99){
			if(i % 10 == 0){
				fprintf(fs, "\n[%d]->", vector[i]);
			}
			else {
			  fprintf(fs, "[%d]->", vector[i]);

			}
			
		}
		else{
			fprintf(fs,"[%d]", vector[i]);
		}
	}
	//3.Cerrar el archivo
	fclose(fs);
	
	return 0;
}
