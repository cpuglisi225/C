/* Esempio di applicazione del concetto di code in C
   attraverso un programma che gestisce l'accesso al 
   pronto soccorso, permettendo di assegnare un codice 
   di urgenza ai pazienti, di compilare l'anagrafica
   (nome, cognome, codice fiscale e diagnosi preliminare)
   e di visualizzare il prossimo paziente nella lista d'attesa
   sulla base del codice di emergenza. 
   Viene creato un file 'log.txt' con i log degli accessi al
   pronto soccorso con la seguente formattazione: 
   [RIGA 1] DATA DI REGISTRAZIONE
   [RIGA 2] COGNOME,NOME,CODICEFISCALE,DIAGNOSI,
   Struttura base del programma fornita dal docente. 
   01/12/2025
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define S 100
#define N 4
#define BREAK_LINE "==============================="
 
typedef struct{
	char cognome[S], nome[S], cod_fiscale[S], diagnosi[S];
}tipobaseQueue;

typedef short boolean;

typedef struct{
	int numeri[N];
}index;

struct nodoQueue{
	tipobaseQueue info;
	struct nodoQueue *next;
};

typedef struct{
	struct nodoQueue *front, *rear;
}queue;

#define CODAVUOTA NULL

void MakeNullQueue(queue *q){
	q->front=q->rear=CODAVUOTA;
}

boolean EmptyQueue(queue q){
	return(q.front==CODAVUOTA);
}

boolean FullQueue(queue q){
	struct nodoQueue *tmp;
	tmp=(struct nodoQueue *)malloc(sizeof(struct nodoQueue));
	if (!tmp) return 1; //non c'è spazio
	else {
		free(tmp);
		return 0;
	}
}

void EnQueue(queue *q, tipobaseQueue x){
	struct nodoQueue * tmp;
	if (!FullQueue(*q)) {
		tmp=(struct nodoQueue *)malloc(sizeof(struct nodoQueue));
		tmp->info=x;
		tmp->next=CODAVUOTA;
		if (EmptyQueue(*q)) q->front=q->rear=tmp;
		else {
			q->rear->next=tmp;
			q->rear=tmp;
		}
	}
}

void DeQueue(queue *q){
	struct nodoQueue *tmp;
	if (!EmptyQueue(*q)) {
		tmp=q->front->next;
		free(q->front);
		q->front=tmp;
		if (q->front==CODAVUOTA) q->rear=CODAVUOTA;
	}
}

tipobaseQueue Front(queue q){
	if (!EmptyQueue(q)) {
		return(q.front->info);
	}
}

#define FFLUSH while(getchar()!='\n')

void LeggiStringa(char s[], unsigned long dim){
	unsigned long i;
	for (i=0; (s[i]=getchar())!='\n' && i<dim-1; i++);
		s[i]='\0';
		if (i==dim-1)  FFLUSH;
}

void LeggiElementoQueue(tipobaseQueue *x){
	FILE *fp = fopen ("log.txt", "a");
	// Variable to store current time
    time_t t;
	printf("Cognome: ");
	LeggiStringa(x->cognome, S);
	printf("Nome: ");
	LeggiStringa(x->nome, S);
	printf("Codice Fiscale: ");
	LeggiStringa(x->cod_fiscale, S);
	printf("Diagnosi preliminare: ");
	LeggiStringa(x->diagnosi, S);
	t = time (NULL);       
	fprintf(fp,"%s%s,%s,%s,%s,\n", ctime(&t), x->cognome, x->nome, x->cod_fiscale, x->diagnosi);
	fclose (fp);
//	system("pause");
//	system("cls");

}

void VisualizzaElementoQueue(tipobaseQueue x){
	printf("Cognome: %s\n", x.cognome);
	printf("Nome: %s\n", x.nome);
	printf("Codice Fiscale: %s\n", x.cod_fiscale);
	printf("Diagnosi: %s\n", x.diagnosi);
//	system("pause");
//	system("cls");
}
queue archivio[N];

int main(){
	int i,s,indice;
	
	tipobaseQueue elem;
	
	for (i=0; i<N ; i++) 
		MakeNullQueue(&archivio[i]);
	
	do {
		printf("%s\nMenu di Accessso Pronto Soccorso\n%s\n\n", BREAK_LINE, BREAK_LINE);
		printf("1 Registrazione nuovo paziente\n");
		printf("2 Visualizza prossimo paziente\n");
		printf("3 Termina sessione\n\n%s\n", BREAK_LINE);
		printf("Seleziona un'opzione: ");
		scanf("%d", &s);
		FFLUSH;
	switch (s) {
		case 1:do{
			printf("%s\nQuale urgenza assegnare?\n", BREAK_LINE);
			printf("0 Codice Rosso\t\tEmergenza critica: 0-5 min\n");
			printf("1 Codice Arancione\tUrgenza alta: 5-15 min\n");
			printf("2 Codice Giallo\t\tUrgenza moderata: 30 min\n");
			printf("3 Codice Verde\t\tUrgenza bassa: 1-2 h\n%s\n",BREAK_LINE );
			printf("Seleziona codice: ");
			scanf("%d", &indice);
			FFLUSH;
		}while (indice>3);
			if (!FullQueue(archivio[indice])) {
				printf("%s\nAnagrafica paziente\n", BREAK_LINE);
				LeggiElementoQueue(&elem);
					EnQueue(&archivio[indice], elem);
			}else printf("\nCoda Piena \n");
			break;
		case 2: do{
			printf("%s\nQuale lista d'attesa consultare?\n", BREAK_LINE);
			printf("0 Codice Rosso\t\tEmergenza critica: 0-5 min\n");
			printf("1 Codice Arancione\tUrgenza alta: 5-15 min\n");
			printf("2 Codice Giallo\t\tUrgenza moderata: 30 min\n");
			printf("3 Codice Verde\t\tUrgenza bassa: 1-2 h\n%s\n",BREAK_LINE );
			printf("Seleziona un'opzione: ");
			scanf("%d", &indice);
			FFLUSH;
		}while (indice>3);
			if (EmptyQueue(archivio[indice]))
				{	
				printf("%s\nNessun paziente in lista d'attesa\n", BREAK_LINE);
			//	system("pause");
			//	system("cls");
				}
			else {
				elem=Front(archivio[indice]);
				DeQueue(&archivio[indice]);
				printf("%s\nProssimo paziente in lista d'attesa\n", BREAK_LINE);
				VisualizzaElementoQueue(elem);
			}
			break;
	}
	} while (s<3);
}
