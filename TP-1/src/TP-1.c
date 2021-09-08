/*
 ============================================================================
 Name        : TP-1.c
 Author      : Milciades Gonzalez
 ============================================================================
 */

#include <stdlib.h>
#include "CalculosDeOperaciones.h"

int main(void) {
	setbuf(stdout, NULL);

		int opcion;
		int operador1;
		int operador2;
		int suma;
		int resta;
		float division;
		int multiplicacion;
		int factorial;

		do
		{
			printf("1. Ingresar 1er operando (A=x)\n");
			printf("2. Ingresar 2do operando (B=y)\n");
			printf("3. Calcular todas las operaciones.\n");
			printf("4. Resultados\n");
			printf("5. Salir\n");
			printf("\nElija una opción: ");
			scanf("%d", &opcion);

			while(opcion < 1 || opcion > 5){
				printf("\nOpción invalida. Elija una opción. ");
				scanf("%d", &opcion);
			}
			switch (opcion)
			{
				case 1:
					printf("\nA = ");
					scanf("%d", &operador1);
				//break;
				case 2:
					printf("B = ");
					scanf("%d", &operador2);
				//break;
				case 3:
				    printf("\na) Calcular la suma de: %d", operador1);
				    printf("+%d", operador2);
				    printf("\nb) Calcular la resta de %d", operador1);
				    printf("-%d", operador2);
				    printf("\nc) Calcular la division de %d", operador1);
				    printf("/%d", operador2);
				    printf("\nd) Calcular la multiplicacion de %d", operador1);
				    printf("*%d", operador2);
				    printf("\ne) Calcular el factorial de %d", operador1);
				    printf("!\n");
				    suma = Suma(operador1, operador2);
				    resta = Resta(operador1, operador2);
				    division = Division(operador1, operador2);
				    multiplicacion = Multiplicacion(operador1, operador2);
				    factorial = Factorial(operador1);
				//break;
				case 4:
				    printf("\na) El resultado de la suma: %d", suma);
				    printf("\nb) El resultado de la resta: %d", resta);
				    printf("\nc) El resultado de la división: %.2f", division);
				    printf("\nd) El resultado de la multiplicación: %d", multiplicacion);
				    printf("\ne) El resultado del factorial es: %d", factorial);
				    printf("\n\n");
				break;
			}
		} while (opcion != 5);

		return 0;
}
