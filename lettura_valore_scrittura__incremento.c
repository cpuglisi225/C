/* Lettura da file input.txt un valore intero
   e scrittura su file output.txt il valore letto
   incrementato di un'unità.
   E' necessario un file input.txt nella stessa cartella
   contenente un numero intero nella prima riga. 
   01/12/2025
 */
#include <stdio.h>

int main (){
	int n;
	FILE *fp = fopen ("input.txt", "r+");
	
	fscanf(fp, "%d", &n);
	printf("Lettura dal file input.txt del valore: %d\n", n);
	fclose(fp);
	
	fp = fopen ("output.txt", "w");
	printf("Scrittura sul file output.txt del valore incrementato: %d\n", n+1);
	fprintf(fp, "%d", n+1);
	fclose(fp);
	
	return 0;
}
