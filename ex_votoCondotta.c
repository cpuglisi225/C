/* Analisi della pagella di uno studente,
 * determinando la bocciatura o la promozione
 */
#include <stdio.h>

struct studente {
	int media, condotta;
};

int main (){
	
	struct studente nome_cognome;
	printf("--- Pagella ---\n");
	printf ("Inserisci media dei voti[0-10]: ", &nome_cognome.media);
	scanf("%d", &nome_cognome.media);
	
	printf ("Inserisci media condotta[0-10]: ", &nome_cognome.condotta);
	scanf("%d", &nome_cognome.condotta);
	
	if (nome_cognome.media >= 6 && nome_cognome.condotta>6){
		printf("Studente Promosso\n");
	}
	else {
		printf("Studente bocciato\n");
	}
	return 0;
}
