/*	Esercizio 3: Archivio studenti con struct e menù
 * 24/11/2025 
 */
 
#include <stdio.h>

#define N 50

struct dati_studente {
	int matricola, voto, cfu;
};

int inserisci_studente(struct dati_studente v[], int n){
		int i;
		for(i=0; i<n; i++){
		
		printf("\n\t|| Studente %d ||\n", i);
		printf("- Matricola: ");
		scanf("%d", &v[i].matricola);
		
		do{
			printf("- Voto [18-30]: ");
			scanf ("%d", &v[i].voto);
			if (v[i].voto<18 || v[i].voto >30){
				printf("Voto non valido! Fuori dal range ammesso!\nEsprimere il voto in trentesimi [18-30]\n");
			}
		}while(v[i].voto<18 || v[i].voto >30);
		
		printf("- CFU: ");
		scanf("%d", &v[i].cfu);
    }
    return 0;
    
}


int main(){
	int scelta;
	struct dati_studente studente [N];
	do {
		printf("-------- MENU --------\n");
		printf("1) Inserisci un nuovo studente\n");
		printf("2) Stampa tutti gli studenti\n");
		printf("3) Calcola e stampa la media dei voti\n");
		printf("4) Cerca studente per matricola\n");
		printf("5) Trova e stampa lo studente con il voto massimo\n");
		printf("0) Esci\n");
		printf("----------------------\n");
		do{
			printf("Inserisci l'azione da compiere: ");
			scanf("%d", &scelta);
			
			if (scelta != 0 && scelta != 1 && scelta != 2 && scelta != 3&& scelta != 4&& scelta != 5){
				printf("[Errore: input non valido. Inserire 0/1/2/3/4/5]\n");
			}
			
		}while(scelta != 0 && scelta != 1 && scelta != 2 && scelta != 3&& scelta != 4&& scelta != 5);

	switch (scelta) {
		case 1 : 
			inserisci_studente(studente, N);
			break;
		case 2 :
			printf ("Stampa tutti\n");
			break;
		case 3 :
			printf ("Calcola media voti\n");
			break;
		case 4 :
			printf ("Cerca per matricola\n");
			break;
		case 5 : 
			printf ("Studente voto massimo\n");
			break;
		}
	}while(scelta!=0);
	
	printf("---------------\n");
	printf("Uscita\n");
	return 0;
}
