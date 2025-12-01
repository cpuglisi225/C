/* Lettura da file input.txt di valore intero
   e scrittura su file output.txt dei valori letti
   incrementati di un'unità.
   E' necessario un file input.txt nella stessa cartella
   contenente numeri interi in ogni riga del file
   01/12/2025
 */
#include <stdio.h>
#define FILE_INPUT "input.txt" //Nome del file in input
#define FILE_OUTPUT "output.txt" //Nome del file di output
int main (){
	int n;
	FILE *fp1 = fopen (FILE_INPUT, "r+");
	FILE *fp2 = fopen (FILE_OUTPUT, "a");
	
	printf("--- Lettura da file e scrittura su file ---\n");
	while (fscanf(fp1, "%d", &n)!=EOF){
		printf("Lettura da %s: %d\nScrittura in %s: %d\n\n", FILE_INPUT, n, FILE_OUTPUT, n+1);
		fprintf(fp2, "%d", n+1);
	}
	printf("Chiusura dei file %s e %s", FILE_INPUT, FILE_OUTPUT);
	fclose(fp1);
	fclose(fp2);
	
	return 0;
}
