#include <iostream>
using namespace std;

class MemoriaDeInstrucoes{
public:

MemoriaDeInstrucoes(int tamanho);
virtual ~MemoriaDeInstrucoes();
int getTamanho();
Instrucao* ler(int posicao);
bool escrever(int posicao, Instrucao* d);

};
