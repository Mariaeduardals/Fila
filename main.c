#include<stdio.h>
#include<stdlib.h>
#include "fila.h"


int main() {
	
 	int n = 8;
	
	Fila *fi = create(n);
	
	add(fi, 2);
	add(fi, 6);
	add(fi, 8);
	add(fi, 1);
	add(fi, 4);
	
	 int primeiro = first (fi);
	 int ultimo = last(fi);	 
	 
	 printf("Quantidade de elementos : %d \n", size(fi));
	 
	 printf("\nPrimeiro elemento %d , ultimo elemento %d \n\n",primeiro,ultimo);
	 	 
	 printf("Remover ultimo elemento, retorna 1 se o elemento for removido. Resultado : %d \n\n", pop(fi));
	 
	 printf("Quantidade de elementos apos a remocao %d \n\n", size(fi));
	
	 printf("Retorna o elemento posicionado no começo da Fila. Elemento : %d \n\n", first(fi));
	 
     printf("Retorna o elemento posicionado no fim da Fila. Elemento: %d \n\n", last(fi));

	 printf("Recebe um inteiro.Retorna -1 se o elemento nao foi encontrado e o indice se elemento encontrado. Resultado : %d \n\n", find(fi, 5));
	 
	 printf("Retorna verdadeiro se a Pilha está cheia. Resultado : %d \n\n", isFull(fi));
	
	 printf("Retorna verdadeiro se a Pilha está vazia. Resultado : %d \n\n", isEmpty(fi));
	 
	 printf("Elementos da fila: %d \n\n", printAll(fi));
	 
	 printf("Retorna verdadeiro se remove todos os elementos da pilha: %d \n\n", clear(fi));
	 
	  printf("Quantidade de elementos apos a remocao %d \n", size(fi));
	 
	return 1;
}
