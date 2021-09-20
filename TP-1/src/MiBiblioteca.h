/*
 * MiBiblioteca.h
 *
 *  Created on: 7 sep. 2021
 *      Author: Milciades Gonzalez
 */

#ifndef MIBIBLIOTECA_H_
#define MIBIBLIOTECA_H_
#include <stdio.h>

/// \fn int MenuOpciones(int, int, int)
/// \brief Muestra menu de opciones principales, solicita ingresar opcion.
/// \param opcion
/// \param op1
/// \param op2
/// \return Retorna opcion ingresada.
int MenuOpciones(int opcion, int op1, int op2);

/// \fn int IngresoNumero1(int)
/// \brief Solicita el ingreso del primer operando.
/// \param num1
/// \return Retorna el numero ingresado.
int IngresoNumero1(int num1);

/// \fn int IngresoNumero2(int)
/// \brief Solicita el ingreso del segundo operando.
/// \param num2
/// \return Retorna el numero ingresado.
int IngresoNumero2(int num2);

/// \fn void Calculos(int, int, int*, int*, float*, int*, int*, int*)
/// \brief Recibe los 2 operando y genera los todos los calculos, los guarda mediante pasaje de valor por referencia.
/// \param op1
/// \param op2
/// \param suma
/// \param resta
/// \param div
/// \param mult
/// \param fact1
/// \param fact2
void Calculos(int op1, int op2, int* suma, int* resta, float* div, int* mult, int* fact1, int* fact2);

/// \fn void MenuCalculos(int, int)
/// \brief Recibe los 2 operando y los muestra en el menu interno de la opcion 3 del menu principal.
/// \param op1
/// \param op2
void MenuCalculos(int op1, int op2);

/// \fn void Mostrar(int, int, int, int, float, int, int, int)
/// \brief Recibe los 2 operando y los muestra en el menu interno de la opcion 4 del menu principal.
/// \param op1
/// \param op2
/// \param suma
/// \param resta
/// \param div
/// \param mult
/// \param fact1
/// \param fact2
void Mostrar(int op1, int op2, int suma, int resta, float div, int mult, int fact1, int fact2);

#endif /* MIBIBLIOTECA_H_ */
