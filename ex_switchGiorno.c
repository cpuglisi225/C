/* Selezione del giorno della settimana
 * attraverso l'impiego del costrutto switch
 */
#include<stdio.h>

int main(){
  char iniziale_giorno, seconda_lettera;
  printf("Inserire l'iniziale del giorno della settimana da selezionare [l/m/m/g/v/s/d]: ");
  scanf("%c", &iniziale_giorno); //iniziale_giorno = getchar();
  
  switch(iniziale_giorno){
    case 'l' :
    	printf("Lunedi\n");
    	break;
    case 'm':
    	printf("-Martedi\n-Mercoledi\nInserisci la seconda lettera [ma/me]: m");
		do{ 
			scanf(" %c", &seconda_lettera);
      		if (seconda_lettera == 'a') {
      			printf("Martedi\n");
	  		}
	  		else if (seconda_lettera == 'e'){
	  			printf("Mercoledi\n");
	  			}
	  		else {
	  			printf("Inserito carattere non valido, inserisci 'e'/'a': m");
	  			}
	  	}while (seconda_lettera != 'e' && seconda_lettera != 'a');
		break;
    case 'g':
    	printf("Giovedi\n");
    	break;
    case 'v':
    	printf("Venerdi\n");
    	break;
    case 's':
    	printf("Sabato\n");
    	break;
    case 'd':
    	printf("Domenica\n");
    	break;
    default:
    	printf("Carattere non riconosciuto\n");
  }
  return 0;
}
