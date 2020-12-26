// OPERADORES DE BIT 
// MANEJO DEL SINCRONISMO DE UNA PLACA

#include <stdio.h>
#include <stdlib.h>
#define S 0X80
#define MASK 0X7F
#define N 10
#define PORT 0X400

void IMPRIBIN (char);
unsigned char LEEB (int);

int main()
{
	unsigned char DATO;
	int SUMA = 0, i;
	
	for (i=0; i<N; i++)
	{
		do {
			DATO = LEEB(PORT);
			printf("%8d \t", (DATO & S) >> 7);
			IMPRIBIN (DATO);
			getchar();
		} while ( !(DATO & S) ); 
		// recibido S = 1
		
		printf("\n DATO VALIDO = %d \n", DATO & MASK);
		getchar();
		SUMA = SUMA + DATO & MASK;
		
		do {
			DATO = LEEB(PORT);
			printf("%8d \t", (DATO & S) >> 7);
			IMPRIBIN (DATO);
			getchar();
		} while ( (DATO & S) ); 
		// recibido S = 0
	}
	
	printf("\n\n\n PROMEDIO = %.2f \n", (float)SUMA / N);
	
	getchar();
	printf("\n\n\n\n");
	return 0;
}

void IMPRIBIN (char A)
{
	unsigned char M;
	M = 0X80;

	while (M)
	{
		printf(" %d", (A & M)!= 0);
		M = M >> 1;
	}
}

unsigned char LEEB (int P)
{
	unsigned char D;
	D = rand() % 256;
	
	if ( (rand()%100) > 4)
		D = D & ~S;	
		
	return D;
}





