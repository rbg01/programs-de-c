#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

  // Barra de progreso
int main(){

    int vez = 80,
	i = 0;

	for(int vez=0; vez<80; vez++){
	    printf("\r");

	    for(int i=0; i<vez; i++)
		printf("=");
	        printf(">");
//	        fflush(stdout);
//	        sleep(1);

	}



	return EXIT_SUCCESS;
}
