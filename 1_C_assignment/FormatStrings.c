#include <stdio.h>

int main(void)
{
	//code
	printf("\n\n");
	printf("******************************************************************************************************");

	printf("\n\n");

	printf("Hello World !!!\n\n");

	int a = 13;
	printf("Integer Decimal Value Of 'a' = %d\n", a);
	printf("Integer Octal Value Of 'a' = %d\n", a);

	printf("Integer Hexadecimal Value Of 'a' (Hexadecimal Letters In Lower Case) = %x\n", a);
	printf("Integer Hexadecimal Value Of 'a' (Hexadecimal Letters In Lower Case) = %X\n", a);

	
	char ch = 'A';
	printf("Charachter ch = %c\n'", ch);
	
	char str[] = "AstroMediComp's Real Time Rendering batch";
	printf("String str = %s\n\n", str);

	long num = 30121995L;
	printf("Long integer = %ld\n\n", num);

	unsigned int b = 7;
	printf("Unsigned Interger 'b' = %u\n\n", b);

	float f_num = 3012.1995f;
	printf("Floating Point Number with Just %%f 'f_num' = %f\n", f_num);
	printf("Floating Point Number with %%4.2f 'f_num' = %4.2f\n", f_num);
	printf("Floating Point Number with %%6.5f 'f_num' = %6.4f\n", f_num);


	double d_pi = 3.14159265358979323846;
	printf("Double Precision Floating Point Number Without Exponential = %g\n", d_pi);
	printf("Double Precision Floating Point Number Without Exponential (Lower Case) = %e\n", d_pi);
	printf("Double Precision Floating Point Number Without Exponential (Upper Case) = %E\n\n", d_pi);
	printf("Double Hexadecimal Value Of 'd_pi' (Hexadecimal Letter in Lower Case) = %a\n", d_pi);
	printf("Double hexadecimal Values Of 'd_pi' (Hexadecimal Letter in Upper Case) = %A\n\n", d_pi);


	printf("***************************************************************************************************************");
	printf("\n\n");

	return(0);








}
