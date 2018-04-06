/*
 * clase_pila_stack.h
 *
 *  Created on: 5 abr. 2018
 *      Author: Daniel
 */

#ifndef CLASE_PILA_STACK_H_
#define CLASE_PILA_STACK_H_

class Pila{
private:
	char *arreglo[] ;
	int contador;
	int capacidad;
public:

	Pila();
	~Pila();
	Pila Pop();
	void Push(char k);
	int size();
	bool isEmpty();
	void clear ();
	void expandir();
};



#endif /* CLASE_PILA_STACK_H_ */
