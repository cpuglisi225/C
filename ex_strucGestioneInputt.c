/* Creazione di un array di elementi "lavoratore"
 * che include campi come nome, cognome e stipendio
 * attraverso l'uso di struct
 * con gestione dell'input di stringhe
*/
#include<stdio.h>
#include<string.h>

#define FFLUSH  while (getchar()!='\n');
#define MAX_CHAR 31
#define N_LAVORATORI 5

void strng_input(char str[], int dim) {
    fgets(str, dim, stdin);
    if (str[strlen(str)-1]=='\n')
        str[strlen(str)-1]='\0';
    else
        while (getchar()!='\n');
}

struct dati_lavoratore{
		char nome[MAX_CHAR];
		char cognome[MAX_CHAR];	
		float stipendio;
	};

int main(){
	
	int i, input_check, len_strng_input;
	float somma_stip = 0, media_stip;
	struct dati_lavoratore lavoratore[N_LAVORATORI];

	printf("--- Inserimento dati di %d Lavoratori ---\n", N_LAVORATORI);
	
	for(i=0; i<N_LAVORATORI; i++){
		
		printf("\n\t|| Lavoratore %d ||\n", i);
		
		printf("- Nome: ", MAX_CHAR-1);
	   	strng_input(lavoratore[i].nome, MAX_CHAR);
	
    	printf("- Cognome: ", MAX_CHAR-1);
    	strng_input(lavoratore[i].cognome, MAX_CHAR);
    	
    	printf("- Stipendio: ");
    	scanf("%f", &lavoratore[i].stipendio);
    	FFLUSH
    }
	
	//Calcolo stipendio minimo, massimo e media degli stipendi
	float stip_min = lavoratore[0].stipendio;
	float stip_max = lavoratore[0].stipendio;
	for( i=0; i < N_LAVORATORI; i++){
		
		somma_stip += lavoratore[i].stipendio;
		if(lavoratore[i].stipendio > stip_max) {
			stip_max = lavoratore[i].stipendio;
		}
		
		if(lavoratore[i].stipendio < stip_min){
			stip_min  = lavoratore[i].stipendio;
		}
	}
	media_stip = somma_stip/N_LAVORATORI;
	
	//Stampa del risultato
	printf("\n-----------------------------------\n");
	printf("Stipendio minimo: %.2f\n", stip_min);
  	printf("Stipendio massimo: %.2f\n", stip_max);
	printf("Stipendio medio: %.2f\n", media_stip);
	
	return 0;  
}
