/*
 * Biblioteca.h
 *
 *  Created on: 24 sep. 2021
 *      Author: Milciades Gonzalez
 */

#ifndef BIBLIOTECA_H_
#define BIBLIOTECA_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	int estado;
	int idProducto;
	char descripcion[50];
	int nacionalidad;
	int tipo;
	float precio;
}eProducto;

int MenuPrincipal();
void Inicializar(eProducto listaProductos[], int tam);
int pedirEntero(char msje[]);
int CargarProducto(eProducto listaProductos[], int tam);
float pedirFlotante(char msje[]);
void getString(char mensaje[],char cadena[],int tam);
void mostrarUnProducto(eProducto unProducto);
void mostrarProductos(eProducto listaProducto[], int tam);
int bajaProducto(eProducto listaProductos[], int tam);
int modificacionProducto(eProducto listaProductos[], int tam, int opcion);
int ordenarPorPrecio(eProducto listaProducto[], int tam);
int ordenarPorDescripcion(eProducto listaProducto[], int tam);
int subMenu();
int productoMayorPrecio(eProducto listaProductos[], int tam, float* precioMayor);
int mostrarProductoPorPrecio(eProducto listaProductos[], int tam, float precio);

#endif /* BIBLIOTECA_H_ */
