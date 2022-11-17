
#include<stdio.h>

int main(void) {

	double number1, number2, number3;
	double average;

	printf("Enter 3 numbers: ");
	scanf("%lf %lf %lf", &number1, &number2, &number3);


	average = (number1 + number2 + number3) / 3;

	printf("\nAverage is : %0.3lf\n", average);


	while(getchar() != '\n') {

	}
	getchar();
}

