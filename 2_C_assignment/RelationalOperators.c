#include<stdio.h>

int main(void)
{
	//variable declarations
	int a;
	int b;
	int result;

	//code
	printf("\n\n");
	printf("Enter One integer :  ");
	scanf("%d", &a);

	printf("\n\n");
	printf("Enter Another Integer : ");
	scanf("%d", &b);

	printf("\n\n");
	printf("If Answer = 0, It Is 'FALSE'.\n");
	printf("Fi Answer = 1, It Is 'TRUE'.\n\n");

	result = (a < b);
	printf("(a < b) A %d Is less Than B = %d					\t Answer = %d\n", a, b, result);

	result = (a > b);
	printf("(a > b) A %d Is Greater Than B = %d					\t Answer = %d\n", a, b, result);

	result = (a <= b);
	printf("(a <= b) A %d Is less Then or Equal To B = %d		\t Answer = %d\n", a, b, result);

	result = (a >= b);
	printf("(a >= b) A %d Is Greater Than Or Equal To B = %d	\t Answer = %d\n", a, b, result);

	result = (a == b);
	printf("(a == b) A %d is Equal to B = %d					\t Answer = %d\n", a, b, result);

	result = (a != b);
	printf("(a != b) A = %d Is NOT Equal To B = %d				\t answer %d\n", a, b, result);

	return(0);


	

}
