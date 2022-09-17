#include "Instrucao.h"
#include <iostream>
using namespace std;

class MemoriaDeInstrucoes{

private:


public:

MemoriaDeInstrucoes(int tamanho);
virtual ~MemoriaDeInstrucoes();
int getTamanho();
Instrucao* ler(int posicao);
bool escrever(int posicao, Instrucao* d);

};
