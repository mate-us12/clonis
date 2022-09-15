
#include <iostream>
using namespace std;


class UnidadeDeControle{
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
