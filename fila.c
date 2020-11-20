#include <stdio.h>
#include <stdlib.h>
#include "fila.h"


struct fila {
		int max;
		int contador; 
		int *valor; 
	} ;
	
	typedef struct fila Fila;

Fila* create(int n){
	
	Fila *fi = (Fila*) malloc(sizeof(Fila));
	
	if(fi == NULL){
		return NULL;
	}else{	
		fi->valor = (int*) malloc( n* sizeof(int));
		fi->max = n;
		return fi;  
	}
	fi->contador = 0;
}	

int add(Fila *fi, int e){
	
	int posicao1;
	
	if(fi != NULL && fi->contador < fi->max ){
		posicao1 = fi->contador;
		fi->valor[posicao1] = e ;
		fi->contador++;
		return 1;
	}else{
		return 0;
	}
	
}

int pop(Fila *fi){
	
	if(fi != NULL && !isEmpty(fi)){
		int i = 0;
		int k = 0;
		
		int *novoVet = (int*) malloc (fi->max * sizeof(int));
		
	for(i - 1; i < fi->contador; i++ ){
		
		novoVet[k] = fi->valor[i];
		k++;
	}
	
	fi->contador--;
	free(fi->valor);
	fi->valor = novoVet;	
		
	return 1;	
	
	}else{
		return 0;
	}
	
}

int size(Fila *fi){
	
	if(fi->contador <= fi->max)
		return fi->contador;
	
}

int first(Fila *fi){
	
	if(fi != NULL && ! isEmpty(fi)){
		return fi->valor[0];
	}else{
		return 0;
	}
	
}

int last(Fila *fi){
	
	if(fi != NULL && ! isEmpty(fi)){

		int posicaoF = fi->contador - 1;
		return fi->valor[posicaoF];
	}else{
		return 0;
	}
	
} 
int find(Fila *fi, int x){
	int i ;
	for( i = 0; i < fi->contador; i++){
		printf("(%d) - %d\n", i, fi->valor[i]);
		if(x == fi->valor[i]){
			return i;
		}
		
		
		
	}
	return -1;
}

int isFull(Fila *fi){
	
	if (fi->contador == fi->max-1 ){
		return 1;
	}else{
		return 0;
	}
}

int isEmpty(Fila *fi){
	if( fi == NULL ){
		return 1;
	}
	if(fi->contador <= 0){
	return 1;
	}else{
		return 0;
	}
	
}
int printAll(Fila *fi){
	int i;
	for(i = 0; i < fi->contador; i++){
		printf("fi -> valor[%d] = %d \n", i, fi->valor[i]);
	}
	
}

int clear(Fila *fi){
	
	if(fi != NULL){
		free(fi->valor);
		free(fi);
		return 1;
	}else{
		return 0;
	}
}







