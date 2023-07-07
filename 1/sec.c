/*

Q.1 Write a Program to write even & odd numbers from 50 to 70 into two separate files.
For example, 
Output:
Even numbers from even_file.txt:
50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70

Odd numbers from odd_file.txt:
51, 53, 55, 57, 59, 61, 63, 65, 67, 69

*/


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

