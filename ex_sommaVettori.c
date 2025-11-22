/*Somma delle componenti due vettori di dimensione N = 10
*10-11-2025 
*/
#include <stdio.h>

#define N 10

int main (){
	int v1[N], v2[N], v3[N], i, j;
	
	printf("Somma componente per componente di due vettori\n");
		
	printf("Inserisci le componenti del vettore v1 di dimensione %d\n", N);
	for (i=0; i<N; i++){
			printf("v1[%d] = ", i);
			scanf("%d", &v1[i]);
	}
	printf("Inserisci le componenti del vettore v2 di dimensione %d\n", N);
	for (i=0; i<N; i++){
		printf("v2[%d] = ",i);
		scanf("%d", &v2[i]);
	}
	printf("Vettore risultante v3:\n");
	for (i=0; i<N; i++){
		v3[i]=v1[i]+v2[i];
		printf("v3[%d] = %d\n", i, v3[i]);
	}
	return 0;
}
