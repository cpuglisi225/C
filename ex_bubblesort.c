#include <stdio.h>
#define N 5 //Array lenght

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
	printf("\n----- Sorted Values -----\n\n");
	print_array(a);
	printf("\n-------------------------\n");
	printf("TOTAL SWITCHES %d\nTOTAL ITERATION %d\n", count, i);	

}

int main (){
	int array [N], i;
	printf("-- Bubble Sort (N = %d) --\n\n", N);
	//Generating array elements with rand()
	for (i=0; i<N;i++){
		printf("array[%d]= ", i);
		scanf("%d", &array[i]);
	}
	
	//Sorting and printing array values
	bubblesort_array(array);			
	return 0;
}
