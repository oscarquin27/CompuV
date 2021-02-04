#include <stdio.h>
#include <string.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

struct persona {
	int cedula;
	struct persona *sig;	
};

persona *Primero;

void createList(){
	Primero = NULL;
}

void destroyList(){
	persona *p;
	persona *temp;
	
	while(p != NULL){
		temp = p->sig;
		delete p;
		p = temp;
	}
}

void insertNode(){
	persona *p;
	int cedula;
	p = new persona;
	printf("Edad: ");
	scanf("%d", &cedula);	
	p->cedula = cedula;
	p->sig = Primero;
	Primero = p;
}

int main(){
 createList();
 for(int i=0; i< 10; i++){
 	insertNode();	
 }
	persona *p;
	while(p != NULL){
		cout<< p->cedula<<"->";
		p = p->sig;
	}
	cout<<"NULL"<<endl;
	return 0;
}
