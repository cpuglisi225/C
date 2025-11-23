//Quadrato di un numero
// 12/11/2025
#include <stdio.h>

int potenza_di2 (int numero ){
	numero *= numero; // a *= a equivalente a = a*a
	return numero; 
	}

int main (){
	int n, quadrato; 
	printf("Calcolo del quadrato di un numero\n");
	printf("Inserisci un numero: ");
	scanf("%d", &n);
	quadrato = potenza_di2 (n);
	printf("Il quadrato e': %d", quadrato);
	return 0; 
}


