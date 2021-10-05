/*
 ============================================================================
 Name        : TP-2.c
 Author      : Milciades Gonzalez Fernandez
 Version     :

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayEmployees.h"
#include "Biblioteca.h"

#define LEN 3

int main(void) {
	setbuf(stdout,NULL);

	int opcion;
	Employee nominaEmpleados[LEN];
	int contId = 0;

	if(initEmployees(nominaEmpleados, LEN)==-1)
	{
		printf("Error al inicializar array.");
	}

	do{
		opcion = MenuPrincipal();

		switch (opcion) {
			case 1:
					contId++;
					if(addEmployee(nominaEmpleados, LEN, contId)==-1)
					{
						printf("La lista ya está completa.\n");
					}
					printf("\n");
			break;
			case 2:
					if(validarArray(nominaEmpleados, LEN)==0)
					{

					}
					else
					{
						printf("No hay datos para modificar, debe ingresar al menos un empleado.\n");
					}
					printf("\n");
			break;
			case 3:
					if(validarArray(nominaEmpleados, LEN)==0)
					{

					}
					else
					{
						printf("No hay datos para eliminar, debe ingresar al menos un empleado.\n");
					}
					printf("\n");
			break;
			case 4:
				if(validarArray(nominaEmpleados, LEN)==0)
				{
					printEmployees(nominaEmpleados, LEN);
				}
				else
				{
					printf("No hay datos para mostrar, debe ingresar al menos un empleado.\n");
				}
					printf("\n");
			break;
			case 5:
					printf("Gracias por utilizar la app.");
			break;
			default:
					printf("Opcion invalida.");
			break;
		}

	}while(opcion != 5);





	return EXIT_SUCCESS;
}
