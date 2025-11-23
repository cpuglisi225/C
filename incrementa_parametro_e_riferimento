/* Passaggio di valori alla funzione incrementa
 * per parametro e per riferimento
 * 17/11/2025
 */
#include <stdio.h>

void incrementa (int n){
	n++;
	int *c = &n;
	printf("In 'Incrementa' viene creata una copia x' di x:\tx' = %d\t\t &x'\t%p\n", n, &n);
	}

void increase (int* n){
	*n +=1;	
}


int main(){
	
	int x = 5;
	int *p = &x;
	
	printf("----------------------\n");
	printf("Funzione 'Incrementa' tramite parametro:\n");
	incrementa (x);
	printf("Il valore di x in main non cambia:\t\tx = %d \t\t &x\t%p\n", x, &x);
	printf("----------------------\n");
	printf("Funzione 'Incrementa' tramite riferimento:\n");
	increase (p);
	printf("Il valore di x in main cambia:\t\t\tx = %d \t\t &x\t%p", x, &x);
	
	return 0;	
	
}
