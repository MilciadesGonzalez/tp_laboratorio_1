/*
 * ArrayEmployees.h
 *
 *  Created on: 3 oct. 2021
 *      Author: Milciades Gonzalez
 */

#ifndef ARRAYEMPLOYEES_H_
#define ARRAYEMPLOYEES_H_
#include <stdio.h>
#include <string.h>

struct
{
	int id;
	char name[51];
	char lastName[51];
	float salary;
	int sector;
	char descripcionSector[51];
	int isEmpty;
}typedef Employee;

/** \brief To indicate that all position in the array are empty,
* this function put the flag (isEmpty) in TRUE in all
* position of the array
* \param list Employee* Pointer to array of employees
* \param len int Array length
* \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
*
*/
int initEmployees(Employee* list, int len);

/** \brief add in a existing list of employees the values received as parameters
* in the first empty position
* \param list employee*
* \param len int
* \param id int
* \param name[] char
* \param lastName[] char
* \param salary float
* \param sector int
* \return int Return (-1) if Error [Invalid length or NULL pointer or without
free space] - (0) if Ok
*
*/
int addEmployee(Employee* list, int len, int);

/** \brief find an Employee by Id en returns the index position in array.
*
* \param list Employee*
* \param len int
* \param id int
* \return Return employee index position or (-1) if [Invalid length or NULL
pointer received or employee not found]
*
*/
int findEmployeeById(Employee* list, int len,int id);

/** \brief Remove a Employee by Id (put isEmpty Flag in 1)
*
* \param list Employee*
* \param len int
* \param id int
* \return int Return (-1) if Error [Invalid length or NULL pointer or if can't
find a employee] - (0) if Ok
*
*/
int removeEmployee(Employee* list, int len);

/** \brief Sort the elements in the array of employees, the argument order
indicate UP or DOWN order
*
* \param list Employee*
* \param len int
* \param order int [1] indicate UP - [0] indicate DOWN
* \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
*
*/
int sortEmployees(Employee* list, int len);

/** \brief print the content of employees array
*
* \param list Employee*
* \param length int
* \return int
*
*/
int printEmployees(Employee* list, int length);

/// @fn void mostrarUnEmpleado(Employee)
/// @brief Recibe lista de empleado y muestra un elemento.
/// @param list
void mostrarUnEmpleado(Employee list);

/// @fn int validarArray(Employee*, int)
/// @brief Recibe lista de empleados y validapor descripcion de sector.
/// @param list
/// @param len
/// @return Retorna 0 si se pudo o -1 caso contrario.
int validarArray(Employee* list, int len);

/// @fn int subMenus()
/// @brief Muestra menu de descripcion de sector.
/// @return Retorna 0 si se pudo o -1 caso contrario.
int subMenus();

/// @fn int modificarEmpleado(Employee*, int)
/// @brief Recibe lista de empleados y ejecuta la modificacion desus campos.
/// @param list
/// @param len
/// @return Retorna 0 si se pudo o -1 caso contrario.
int modificarEmpleado(Employee* list, int len);

/// @fn int validarSector(Employee*, int)
/// @brief Recibe lista de empleados y valida el sector.
/// @param list
/// @param len
/// @return Retorna 0 si se pudo o -1 caso contrario.
int validarSector(Employee* list, int len);

/// @fn int calculos(Employee*, int, float*, float*)
/// @brief Recibe lista de empleados ejecuta la suma de  los salarios, el promedio y lo retorna por punteros.
/// @param list
/// @param len
/// @param promedio
/// @param acumulador
/// @return Retorna 0 si se pudo o -1 caso contrario.
int calculos(Employee* list, int len, float* promedio, float* acumulador);

/// @fn int salariosMayorPromedio(Employee*, int, float)
/// @brief Recibe lista de empleados y promedio de salarios. busca los salarios que superen el promedio y lo imprime.
/// @param list
/// @param len
/// @param promedio
/// @return Retorna 0 si se pudo o -1 caso contrario.
int salariosMayorPromedio(Employee* list, int len, float promedio);

/// @fn int validarEjecucion(Employee*, int)
/// @brief
/// @param list
/// @param len
/// @return
int validarEjecucion(Employee* list, int len);

/// @fn void harcodearEmpleado(Employee[], int, char[], char[], float, int)
/// @brief
/// @param lista
/// @param id
/// @param nombre
/// @param apellido
/// @param salario
/// @param sector
void harcodearEmpleado(Employee lista[], int id, char nombre[], char apellido[], float salario, int sector);

#endif /* ARRAYEMPLOYEES_H_ */
