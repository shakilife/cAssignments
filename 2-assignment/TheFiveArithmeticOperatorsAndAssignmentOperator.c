#include <stdio.h>


int main(void)
{
	//variable daclarations
	int a;
	int b;
	int result;

	//code
	printf("\n\n");
	printf("Enter Anumber :  ");
	scanf("%d", &a);

	printf("\n\n");
	printf("Enter another Number :  ");
	scanf("%d", &b);

	printf("\n\n");

	result = a + b;
	printf("Addition of A = %d And B = %d Gives %d.\n", a, b, result);

	result = a - b;
	printf("subtraction of A = %d And B = %d Gives %d.\n", a, b, result);

	result = a * b;
	printf("Multiplication of A = %d And B = %d Gives %d.\n", a, b, result);

	result = a / b;
	printf("Division of A = %d And B = %d Gives Quotient %d.\n", a, b, result);

	result = a % b;
	printf("Division of A = %d And B = %d Gives Remainder %d.\n", a, b, result);

	printf("\n\n");

	return(0);
	
}
