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
	int opcionSubMenu;
	Employee nominaEmpleados[LEN];
	int contId = 0;
	int id;

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
						printEmployees(nominaEmpleados, LEN);
						id = pedirEntero("Ingrese ID del empleado a modificar: ");
						if(findEmployeeById(nominaEmpleados, LEN, id)==0)
						{
							opcionSubMenu = subMenus();
							if(modificarEmpleado(nominaEmpleados, LEN, opcionSubMenu, id)==-1)
							{
								printf("No se modificó empleado.\n");
							}
						}
						else
						{
							printf("No se encontró empleado.\n");
						}
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
						printEmployees(nominaEmpleados, LEN);
						id = pedirEntero("Ingrese ID del empleado a eliminar: ");
						if(findEmployeeById(nominaEmpleados, LEN, id)==0)
						{
							if(removeEmployee(nominaEmpleados, LEN, id)==0)
							{
								printf("Empleado eliminado exitosamente.\n");
							}
							else
							{
								printf("No se eliminó empleado.\n");
							}
						}
						else
						{
							printf("No se encontró empleado.\n");
						}
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
					printf("Opcion invalida.\n");
					printf("\n");
			break;
		}

	}while(opcion != 5);





	return EXIT_SUCCESS;
}
