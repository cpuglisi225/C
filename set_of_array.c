/* Creazione di un set da un array di N elementi
 * creando un nuovo array che contenga gli elementi dell'array
 * di partenza senza ripetizioni. 
 * Gli elementi ripetuti vengono posti a zero alla fine del set.
 * 17/11/2025
 */
#include <stdio.h>

#define N 8

int set[N];

int main (){
	int i, j, k=0, find, tmp;
	int array [N] = {1,1,5,2,3,4,10,5};
	
	for (i=0; i<N; i++){
		for (j=0; j<N; j++){
			find=0;
			if (array[i] == set[j]){
				find = 1;
				break;
				}
		}
		if (find==0){
			set[k]=array[i];
			k++;			
			}
		}

	//print result
	for (i=0; i<N; i++)	{
		printf("%d) %d\n", i, set[i]);
		}
	return 0;
}
