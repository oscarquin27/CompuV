#include <stdio.h>


int main(){
	
	//For y while loop
	
	int a = 10;
	
	//For loop
	for(int i= 1; i <= a; i++){
		printf("\nLa variable i es : %d", i);
	}
	
	//While loop
	int j = 1;
	while(j <= a){
		printf("\nLa variable j es: %d", j);
		j+= 1; 
	}
	
	return 0;
}
