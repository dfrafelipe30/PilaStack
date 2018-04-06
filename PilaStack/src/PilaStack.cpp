//============================================================================
// Name        : PilaStack.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "clase_pila_stack.h"
#include <iostream>
using namespace std;

int main() {
	Pila arreglo;
	cout << "bien"<< endl ;

	for (int i = 0;i < 30;i++)
	{
		arreglo.Push('A'+ i);
	}

	cout <<"---------------"<< endl;

	for(int j = 0; j < 30;j++)
	{
		cout << arreglo.Pop() << endl ;
	}
	cout << endl;

}
