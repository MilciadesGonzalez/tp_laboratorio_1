/*
 * CalculosDeOperaciones.h
 *
 *  Created on: 7 sep. 2021
 *      Author: Milciades Gonzalez
 */

#ifndef CALCULOSDEOPERACIONES_H_
#define CALCULOSDEOPERACIONES_H_
#include <stdio.h>

/// \fn int Suma(int, int)
/// \brief Recibe 2 variables ingresados por el usuario y ejecuta una suma.
/// \param operador1
/// \param operador2
/// \return retorna el resultado de la suma.
int Suma(int operador1, int operador2);

/// \fn int Resta(int, int)
/// \brief Recibe 2 variables ingresados por el usuario y ejecuta una resta.
/// \param operador1
/// \param operador2
/// \return retorna el resultado de la resta.
int Resta(int operador1, int operador2);

/// \fn int Division(int, int)
/// \brief Recibe 2 variables ingresados por el usuario y ejecuta una división.
/// \param operador1
/// \param operador2
/// \return retorna el resultado de la división.
float Division(int operador1, int operador2);

/// \fn int Multiplicacion(int, int)
/// \brief Recibe 2 variables ingresados por el usuario y ejecuta una multiplicación.
/// \param operador1
/// \param operador2
/// \return retorna el resultado de la multiplicación.
int Multiplicacion(int operador1, int operador2);

/// \fn int Factorial(int)
/// \brief Recibe 1er variable ingresado por el usuario y ejecuta el factorial.
/// \param operador1
/// \return retorna el resultado del factorial.
int Factorial(int operador1);

#endif /* CALCULOSDEOPERACIONES_H_ */
