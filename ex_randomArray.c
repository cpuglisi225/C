/*Array with pseudorandom elements
17-11-2025*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10 //Array lenght

void print_array (int array[]){
	int i = 0;
	for (i=0; i<N; i++){
		printf("array[%d]= %d\n", i, array[i]);
	}
}
int main (){
	int random_array [N], i;
	
	//Printing Array's values before assignment
	printf("-----Valori nello stack-----\n");
	print_array(random_array);
	
	//Generating array elements with rand() 
	for (i=0; i<N;i++){
		random_array[i] = rand ();
	}
	printf("-----Valori rand()-----\n");
	print_array(random_array);
	
	//Generating array elements with rand() and srand() 
	srand (time(NULL)); // Seed the random number generator with the current time
	for (i=0; i<N;i++){
		random_array[i] = rand();
	}
	printf("-----Valori srand(time(NULL))-----\n");
	print_array(random_array);
	
	return 0;
}
