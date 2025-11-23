/* Acquisizione di username e password attraverso 
 * la lettura di stringhe inserite dall'utente
 * verificando che rispetti i seguenti requisiti:
 * 1. Requisiti per Username:
 *	 - Lunghezza: 3-32 caratteri
 *	 - Solo caratteri alfanumerici (a-z, A-Z, 0-9)
 * 2. Requisiti per Password:
 * 	 - Lunghezza: 8-32 caratteri
 * 	 - Solo caratteri alfanumerici (a-z, A-Z, 0-9)
 */
#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define N 40
#define MIN_USERNAME 3
#define	MAX_USERNAME 32
#define MIN_PASSWORD 8
#define	MAX_PASSWORD 32


int main(){
	
	char nome_utente[N], password [N];
	int len, check, i;
	
	printf("-------- Registrazione --------\n");
	printf("1. Requisiti per Username\n");
    printf("  - Lunghezza: 3-32 caratteri\n");
    printf("  - Solo caratteri alfanumerici (a-z, A-Z, 0-9)\n");
	printf("--------------\n");
	
	printf("Username: ");
	do {
	fgets (nome_utente, N, stdin); //  scanf ("%[^\n]", nome_utente);
	len = strlen(nome_utente)-1;
	if (len < MIN_USERNAME || len > MAX_USERNAME) check = 0;		
	else check = 1;
	for (i=0; i<len; i++){
		if (isalnum(nome_utente[i])==0) check=0;
	}
	if (check ==0) printf("[Errore: requisiti non rispettati]\nUsername: "); 
	}while (check == 0);
	
	printf("--------------\n");
	printf("2. Requisiti per Password\n");
	printf("  - Lunghezza: 8-32 caratteri\n");
    printf("  - Solo caratteri alfanumerici (a-z, A-Z, 0-9)\n");
    
	printf("--------------\n");
	printf("Password: ");
	do {
	fgets (password, N, stdin); //  scanf ("%[^\n]", nome_utente);
	len = strlen(password)-1;
	if (len < MIN_PASSWORD || len > MAX_PASSWORD) check = 0;		
	else check = 1;
	for (i=0; i<len; i++){
		if (isalnum(password[i])==0) check=0;
	}
	if (check ==0) printf("[Errore: requisiti non rispettati]\nPassword: "); 
	}while (check == 0);

	printf("--------------\n");
	printf("Username:  %s", nome_utente);
	printf("Password:  %s",  password);
	
	return 0;
}
