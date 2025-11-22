//Calcolo della media tra due numeri tramite funzione

#include <stdio.h>

float media (int x1, int x2){
	float sum = (x1+x2);
	return sum/2;
}

int main(){ 
	int a,b;
	float m;
	printf("Calcolo della media fra due numeri\n");
	printf ("Inserisci un numero:");
	scanf("%d", &a);
	printf ("Inserisci un numero:");
	scanf("%d", &b);
	m = media (a,b);
	printf("media: %.2f", m);
	return 0;
}
