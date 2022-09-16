#include <iostream>
using namespace std;



#ifndef TIPO_R
#ifndef FUNCAO_ADD 
#ifndef FUNCAO_SUB 
#ifndef FUNCAO_MULT 
#ifndef FUNCAO_DIV 
#ifndef J 
#ifndef BNE 
#ifndef BEQ 
#ifndef LW 
#ifndef SW 

#define TIPO_R 0
#define FUNCAO_ADD 32
#define FUNCAO_SUB 34
#define FUNCAO_MULT 24
#define FUNCAO_DIV 26
#define J 2
#define BNE 5
#define BEQ 4
#define LW 35
#define SW 43


class Instrucao{
private:

	int opcode;
       	int origem1;
       	int origem2;
       	int destino;
       	int imediato;
	int funcao;

public:

	Instrucao(int opcode, int origem1, int origem2, int destino, int imediato,
int funcao);
	virtual ~Instrucao();
	int getOpcode();
	int getOrigem1();
	int getOrigem2();
	int getDestino();
	int getImediato();
	int getFuncao();
};


#endif
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#endif
