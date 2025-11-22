/*Somma dei primi n numeri naturali, calcolata tramite
ciclo for, ciclo while e tramite formula di Gauss
per verificare l'equivalenza fra le strutture 
iterative for/while
03-11-2025*/
#include <stdio.h>

int main(){
	int somma_for =0, somma_while = 0;
	int n;
	printf("---Somma dei primi n numeri naturali---\n");
	printf("Inserisci n: ");
	scanf("%d", &n);
	
	//Somma con ciclo for
	int i;
	for (i=0; i<=n; i++){
		somma_for +=i;
	}
	printf("Somma con ciclo for: %d\n", somma_for);
	
	//Somma con ciclo while
	int j=0;
	while (j<=n){
		somma_while +=j;
		j++;
	}
	printf("Somma con ciclo while: %d\n", somma_while);
	
	//Somma calcolata tramite formula di Gauss
	printf("Somma con formula di Gauss: %d", (n+1)*n/2);
	return 0;	
}
