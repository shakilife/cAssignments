#include<stdio.h>

int main(void)
{
	//code
	printf("\n\n");

	printf("Going On To Next Line....Using \\n Escape Sequence\n\n");
	printf("Demonstrating \t Horizontal \t Tab \t usingt \t \\t Escap Sequence !!!\n\n");

	printf("\'This Is A Single Quoted Output\' Done Using \\\' \\\' Escape Sequence\n\n");
	printf("\"This Is A Double Quoted Output\" Done Using \\\" \\\" Escape Sequence\n\n");
	printf("BACKSPACE Turned To BACKSPACE\bUsing Escape Sequence \\b\n\n");

	printf("\r Demonstrating Carriage Return Using \\r Escape Sequence\n");
	printf("Demonstrating \r Carriage Return Using \\r Escape Sequence\n");
	printf("Demonstrating Carriage \r Return Using \\r Escape Sequence\n\n");

	printf("Demostrating \x41 Using \\xhh Escape Sequence\n\n"); //0x41 is the Hexadecimal code for letter 'a'. 'xhh' is the place-holder for 'x' Followed by 2 digit (hh), altogether formating Hexadecimal number
	printf("Demostrating \102 using \\ooo Escap Sequence\n\n");

	return(0);

}
