#include "Dado.h"
#include <iostream>
using namespace std;

class MemoriaDeInstrucoes{

private:
	Dado* mem = NULL;
	int tamanho = 0;

public:

MemoriaDeInstrucoes(int tamanho);
virtual ~MemoriaDeInstrucoes();
int getTamanho();
Instrucao* ler(int posicao);
bool escrever(int posicao, Instrucao* d);

};
