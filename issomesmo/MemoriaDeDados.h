#include <iostream>
using namespace std;

class MemoriaDeDados{
public:

MemoriaDeDados(int tamanho);
virtual ~MemoriaDeDados();
int getTamanho();
Dado* ler(int posicao);
bool escrever(int posicao, Dado* d);
void imprimir();

};
