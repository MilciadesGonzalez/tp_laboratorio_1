/*
 * ArrayEmployees.c
 *
 *  Created on: 3 oct. 2021
 *      Author: Milciades Gonzalez
 */
#include "ArrayEmployees.h"
#include "Biblioteca.h"

#define TRUE 0
#define FALSE 1

int initEmployees(Employee* list, int len)
{
	int flag;
	flag = -1;
	for(int i=0; i<len; i++)
	{
		list[i].isEmpty=TRUE;
		list[i].id=0;
		list[i].salary=0;
		list[i].sector=0;
		strcpy(list[i].lastName,"");
		strcpy(list[i].name,"");
		flag = 0;
	}
	return flag;
}

int addEmployee(Employee* list, int len, int cont)//, int id, char name[],char
//lastName[],float salary,int sector)
{
	int flag;
	flag = -1;
	for(int i=0; i<len; i++)
	{
		if(list[i].isEmpty==TRUE)
		{
			list[i].id = cont;
			getString("Ingrese Nombre del empleado: ", list[i].name, 51);
			getString("Ingrese Apellido del empleado: ", list[i].lastName, 51);
			list[i].salary = pedirFlotante("Ingrese salario del empleado: ");
			list[i].sector = pedirEntero("Ingrese sector del empleado: ");
 			list[i].isEmpty = FALSE;
 			flag = 0;
			break;
		}
	}
	return flag;
}

int findEmployeeById(Employee* list, int len,int id)
{
	int retorno;
	retorno = -1;
	for(int i=0; i<len; i++)
	{
		if(list[i].isEmpty==FALSE && list[i].id==id)
		{
			retorno = 0;
		}
	}
	return retorno;
}

int removeEmployee(Employee* list, int len, int id)
{
	int flag;
	flag = -1;
	for(int i=0; i<len; i++)
	{
		if(list[i].id==id)
		{
			initEmployees(list, len);
			flag = 0;
		}
	}
	return flag;
}

int sortEmployees(Employee* list, int len, int order)
{
	return 0;
}

int printEmployees(Employee* list, int length)
{
	int flag;
	flag = -1;
	printf("ID \t Nombre \t Apellido \t Salario \t Sector\n");
	for(int i=0; i<length; i++)
	{
		if(list[i].id != 0)
		{
			mostrarUnEmpleado(list[i]);
			flag = 0;
		}
	}
	return flag;
}
void mostrarUnEmpleado(Employee list)
{
	printf("%-6d  %-15s  %-13s  %10.2f  %10d\n",list.id,list.name,list.lastName,list.salary,list.sector);
}
int validarArray(Employee* list, int len)
{
	int flag;
	flag = -1;
	for(int i=0; i<len; i++)
	{
		if(list[i].id != 0)
		{
			flag = 0;
		}
	}

	return flag;
}
int subMenus()
{
	int op;

	printf("1. Modificar Nombre.\n");
	printf("2. Modificar Apellido.\n");
	printf("3. Modificar Salario.\n");
	printf("4. Modificar Sector.\n");
	printf("\n");
	printf("Ingrese opcion: ");
	scanf("%d", &op);
	printf("\n");

	return op;
}
int modificarEmpleado(Employee* list, int len, int op, int opId)
{
	int flag;
	flag = -1;
	for(int i=0; i<len; i++)
	{
		if(list[i].id==opId)
		{
			switch (op)
			{
				case 1:
						getString("Ingrese nuevo nombre: ", list[i].name, 51);
				break;
				case 2:
						getString("Ingrese nuevo Apellido: ", list[i].lastName, 51);
				break;
				case 3:
						list[i].salary = pedirFlotante("Ingrese nuevo salario: ");
				break;
				case 4:
						list[i].sector = pedirEntero("Ingrese nuevo sector: ");
				break;
				default:
						printf("Opcion invalida.");
				break;
			}
			flag = 0;
		}
	}
	return flag;
}
