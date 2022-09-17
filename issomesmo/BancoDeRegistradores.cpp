#include "BancoDeRegistradores.h"
#include <iostream>

using namespace std;

BancoDeRegistradores::BancoDeRegistradores(){
	int i = 0;
	while(i < QUANTIDADE_REGISTRADORES){
		this->registradores[i] = 0;
		i++;
	}
}

//não sei o que esse destructor precisa fazer!!! 
BancoDeRegistradores::~BancoDeRegistradores(){
	cout << "BancoDeRegistradores destruido" << endl;
}

int BancoDeRegistradores::getValor(int registrador){
		return this->registradores[registrador];
}

void BancoDeRegistradores::setValor(int registrador, int valor){
//	if (registrador == 0)
//		cout << "Erro: registrador 0 deve possuir o valor 0!" << endl;
//	else
	this->registradores[registrador] = valor;
}

void BancoDeRegistradores::imprimir(){
	int i = 0;
	while (i < QUANTIDADE_REGISTRADORES){
		cout << i << ": " << this->registradores[i] << endl;
	}
}
