#include "Instrucao.h"
#include <iostream>
using namespace std;

class MemoriaDeInstrucoes{

private:
	int tamanho = 0;
	Instrucao** mem = NULL;

public:

MemoriaDeInstrucoes(int tamanho);
virtual ~MemoriaDeInstrucoes();
int getTamanho();
Instrucao* ler(int posicao);
bool escrever(int posicao, Instrucao* d);

};
