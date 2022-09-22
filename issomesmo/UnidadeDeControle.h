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

void ADD(int destino, int origem1, int origem2);
void SUB(int destino, int origem1, int origem2);
void MULT(int origem1, int origem2);
void DIV(int origem1, int origem2);
void J(int imediato);
void BNE(int origem1, int origem2, imediato);
void BEQ(int origem1, int origem2, imediato);
void LW(int destino, int imediato);
void SW(int destino, int imediato);

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
