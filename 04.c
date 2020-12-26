// OPERADORES DE BIT - MOSTRAR UN BIT EN BINARIO
// la funcion imprime el valor logico
#include <stdio.h>
#include <stdlib.h>

void IMPRIBIN (char);

int main()
{
	char BYTE;
	
	printf("\n\n\t\t VALOR = ");
	scanf("%d", &BYTE);
	
	printf("\n\n\n VALOR = %8d \t %02X \t\t", BYTE, (unsigned char)BYTE);
	
	IMPRIBIN(BYTE);
	
	getchar();
	printf("\n\n\n\n");
	return 0;
}

void IMPRIBIN (char A)
{
	unsigned char MASK;
	MASK = 0X80;

	while (MASK)
	{
		printf(" %d", (A & MASK)!= 0);
		MASK = MASK >> 1;
	}
}





