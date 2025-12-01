/* Acquisizione degli elementi di un array
   da un file 'vettore.txt' tramite lettura
   del file e allocazione dinamica dell'array. 
   Il file 'vettore.txt' contiene un elemento
   intero per ogni sua riga 
   01/12/2025
 */
#include <stdio.h>
#include <stdlib.h>

#define INPUT_FILE "vettore.txt" //File di input

int main (){
	
	FILE *fp = fopen(INPUT_FILE, "r+");
	int  i, tmp, dim_array;
	
	printf("-- Acquisizione array dal file %s --\n\n", INPUT_FILE);
	
	//Verifica esistenza file di input
	if (fp ==NULL){
		printf("Errore: nessun file \"%s\" trovato!\n", INPUT_FILE);
		return 1;
	}
	
	//Conteggio delle linee del file
	int l_count=0;
	
	while (fscanf(fp, "%d", &tmp)!=EOF) l_count++;
	printf("Il file contiene %d righe\n", l_count);
	
	//Allocazione dinamica di un array di l_count elementi
	dim_array = l_count;
	int *array = (int*)malloc (dim_array*sizeof(int));
	
	//Riposizionamento del puntatore a inizio file
	rewind (fp);
	
	//Acquisizione dei valori
	i=0;
	while (fscanf(fp, "%d", &tmp)!=EOF) {
		array[i]=tmp;
		i++;
	}
	//Stampa dei valori acquisiti
	printf("I valori acquisiti dal file %s sono:\n", INPUT_FILE);
	for (i=0; i<dim_array; i++) printf("%d) %d\n", i,  array[i]);
	
	//Chiusura del file
	fclose (fp);
	
	//Deallocazione della memoria per l'array
	free (array);
	
	return 0;
}
