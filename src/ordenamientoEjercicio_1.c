/*
 ============================================================================
 Name        : ordenamientoEjercicio_1.c
 Author      : lau
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define QTY 7

void printArrayInt(int* pArray, int limite);
int ordenamientoLudmila(int* pArray, int limite);

int main(void) {


	int miArray[QTY] = {1,5,2,4,3,8,2};

	printf("antes de ordenar->");
	printArrayInt(miArray, QTY);

	if(ordenamientoLudmila(miArray, QTY) == 0) {
		printf("\ndespues de ordenar ->");
		printArrayInt(miArray, QTY);
	}
	return EXIT_SUCCESS;
}

int ordenamientoLudmila(int* pArray, int limite){

	int retorno = -1;
	int aux;
	int desordenado;
	int contador = 0;

	if(pArray!=NULL && limite>0){

		do {

			desordenado=0;

			for(int i=0; i<limite-1;i++){

				aux = pArray[i];

				if(pArray[i]>pArray[i+1]){

					pArray[i] = pArray[i+1];
					pArray[i+1] = aux;
					desordenado = 1;
				}
			}
			contador++;
		} while (desordenado);

		printf("\ncantidad de ciclos while -> %d", contador);
		retorno=0;
	}

	return retorno;
}


void printArrayInt(int* pArray, int limite){

	if(pArray!=NULL && limite >0){

		for(int i=0; i<limite;i++){
			printf("\nIndice: %d - Valor: %d", i, pArray[i]);
		}
	}
}



