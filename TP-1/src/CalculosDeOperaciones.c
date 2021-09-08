/*
 * CalculosDeOperaciones.c
 *
 *  Created on: 7 sep. 2021
 *      Author: Milciades Gonzalez
 */
#include "CalculosDeOperaciones.h"

int Suma(int operador1, int operador2){
    int resultado;

    resultado = operador1 + operador2;

    return resultado;
}
int Resta(int operador1, int operador2){
    int resultado;

    resultado = operador1 - operador2;

    return resultado;
}
float Division(int operador1, int operador2){
    float resultado;

    if(operador1 < 1 || operador2 < 1){
    	printf("\nNo se puede ejecutar una división con un operando menor a 1.");
    	resultado = 0;
    }else{
    	resultado = (float)operador1 / operador2;
    }
    return resultado;
}
int Multiplicacion(int operador1, int operador2){
    int resultado;

    resultado = operador1 * operador2;

    return resultado;
}
int Factorial(int operador1){

	int resultado = 1;

	for(int i = 1; i <= operador1; i++){

		resultado = resultado * i;
	}

    return resultado;
}

