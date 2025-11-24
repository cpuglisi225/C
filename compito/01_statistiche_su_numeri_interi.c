/* Esercizio 1: Statistiche sui numeri interi 
 * A) Richiede inserire sequenza di numeri interi positivi 
 * B) Terminare la sequenza quando l'utente considera lo 0 (non va considerato nei calcoli)
 * C) Calcolare numeri inseriti, somma dei numeri, media, massimo e minimo,  
 *    quanti pari e quanti dispari
 * 24/11/2025
 */
 
 #include <stdio.h>
  
#define N 40

int a[N]; //array

int main (){
	
	//Variabili
	int sum, min, max, even_count, odd_count, i, n_input=0;
	float average, n;
	
		
	//Add values to array, stop input when 0 
	printf("Add max %d values to array [0 to stop]:\n", N, N);
	
	for (i=0; i<N; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
		if (a[i]==0){
			if(i==0) break;
			break;
		}
		n_input++;
	}

    if (n_input!=0){
		//Sum
		printf("---------\n");
		sum = 0;
		for (i=0;i<n_input; i++){
			sum += a[i];
		}
		printf("SUM: %d\n", sum);
		
		//Average
		printf("---------\n");
	    n = (float)n_input;
		average = sum/n;
		printf("AVERAGE: %.2f\n", average);
		
		//max min
		printf("---------\n");
		max = a[0];
		min = a[0];
		for(i=1; i<n_input; i++){
			if (a[i]>max){
				max = a[i]; //new max
			}	
			else if (a[i]<min){
				min = a[i]; //new min
			}	
		}
		printf("MAX: %d\n", max);
		printf("MIN: %d\n", min);
		
		//even and odd
		printf("---------\n");
		even_count = 0;
		odd_count = 0;
		for (i=0;i<n_input; i++){
			if (a[i]%2==0){
				even_count++;
			}
			else{
				odd_count++;
			}
		}
		printf("ODD COUNT: %d\nEVEN COUNT: %d\n", odd_count, even_count);
	}
	else {
		printf("No valid data...\n");
	}
}

