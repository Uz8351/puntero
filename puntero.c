#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
 
int numeros[10];
int *puntero;
int i;
numeros[0] = 1;
numeros[1] = 2;
numeros[2] = 3;
numeros[3] = 4;
numeros[4] = 5;
numeros[5] = 6;
numeros[6] = 7;
numeros[7] = 8;
numeros[8] = 9;
puntero = &numeros[0]; /* Apunta al primer elemento de  numeros[] */
/* incrementa puntero para recorrer los tres elementos */
for (i=0; i<8; i++){
printf(" EL ELEMENTO: [%d] EN LA DIRECCION DE MEMORIA: [%p]\n", *puntero,&numeros[i]);
puntero= puntero+1;
}
 
	return 0;
}