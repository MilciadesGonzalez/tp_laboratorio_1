/*
 ============================================================================
 Name        : TP-1.c
 Author      : Milciades Gonzalez
 ============================================================================
 */

#include <stdlib.h>

#include "MiBiblioteca.h"
#define REP 5

int main(void) {
	setbuf(stdout, NULL);

		int opcion;
		int operador1;
		int operador2;

		int suma;
		int resta;
		float division;
		int multiplicacion;
		int factorial1;
		int factorial2;

		operador1 = 0;
		operador2 = 0;

		do
		{
			opcion = MenuOpciones(opcion, operador1, operador2);

			switch (opcion)
			{
				case 1:
					operador1 = IngresoNumero1(operador1);
					printf("\n");
				break;
				case 2:
					operador2 = IngresoNumero2(operador2);
					printf("\n");
				break;
				case 3:
					MenuCalculos(operador1, operador2);
					Calculos(operador1, operador2, &suma, &resta, &division, &multiplicacion, &factorial1, &factorial2);
					printf("\n");
				break;
				case 4:
					Mostrar(operador1, operador2, suma, resta, division, multiplicacion, factorial1, factorial2);
					printf("\n");
				break;
				case 5:
					printf("\nGracias por utilizar la app.");
					printf("\n");
				break;
				default:
					printf("\nOpcion invalida.");
					printf("\n");
					printf("\n");
			}
		} while (opcion != REP);

		return 0;
}
