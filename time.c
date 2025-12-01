/*Stampa la data corrente
  01/12/2025
*/
#include <stdio.h>
#include <time.h>

int main() {
    
    time_t t;
 
    // Get current time
    t = time(NULL);
        
    // Get the string of local time
    printf("%s", ctime(&t));
	return 0;
}
