#include <stdio.h>
#include <stdlib.h>

void changer(int *arr){
	size_t tam = sizeof(arr) / sizeof(int);
	printf("\nTamano %d", arr[4]);
	for(int i = 0; i < tam; i++){
		printf("\n[%d]", arr[i]);
	}
}
int main () {
	
	int a[5];
	int b[10];
	int* c;	
	
	for(int i = 0 ; i < 5; i++){
		a[i] = rand();
	}
	c = a;
	printf("Debug C : %d", a[4]);
	changer(c);
	

	return 0;
}

