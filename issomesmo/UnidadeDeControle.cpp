#include "UnidadeDeControle.h"

#include <iostream>
using namespace std;

UnidadeDeControle::UnidadeDeControle(BancoDeRegistradores* registradores,
MemoriaDeInstrucoes* instrucoes, MemoriaDeDados* dados){
	this->registradores = registradores;
        this->dados = dados;
	this->instrucoes = instrucoes;	

	PC = 0;
}

UnidadeDeControle::~UnidadeDeControle(){
	delete this->registradores;
        delete this->dados;
	delete this->instrucoes;
}

BancoDeRegistradores* UnidadeDeControle::getBancoDeRegistradores(){
	return this->registradores;
}

MemoriaDeDados* UnidadeDeControle::getMemoriaDeDados(){
	return this->dados;
}

MemoriaDeInstrucoes* UnidadeDeControle::getMemoriaDeInstrucoes(){
	return this->instrucoes;
}

int UnidadeDeControle::getPC(){
	return this->PC;
}

void UnidadeDeControle::setPC(int PC){
	this->PC = PC;
}
void UnidadeDeControle::executarInstrucao(){
	
}
