/* Stampa N numeri della successione di Fibonacci
 * 10-11-2025
 */
#include <stdio.h>
#define N 20

int main(){
    int a [N];
    int i;
    //termini iniziali della successione di Fibonacci
	a[0]=0;
	a[1]=1;
	
	//calcolo dei termini successivi 
	for (i=2; i<N; i++){
		a[i]= a[i-1] + a[i-2];
		}
		
	//stampa degli N termini
	for (i=0;i<N;i++){
		printf("%d) %lld \n", i+1, a[i]);
	}
	
	return 0;
}
