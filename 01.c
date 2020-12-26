// OPERADORES DE BIT - COMPORTAMIENTO DE LOS OPERADORES

#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned char A, M;
	char		  B;
	unsigned char C;
	
	A = 0XA5;
	B = 0XA5;
	M = 0X0F;
	
	C = ~A;
	printf("\n\n\n A = %02X \t\t ~A = %02X", A, C);
	getchar();
	
	printf("\n\n\n A = %02X \t\t M = %02X \t\t A|M = %02X", A, M, A|M);
	getchar();
	
	printf("\n\n\n A = %02X \t\t M = %02X \t\t A&M = %02X", A, M, A&M);
	getchar();
	
	printf("\n\n\n A = %02X \t\t M = %02X \t\t A^M = %02X", A, M, A^M);
	getchar();
	
	//desplazamientos izquierda
	C = A<<1;
	printf("\n\n\n A = %02X \t\t A<<1 = %02X", A, C);
	getchar();
	
	C = A<<3;
	printf("\n\n\n A = %02X \t\t A<<3 = %02X", A, C);
	getchar();	
	
	//desplazamientos derecha
	C = A>>3;
	printf("\n\n\n A = %02X \t\t A>>3 = %02X", A, C);
	getchar();

	C = B>>3;
	printf("\n\n\n B = %02X \t\t A>>3 = %02X", B, C);
	getchar();
	
	return 0;
}
