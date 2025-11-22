/* calcolo dell'età a partire dall'anno attuale
17/11/2025
*/
#include <stdio.h>

int calcolo_eta (int anno_nascita, int anno_attuale){
	int minuendo, sottraendo, diff; 
	if (anno_nascita>anno_attuale){
		minuendo = anno_nascita;
		sottraendo = anno_attuale;
	}
	else {
		minuendo = anno_attuale;
		sottraendo = anno_nascita;
	}
	diff = minuendo - sottraendo;
	return diff;
}

int main (){
	int anno_attuale, anno_nascita, anni;
	printf("Inserisci l'anno di nascita: ");
	scanf ("%d", &anno_nascita);
	printf("Inserisci l'anno attuale: ");
	scanf("%d", &anno_attuale);
	
	anni = calcolo_eta (anno_nascita, anno_attuale);
	printf("Hai %d anni", anni);
}
