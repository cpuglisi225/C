#include <stdio.h>

#define N 10 //Array lenght 

int main(){
	
	//Variables
	int a[N]; //array 
	int sum, min, max, even_count, odd_count, find, sum_even, i;
	float average;
	
	//Add values to array
	printf("Add %d values to array a[%d]\n", N, N);
	for (i=0; i<N; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	
	//Sum
	printf("---------\n");
	sum = 0;
	for (i=0;i<N; i++){
		sum += a[i];
	}
	printf("SUM: %d\n", sum);
	
	//Average
	printf("---------\n");
	float n = N; //cast N to float
	average = sum/n;
	printf("AVERAGE: %.2f\n", average);
	
	//max min
	printf("---------\n");
	max = a[0];
	min = a[0];
	for(i=1; i<N; i++){
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
	for (i=0;i<N; i++){
		if (a[i]%2==0){
			even_count++;
		}
		else{
			odd_count++;
		}
	}
	printf("ODD COUNT: %d\nEVEN COUNT: %d\n", odd_count, even_count);
	
	//Find
	printf("---------\n");
	int check = 0 ; //0 as false
	printf("FIND: ");
	scanf("%d", &find);
	for (i=0; i<N; i++){
		if (a[i]==find){
			printf("Found '%d' at %d position, a[%d] = %d\n", find, i, i, a[i]);
			check = 1; //1 as true
		}
	}
	if (check == 0){
		printf("'%d' Not Found\n", find);
	}
	
	//Reversed Array
	printf("---------\n");
	int a_reverse[N];
	printf("REVERSED ARRAY: \n");
	for (i=0; i<N; i++){
		a_reverse[i] = a[N-1-i];
		printf("a[%d] = %d\n", i, a_reverse[i]);
	}


	//sum even indexes
	printf("---------\n");
	sum_even=0;
	for (i=0; i<N; i++){
		if (i%2==0){
		sum_even += a[i];
		}
	}
	printf("SUM EVEN INDEXES: %d", sum_even);
	
}
