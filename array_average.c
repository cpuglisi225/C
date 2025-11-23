/*Calcolo media degli elementi di un array di dimensione N
* tramite funzione
* 12-11-2025
*/
#include <stdio.h>
#define N 2

//Dichiarazione della funzione media
float media (float b[]){
 		float average=0;
		int i; 
		for (i=0; i<N; i++){
			average += b[i];
		}
		average /=N;
		return average;	
}

int main (){
	float a[N], result; 
	int i; 
	
	printf("----Media di %d numeri----\n", N);
	
	//Richiesta elementi dell'array
	printf("Inserisci %d elementi\n", N);
	for (i=0; i<N; i++){
		printf("%d) ", i);
		scanf("%f", &a[i]);
	}
	
	//invocazione della funzione
	result = media (a);
	
	//Stampa del risultato
	printf("Media: %.2f", result);
}
