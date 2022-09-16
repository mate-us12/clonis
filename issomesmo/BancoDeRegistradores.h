
#ifndef QUANTIDADE_REGISTRADORES
#define QUANTIDADE_REGISTRADORES 32

#include<iostream>

using namespace std;

class BancoDeRegistradores{

private:
	int registradores[QUANTIDADE_REGISTRADORES];

public:

	BancoDeRegistradores();
	virtual ~BancoDeRegistradores();
	int getValor(int registrador);
	void setValor(int registrador, int valor);
	void imprimir();
};

#endif
