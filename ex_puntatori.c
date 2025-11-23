/* Puntatori in C 
 * esempio con una variabile i
 * 17/11/2025
 */
#include <stdio.h>

int main (){
	int i = 256;
	int *p = &i;
	
	printf("--- Puntatori ---\nPosto i = 256 e *p = &i si ha:\n\n");
	
	printf("i\t\t%d\n",i);
	printf("*p\t\t%d\n\n", *p);
	printf("&i\t\t%p\n", &i);
	printf("p\t\t%p\n", p);
	printf("(void*)&i\t%p\n", (void*)&i);
	printf("(void*)p\t%p\n", (void*)p);

}
