#include "UnidadeDeControle.h"
#include<iostream>
#include<string>
using namespace std;

int main(){
//int opcode, int origem1, int origem2, int destino, int imediato, int funcao

	int i = 0;
	Instrucao* temp[10];

	temp[0] = new Instrucao*(0, 0, 0, 8, 0, LW);
	temp[1] = new Instrucao*(0, 0, 0, 9, 1, LW);
	temp[2] = new Instrucao*(0, 0, 0, 10, 2, LW);
	temp[3] = new Instrucao*(0, 9, 10, 0, 7, BNE);
	temp[4] = new Instrucao*(0, 8, 10, 0, 0, MULT);
	temp[5] = new Instrucao*(0, 0, 0, 24, 3, SW);
	temp[6] = new Instrucao*(0, 0, 0, 0, 0, J);
	temp[7] = new Instrucao*(0, 10, 8, 8, 0, ADD);
	temp[8] = new Instrucao*(0, 0, 0, 9, 3, SW);
	temp[9] = new Instrucao*(0, 0, 0, 0, 10, J);

	while (i = 0){
		memI->escrever(i, temp[i]);
		delete temp[i];
		i++;
	}
	

	BancoDeRegistradores* ban();
	MemoriaDeInstrucoes* memI(16);
	MemoriaDeDados* memD(16);

	UnidadeDeControle(ban, memI, memD);

	memI->escrever(0, );

	return 0;
}
