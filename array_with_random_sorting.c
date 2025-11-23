/* Sorting array with random elements in range (0-100)
with bubble sort
17/11/2025
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10 //Array lenght
#define MAX 100 //MAX for rand number
#define MIN 0 //MIN for rand number

void print_array (int array[]){
	int i = 0;
	for (i=0; i<N; i++){
		printf("array[%d]= %d\n", i, array[i]);
	}
}

void bubblesort_array (int a[]){
	int i, j, tmp, count =0; 
	for (i=0; i<N-1; i++){
		for (j=0; j<N-1; j++){
			if (a[j]>a[j+1]){
				tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;	
				count ++;			
			}
		}
	}
}

int main (){
	int random_array [N], i;
	srand(time(NULL));
	
	//Generating array elements with rand() and printing
	for (i=0; i<N;i++){
		random_array[i] = rand ()%(MAX - MIN +1) + MIN;
	}

		
	//printing array values
	printf("----- Random Values -----\n");
	print_array(random_array);
	
	//Sorting and printing array values
	printf("----- Sorted Random Values -----\n");
	bubblesort_array(random_array);
	print_array(random_array);
			
	return 0;
}
