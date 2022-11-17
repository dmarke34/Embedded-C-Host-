
#include<stdio.h>

int main(void) {

	char asc1, asc2, asc3, asc4, asc5, asc6;

	printf("Enter 6 characters of your choice: ");
	scanf("%c %c %c %c %c %c", &asc1, &asc2, &asc3, &asc4, &asc5, &asc6);




	printf("\nASCII codes: %d, %d, %d, %d, %d, %d", asc1, asc2, asc3, asc4, asc5, asc6);

	printf("Press enter key to exit the application");
	while(getchar() != '\n') {

	}
	getchar();
}



