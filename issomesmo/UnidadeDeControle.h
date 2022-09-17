#include "BancoDeRegistradores.h"
#include "MemoriaDeDados.h"
#include "MemoriaDeInstrucoes.h"

#include <iostream>
using namespace std;


class UnidadeDeControle{
private:

BancoDeRegistradores* registradores;
MemoriaDeDados*       dados;
MemoriaDeInstrucoes*  instrucoes;
int PC;

public:

UnidadeDeControle(BancoDeRegistradores* registradores,
MemoriaDeInstrucoes* instrucoes, MemoriaDeDados* dados);
virtual ~UnidadeDeControle();
BancoDeRegistradores* getBancoDeRegistradores();
MemoriaDeDados* getMemoriaDeDados();
MemoriaDeInstrucoes* getMemoriaDeInstrucoes();
int getPC();
void setPC(int pc);
void executarInstrucao();

};
