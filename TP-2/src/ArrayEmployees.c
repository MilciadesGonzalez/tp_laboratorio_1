/*
 * ArrayEmployees.c
 *
 *  Created on: 3 oct. 2021
 *      Author: Milciades Gonzalez
 */
#include "ArrayEmployees.h"
#include "inputs.h"

#define TRUE 0
#define FALSE 1

int initEmployees(Employee* list, int len)
{
	int flag;
	flag = -1;
	for(int i=0; i<len; i++)
	{
		list[i].isEmpty=TRUE;
//		list[i].id=0;
//		list[i].salary=0;
//		list[i].sector=0;
//		strcpy(list[i].lastName,"");
//		strcpy(list[i].name,"");
		flag = 0;
	}
	return flag;
}

int addEmployee(Employee* list, int len, int id)
{
	int flag;
	int opSector;
	flag = -1;
	for(int i=0; i<len; i++)
	{
		if(list[i].isEmpty==TRUE)
		{
			list[i].id = id;
			getString("Ingrese Nombre del empleado: ", list[i].name);
			getString("Ingrese Apellido del empleado: ", list[i].lastName);
			list[i].salary = getFloat("Ingrese salario del empleado: ");
			printf("\nSelecione sector:\n");
			opSector = menuSector();
			list[i].sector = opSector;
 			list[i].isEmpty = FALSE;
 			printf("\nEmpleado agregado correctamente.\n");
 			flag = 0;
			break;
		}
	}
	return flag;
}

int findEmployeeById(Employee* list, int len,int id)
{
	int flag;
	flag = -1;
	for(int i=0; i<len; i++)
	{
		if(list[i].isEmpty==FALSE && list[i].id==id)
		{
			flag = 0;
		}
	}
	return flag;
}

int removeEmployee(Employee* list, int len)
{
	int flag;
	int id;
	flag = -1;

	if(validarEjecucion(list, len)==0)
	{
		printEmployees(list, len);
		id = getInt("Ingrese id del empleado a eliminar: ");

		for(int i=0; i<len; i++)
		{
			if(list[i].isEmpty==FALSE && list[i].id==id)
			{
				list[i].isEmpty = TRUE;
				printf("\nEmpleado eliminado correctamente.\n");
				flag = 0;
				break;
			}
		}
	}
	return flag;
}

int sortEmployees(Employee* list, int len)
{
	int flag;
	Employee aux;
	flag = -1;

	for(int i=0; i<len-1; i++)
	{
		for(int j=i+1; j<len; j++)
		{
			if(strcmp(list[i].lastName, list[j].lastName)>0)
			{
				aux = list[i];
				list[i] = list[j];
				list[j] = aux;
				flag = 0;
			}
		}
	}

	return flag;
}

int printEmployees(Employee* list, int length)
{
	int flag;
	flag = -1;
	printf("ID \t Nombre \t Apellido \t Salario \t Sector\n");
	for(int i=0; i<length; i++)
	{
		if(list[i].isEmpty == FALSE)
		{
			validarSector(list, length);
			mostrarUnEmpleado(list[i]);
			flag = 0;
		}
	}
	return flag;
}
int modificarEmpleado(Employee* list, int len)
{
	int flag;
	int id;
	int opMod;
	int op;
	flag = -1;

	if(validarEjecucion(list, len)==0)
	{
		printf("\nSelecione opcion a modificar:\n");
		opMod = menuModificar();

		printEmployees(list, len);
		id = getInt("\nIngrese id del empleado a modificar: ");
		for(int i=0; i<len; i++)
		{
			if(list[i].isEmpty==FALSE && list[i].id==id)
			{
				switch (opMod)
				{
					case 1:
							getString("Ingrese nuevo Nombre: ", list[i].name);
					break;
					case 2:
							getString("Ingrese Apellido del empleado: ", list[i].lastName);
					break;
					case 3:
							list[i].salary = getFloat("Ingrese salario del empleado: ");
					break;
					case 4:
							printf("\nSelecione sector:\n");
							op = menuSector();
							list[i].sector = op;
					break;
				}
				printf("\nEmpleado modificado correctamente.\n");
				flag = 0;
				break;
			}
		}
	}
	return flag;
}
void mostrarUnEmpleado(Employee unEmpleado)
{
	printf("%-8d %-15s %-15s %-8.2f \t %-15s\n", unEmpleado.id,
										   unEmpleado.name,
										   unEmpleado.lastName,
										   unEmpleado.salary,
										   unEmpleado.descripcionSector);
}
int validarSector(Employee* list, int len)
{
	int flag;
	flag = -1;

	for(int i=0; i<len; i++)
	{
		if(list[i].sector==1)
		{
			strcpy(list[i].descripcionSector, "Administración");
			flag = 0;
		}
		else if(list[i].sector==2)
		{
			strcpy(list[i].descripcionSector, "Expedición");
			flag = 0;
		}
		else if(list[i].sector==3)
		{
			strcpy(list[i].descripcionSector, "Maestranza");
			flag = 0;
		}
		else if(list[i].sector==4)
		{
			strcpy(list[i].descripcionSector, "Otro");
			flag = 0;
		}
	}
	return flag;
}
int calculos(Employee* list, int len, float* promedio, float* acumulador)
{
	int flag;
	int contador = 0;
	int acum = 0;
	flag = -1;

	for(int i=0; i<len; i++)
	{
		if(list[i].isEmpty==FALSE)
		{
			acum += list[i].salary;
			contador++;
			flag = 0;
		}
	}
	*acumulador = acum;
	*promedio = (float)acum / contador;

	return flag;
}
int salariosMayorPromedio(Employee* list, int len, float promedio)
{
	int flag;
	flag = -1;

	printf("ID \t Nombre \t Apellido \t Salario \t Sector\n");
	for(int i=0; i<len-1; i++)
	{
		for(int j=i+1; j<len; j++)
		{
			if(list[i].isEmpty==FALSE && list[i].salary>promedio)
			{
				validarSector(list, len);
				mostrarUnEmpleado(list[i]);
				flag = 0;
				break;
			}
		}
	}

	return flag;
}
int validarEjecucion(Employee* list, int len)
{
	int flag;
	flag = -1;

	for(int i=0; i<len; i++)
	{
		if(list[i].isEmpty==FALSE)
		{
			flag = 0;
		}
	}

	return flag;
}
void harcodearEmpleado(Employee lista[], int id, char nombre[], char apellido[], float salario, int sector)
{

		lista[id].isEmpty = 1;
		lista[id].id = id;
		strcpy(lista[id].name, nombre);
		strcpy(lista[id].lastName, apellido);
		lista[id].salary = salario;
		lista[id].sector = sector;
}
