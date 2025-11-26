/*	Esercizio 3: Archivio studenti con struct e menù
 *  26/11/2025 
 */
 
#include <stdio.h>
#include <stdlib.h>

#define N 50 

struct dati_studente {
	int matricola, voto, cfu;
};

int inserisci_studente(struct dati_studente v[], int n){
		printf("\n\t|| Studente %d ||\n", n+1);
		printf("- Matricola: ");
		scanf("%d", &v[n].matricola);
		do{
			printf("- Voto [18-30]: ");
			scanf ("%d", &v[n].voto);
			if (v[n].voto<18 || v[n].voto >30){
				printf("Voto non valido! Fuori dal range ammesso!\nEsprimere il voto in trentesimi [18-30]\n");
			}
		}while(v[n].voto<18 || v[n].voto >30);
		printf("- CFU: ");
		scanf("%d", &v[n].cfu);
		printf("Numero totale studenti: %d\n", n+1);
 		return n+1;
   }
void stampa_studenti(struct dati_studente v[], int n){
		int i;
		if (n==0){
			printf("Nessuno studente ancora inserito!\n");
		}
		else{
			for (i=0; i<n; i++){
				printf("\n\t|| Studente %d ||\n", i+1);
				printf("- Matricola:\t%d\n", v[i].matricola);
				printf("- Voto [18-30]:\t%d\n", v[i].voto);
				printf("- CFU:\t\t%d\n", v[i].cfu);
				printf("----------------------\n");
			}
			
		}
}

float media_voti(struct dati_studente v[], int n){
		float somma =0, media;
		int i;
		if (n==0){
			printf("Nessuno studente ancora inserito!\n");
			return -1;
		}
		else {
			for (i=0; i<n; i++){
				somma += v[i].voto;
			}
			media = somma/ (float)n;
			return media;	
		}
}
int cerca_per_matricola(struct dati_studente v[], int n, int matricola){
	int i, check = 0;
	for (i=0; i<n; i++){
		if (matricola == v[i].matricola){
			check=1;
			break;
		}
	}
	if (check==0) return -1;
	else return i;
	
}

int indice_voto_massimo(struct dati_studente v[], int n){
	int i, v_max;
	if (n==0) return -1;
	else {
		v_max = 0;
		for (i=1; i<n; i++){
			if (v[i].voto>v[v_max].voto){
				v_max = i;
			}
		return v_max;
		}
	}
}

void stampa_studente(struct dati_studente v[], int j){
		printf("\n\t|| Studente %d ||\n", j+1);
		printf("- Matricola:\t%d\n", v[j].matricola);
		printf("- Voto [18-30]:\t%d\n", v[j].voto);
		printf("- CFU:\t\t%d\n", v[j].cfu);
		printf("----------------------\n");
}


int main(){
	int scelta, stud_count = 0, matr_stud, i_stud;
	struct dati_studente studente [N];
	float media_voti_stud;
	do {
		printf("-------- MENU --------\n");
		printf("1) Inserisci un nuovo studente\n");
		printf("2) Stampa tutti gli studenti\n");
		printf("3) Calcola e stampa la media dei voti\n");
		printf("4) Cerca studente per matricola\n");
		printf("5) Trova e stampa lo studente con il voto massimo\n");
		printf("0) Esci\n");
		printf("----------------------\n");
		printf("Inserisci l'azione da compiere: ");
		scanf("%d", &scelta);
		switch (scelta) {
			case 1 : 
				if (stud_count<N){
				stud_count = inserisci_studente(studente, stud_count);
				}
				else printf("Numero massimo di studenti inseriti raggiunto!\n");
				break;
			case 2 :
				stampa_studenti(studente, stud_count);
				break;
			case 3 :
				media_voti_stud = media_voti(studente, stud_count);
				if (media_voti_stud>=0) printf("La media dei voti dei %d studenti e': %.2f\n", stud_count, media_voti_stud);
				break;
			case 4 :
				if (stud_count !=0){
					printf("Inserisci la matricola: ");
					scanf("%d", &matr_stud);
					i_stud = cerca_per_matricola(studente, stud_count, matr_stud);
					if (i_stud!=-1) stampa_studente (studente, i_stud);	
				else printf("Nessuno studente trovato con matricola %d\n", matr_stud);
				}
				else printf("Nessuno studente ancora inserito!\n");
				break;
			case 5 : 
				i_stud = indice_voto_massimo (studente, stud_count);
				if (i_stud!=-1) stampa_studente (studente, i_stud);
				else printf("Nessuno studente ancora inserito!\n");			
				break;
			case 0 : 
				printf("Uscita");
				break;
			default: 
				printf ("[Errore: input non valido. Inserire 0/1/2/3/4/5]\n");
			}
	}while(scelta!=0);
	
	return 0;
}
