#include "Dado.h"
#include <iostream>

using namespace std;

Dado::Dado(int valor){
	this->valor = valor;
}

Dado::~Dado(){
	cout << "Dado Destruido" << endl;
}

int Dado::getValor(){
	return this->valor;
}

void Dado::imprimir(){
	cout << this->valor;
}



//Ver melhor essa treta do destructor
