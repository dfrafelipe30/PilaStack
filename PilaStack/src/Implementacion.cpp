/*
 * Implementacion.cpp
 *
 *  Created on: 5 abr. 2018
 *      Author: Daniel
 */


#include "clase_pila_stack.h"
#include <iostream>
using namespace std;

const int CAPACIDAD_INICIAL = 30;

Pila::Pila()
{
	arreglo = new char[CAPACIDAD_INICIAL];
	capacidad = CAPACIDAD_INICIAL;
	contador = 0;
}
Pila::~Pila()
{
	delete[] arreglo;
}
void Pila::Push(char k)
{
	if(contador == capacidad)
	{
		expandir();
	}
	arreglo[contador++]= k;
}

Pila Pila::Pop()
{
	if(isEmpty)
	{
		"error ya que intenta abrir una pila vacia";
	}
	return arreglo [--contador];
}
int Pila::size()
{
	return contador;
}
bool Pila::isEmpty ()
{
	return contador == 0;
}
void Pila::clear ()
{
	contador = 0;
}
void Pila::expandir()
{
	char *NuevoArreglo = arreglo;
	capacidad *= 2 ;
	arreglo = new char[capacidad];
	for (int i = 0 ; i < contador ; i++)
	{
		arreglo[i] = NuevoArreglo[i];
	}
	delete NuevoArreglo;
}
