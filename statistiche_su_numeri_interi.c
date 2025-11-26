/* Esercizio 1: Statistiche sui numeri interi 
 * A) Richiede inserire sequenza di numeri interi positivi 
 * B) Terminare la sequenza quando l'utente considera lo 0 (non va considerato nei calcoli)
 * C) Calcolare numeri inseriti, somma dei numeri, media, massimo e minimo,  
 *    quanti pari e quanti dispari
 * 26/11/2025
 */
 
 #include <stdio.h>
  
int main (){
	
	//Variabili
	int sum=0, min, max, even_count, odd_count, input, n_input=0;
	float average, n;
	
		
	//Add values, stop input when 0 
	printf("Insert values [0 to stop]:\n");
	even_count = 0;
	odd_count = 0;
	
	do{
		printf("%d) =\t ", n_input);
		scanf("%d", &input);
		if (input==0) break;
		else {
			if (n_input==0) {
				max = input;
				min = input;
			}
			sum += input;
			if (input>max) max = input; //new max	
			else if (input<min) min = input; //new min
			if (input%2==0) even_count++;
			else odd_count++;
		n_input++;
		}
	}while (input!=0);
	if (n_input!=0){
		
		//sum
		printf("SUM: %d\n", sum);
		printf("---------\n");
		
		//average
		n = (float)n_input;
		average = sum/n;
		printf("AVERAGE: %.2f\n", average);
		
		//max min
		printf("---------\n");
		printf("MAX: %d\n", max);
		printf("MIN: %d\n", min);
		
		//even and odd
		printf("---------\n");
		printf("ODD COUNT: %d\nEVEN COUNT: %d\n", odd_count, even_count);
	}
	else {
		printf("No valid data...\n");
	}
}
