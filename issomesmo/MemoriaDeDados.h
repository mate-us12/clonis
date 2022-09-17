#include "Dado.h"
#include <iostream>
using namespace std;

class MemoriaDeDados{
private:

	Dado** mem = NULL;
	int tamanho = 0;

public:

	MemoriaDeDados(int tamanho);
	virtual ~MemoriaDeDados();
	int getTamanho();
	Dado* ler(int posicao);
	bool escrever(int posicao, Dado* d);
	void imprimir();

};
