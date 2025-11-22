/*richiesta del voto degli alunni in decimali 
(con controllo del range) e relativa segnalazione 
di bocciatura o promozione, con un ciclo infinito.
03-11-2025*/
#include <stdio.h>

int main (){
	int alunno_i = 1;
	int voto; 
	while (1){
		do{
			printf("Inserisci il voto in decimi dell'alunno %d [0-10]: ", alunno_i);
			scanf ("%d", &voto);
			if (voto<0 || voto >10){
				printf("Voto non valido! Fuori dal range ammesso!\nEsprimere il voto in decimi [0-10]\n");
			}
		}while(voto<0 || voto >10);
		if (voto<6){
			printf("Alunno %d bocciato...\n", alunno_i);
		}
		else {
			printf("Alunno %d promosso!\n", alunno_i);
		}
	}
	return 0;
}
