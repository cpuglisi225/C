//Menu' di scelta interattivo tramite do-while
//03-11-2025
#include <stdio.h>

int main (){
	int scelta; 
	
	//
	do {
		printf("-----MENU'-----\n");
		printf("1 Somma\n2 Differenza\n0 Esci\n");
		do{
			printf("Inserisci l'azione da compiere: ");
			scanf("%d", &scelta);
			
			if (scelta != 0 && scelta != 1 && scelta != 2){
				printf("[Errore: input non valido. Inserire 0/1/2]\n");
			}
			
		}while(scelta != 0 && scelta != 1 && scelta != 2);
		
	if (scelta == 1) {
		printf("Somma\n");
	}
	else if (scelta == 2) {
		printf("Differenza\n");
	}
	else if (scelta == 0) {
		printf("Uscita...\n");
	}
	}while(scelta!=0);
	
	return 0;
}
