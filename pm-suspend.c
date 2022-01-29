#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

	FILE *f;

        f = fopen("/sys/power/state", "w");

	if(f == NULL) {
		printf("Error opening file: /sys/power/state\n");   
		exit(1);             
	}

	fprintf(f,"%s","mem");

	fclose(f);

}
