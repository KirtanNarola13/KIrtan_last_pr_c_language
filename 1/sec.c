#include <stdio.h>

int main() {
	FILE *E;
	FILE *O;
	int even[100];
	int odd[100];
	int i;

	
	E = fopen("even.txt", "w");
	if (E == NULL) {
		printf("Unable to open even.txt file.\n");
		
	}


	O = fopen("odd.txt", "w");
	if (O == NULL) {
		printf("Unable to open odd.txt file.\n");
		 
		
	}

	
	for (i = 50; i <= 70; i++) {
		if (i % 2 == 0) {
			fprintf(E, "%d\n", i); 
		} else {
			fprintf(O, "%d\n", i); 
		}
	}



	printf("Numbers have been written successfully.\n");

	return 0;
}

