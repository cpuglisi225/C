/* Calcolo del fattoriale di un intero n
tramite un metodo iterativo e un metodo ricorsivo
*/
#include <stdio.h>

int fattoriale_it (int n){
	int i, fatt = 1;
	for (i=1; i<=n; i++){
		fatt *=i;
	}
	return fatt;
}

int fattoriale_ric (int n){
	if (n<=1){
		return 1;
	}
	else {
		return n*fattoriale_ric(n-1);
	}
}

int main (){
	
	int n;
	printf("--- Calcolo del fattoriale di n (n!) ---\n");
	printf("Inserisci n: ");
	scanf("%d", &n);
	
	printf("Fattoriale metodo iterativo, n! = %d\n", fattoriale_it(n));
	
	printf("Fattoriale metodo ricorsivo, n! = %d\n", fattoriale_ric(n));

	
	
}
