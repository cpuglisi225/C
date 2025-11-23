//Area di un triangolo
#include <stdio.h>

int main (){
	int base, altezza, area;
	printf("Calcolo area di un triangolo\n");
	printf("Inserisci la base: ");
	scanf("%d", &base);
	printf("Inserisci l'altezza: ");
	scanf("%d", &altezza);
	area = base*altezza;
	printf("area = %d", area);
	return 0;
}
