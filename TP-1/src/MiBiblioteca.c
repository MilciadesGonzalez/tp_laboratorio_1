/*
 * MiBiblioteca.c
 *
 *  Created on: 7 sep. 2021
 *      Author: Milciades Gonzalez
 */
#include "MiBiblioteca.h"

int MenuOpciones(int opcion, int op1, int op2){

	printf("1. Ingresar 1er operando A = %d\n", op1);
	printf("2. Ingresar 2do operando B = %d\n", op2);
	printf("3. Calcular todas las operaciones.\n");
	printf("4. Resultados\n");
	printf("5. Salir\n");
	printf("\nElija una opción: ");
	scanf("%d", &opcion);

	return opcion;
}
int IngresoNumero1(int num1){
	printf("\nIngrese 1er operando: ");
	scanf("%d", &num1);

	return num1;
}
int IngresoNumero2(int num2){
	printf("\nIngrese 2do operando: ");
	scanf("%d", &num2);

	return num2;
}
void MenuCalculos(int op1, int op2){
	printf("\na) Calcular la suma de (%d+%d)", op1, op2);
	printf("\nb) Calcular la resta de (%d-%d)", op1, op2);
	if(op1==0 || op2==0){
		printf("\nNo es posible dividir por cero");
	}else{
		printf("\nc) Calcular la division de (%d/%d)", op1, op2);
	}
	if(op1==0 || op2==0){
		printf("\nNo es posible multiplicar por cero");
	}else{
		printf("\nd) Calcular la multiplicacion de (%d*%d)", op1, op2);
	}
	printf("\ne) Calcular el factorial de (!%d) y de (!%d)", op1, op2);
	printf("\n");

}
void Calculos(int op1, int op2, int* suma, int* resta, float* div, int* mult, int* fact1, int* fact2){

	int res1 = 1;
	int res2 = 1;

	*suma = op1 + op2;
	*resta = op1 - op2;
	*div = (float)op1 / op2;
	*mult = op1 * op2;

	for(int i=1; i<=op1; i++){
		res1 = res1 * i;
	}
	*fact1 = res1;
	for(int i=1; i<=op2; i++){
		res2 = res2 * i;
	}
	*fact2 = res2;
}
void Mostrar(int op1, int op2, int suma, int resta, float div, int mult, int fact1, int fact2){

	printf("\na) El resultado de (%d+%d) es: %d", op1, op2, suma);
	printf("\nb) El resultado de (%d-%d) es: %d", op1, op2, resta);
	printf("\nc) El resultado de (%d/%d) es: %.2f", op1, op2, div);
	printf("\nd) El resultado de (%d*%d) es: %d", op1, op2, mult);
	printf("\ne) El factorial de (!%d) es: %d y El factorial de (!%d) es: %d", op1, fact1, op2, fact2);
	printf("\n");
}
