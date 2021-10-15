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
#include "inputs.h"

#define LEN 1000

int main(void) {
	setbuf(stdout,NULL);

	int opcion;
	int opcionInforme;
	float sumaSalarios;
	float promedio;
	Employee nominaEmpleados[LEN];
	int contId = 0;

	if(initEmployees(nominaEmpleados, LEN)==-1)
	{
		printf("Error al inicializar array.");
	}

	harcodearEmpleado(nominaEmpleados, 1, "milciades", "gonzalez", 100, 1);
	harcodearEmpleado(nominaEmpleados, 2, "daiana", "arias", 50, 4);
	harcodearEmpleado(nominaEmpleados, 3, "pepe", "aguilar", 50, 2);

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
					if(modificarEmpleado(nominaEmpleados, LEN)==-1)
					{
						printf("No se encontró empleado para modificar.\n");
					}
					printf("\n");
			break;
			case 3:
					if(removeEmployee(nominaEmpleados, LEN)==-1)
					{
						printf("No se encontró empleado para eliminar.\n");
					}
					printf("\n");
			break;
			case 4:
					if(validarEjecucion(nominaEmpleados, LEN)==0)
					{
						opcionInforme = menuInformar();
						if(opcionInforme==1)
						{
							sortEmployees(nominaEmpleados, LEN);
							printEmployees(nominaEmpleados, LEN);
						}
						else if(opcionInforme==2)
											{
							calculos(nominaEmpleados, LEN, &promedio, &sumaSalarios);
							printf("El total de los salarios es: %.2f\n", sumaSalarios);
							printf("El promedio de los salarios es: %.2f\n", promedio);
							printf("Los empleados con salarios mayores al promedio son:\n");
							salariosMayorPromedio(nominaEmpleados, LEN, promedio);
						}
					}
					else
					{
						printf("No hay reportes para mostrar.\n");
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
