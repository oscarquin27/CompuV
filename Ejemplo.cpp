#include <stdio.h>


int main(){
	
	int vectorInicial[100];
	int vectorSegUno[50];
	int vectorSegDos[50];
	int vectorSegTres[50];
	int segVal;
	int tam;
	int val;
	
	printf("De que tamano quiere el vecto? Solo impares\n");
	scanf("%d", &tam);
	
	//Validacion de usuario
	if(tam %2 == 0){
		printf("Solo se admiten tamanos impares");
		return 0;
	}
	
	//Rellenar Vector
	for(int i = 0; i < tam; i++){
		printf("\n Agregue el valor %d: ", i);
		scanf("%d", &val);
		vectorInicial[i] = val;
	}
	
	int med = tam / 2;
	
	//Primer vector segregado. Desde la mitad hasta el inicio del vector
	//Es la mitad - 1 para segregar el valor del medio
	int j = 0;
	for(int i = (med-1); i >= 0; i--){
		vectorSegUno[j] = vectorInicial[i];
		j++;
	}
	
	//Segundo vector segregado.
	//Es tamano - 1 porque no existe valor en esa posicion
	j = 0;
	for(int i = (tam-1); i > med; i--){
		vectorSegDos[j] = vectorInicial[i];
		j++;
	}
	
	//Tercer vector segregado
	//Agregar el valor introducido por el usuario y el valor de la mitad
	vectorSegTres[0] = med;
	vectorSegTres[1] = tam;
	
	//Mostrar Datos
	//VectorSeg1 de 0 a mitad
	for(int i = 0; i < med; i++){
		printf("\n VectorSegUno Key[%d] : Value[%d]", i, vectorSegUno[i]);
	}
	
	//VectorSeg2 de 0 a mitad
	for(int i = 0; i < med; i++){
		printf("\n VectorSegDos Key[%d] : Value[%d]", i, vectorSegDos[i]);
	}
	
	printf("\n VectorSegTres Key[0] : Value[%d]", vectorSegTres[0]);
	printf("\n VectorSegTres Key[1] : Value[%d]", vectorSegTres[1]);

	return 0;
	
}
