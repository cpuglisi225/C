/* Calcolo di n termini della successione di Fibonacci
*  attraverso funzioni iterative o ricorsive
*/

#include <stdio.h>

void fibonacci_iter (int n){
	int a0 = 0, a1 = 1; // primi termini della successione
	int somma;
	int i=0; 
	
	printf("---Calcolo tramite iterazione---\n");	
	
	//stampa dei termini iniziali
	printf("%d) %d\n%d) %d\n", i, a0, i+1, a1);
	
	for (i=2; i<n; i++){
		somma = a0+a1; //somma dei termini precedenti
		
		printf("%d) %d\n", i, somma); //stampa del termine i
		
		a0 = a1;		//scorrimento dei termini
		a1 = somma;		
	}
	
}

int fibonacci_ric (int n){
		int res;
		if (n==0){
			return 0;
		}
		else if (n>0 && n<=2){
			return 1;
		}
		else {
			return fibonacci_ric (n-1) + fibonacci_ric (n-2);
		}
}

int main (){
	int n, i;
	
	printf("---Termini della Successione di Fibonacci---\n");
	
	//richiesta del numero n di termini da calcolare 
	printf("Inserisci quanti termini calcolare: ");
	scanf("%d", &n);
	
	//calcolo tramite iterazione
	fibonacci_iter(n);
	
	//calcolo tramite ricorsione
	printf("---Calcolo tramite ricorsione---\n");
	for (i=0; i<n; i++){
		 printf("%d) %d\n", i, fibonacci_ric(i));
	}
	
	
	
	return 0;
}
