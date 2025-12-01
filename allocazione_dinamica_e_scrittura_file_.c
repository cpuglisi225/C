/*Inserimento di elementi in un array
  tramite allocazione dinamica e 
  scrittura su file degli elementi inseriti
  01/12/2025
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
	int n, i;
	int *p;
	
	FILE *fp = fopen ("output.txt", "w");
	
	printf ("Inserisci il numero di elementi: ");
	scanf ("%d", &n);
	
	p = (int*)malloc (n*sizeof(int));
	
	for (i=0; i<n; i++){
		printf("%d) ", i);
		scanf("%d", &p[i]);
	}
	for (i=0;i<n; i++){
		 printf("Scrittura su file di: %d\n", p[i]);
		 fprintf(fp, "%d\n", p[i]);
	}
	
	free (p);
	return 0; 
}
