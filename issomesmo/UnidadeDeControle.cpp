#include "UnidadeDeControle.h"

#include <iostream>
using namespace std;

//---------------- constructors e destructors -----------------

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

//-------------------- getters e setters --------------------

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


//---------- executarInstrucao() ------------


void UnidadeDeControle::executarInstrucao(){
	switch(this->instrucoes->ler(PC)->getFuncao()){
		
//ADD
		case FUNCAO_ADD:
			ADD(this->instrucoes->ler(PC)->getDestino(), this->instrucoes->ler(PC)->getOrigem1(), this->instrucoes->ler(PC)->getOrigem2());
			break;
//SUB
		case FUNCAO_SUB:
			SUB(this->instrucoes->ler(PC)->getDestino(), this->instrucoes->ler(PC)->getOrigem1(), this->instrucoes->ler(PC)->getOrigem2());
			break;
//MULT
		case FUNCAO_MULT:
			MULT(this->instrucoes->ler(PC)->getDestino(), this->instrucoes->ler(PC)->getOrigem1(), this->instrucoes->ler(PC)->getOrigem2());
			break;
//DIV
		case FUNCAO_DIV:
			DIV(this->instrucoes->ler(PC)->getDestino(), this->instrucoes->ler(PC)->getOrigem1(), this->instrucoes->ler(PC)->getOrigem2());
			break;
//J
		case J:
			J(this->instrucoes->ler(PC)->getImediato());
			break;
//BNE
		case BNE:
			BNE(this->instrucoes->ler(PC)->getOrigem1(), this->instrucoes->ler(PC)->getOrigem2(), this->instrucoes->ler(PC)->getImediato());
			break;
//BEQ
		case BEQ:
			BEQ(this->instrucoes->ler(PC)->getOrigem1(), this->instrucoes->ler(PC)->getOrigem2(), this->instrucoes->ler(PC)->getImediato());
			break;
//LW
		case LW:
			LW(this->instrucoes->ler(PC)->getDestino(), this->instrucoes->ler(PC)->getImediato());
			break;
//SW
		case SW:
			SW(this->instrucoes->ler(PC)->getDestino(), this->instrucoes->ler(PC)->getImediato());
			break;
//NULL
		case NULL:
			PC++;
			break;
	}
}

//------------ Instruções -----------

UnidadeDeControle::ADD(int destino, int origem1, int origem2){
	this->registradores->setValor(destino, (this->registradores->getValor(origem1)) + (this->registradores->getValor(origem2)) );
	this->PC++;
}

UnidadeDeControle::SUB(int destino, int origem1, int origem2){
	this->registradores->setValor(destino, (this->registradores->getValor(origem1)) - (this->registradores->getValor(origem2)) );
	this->PC++;
}

UnidadeDeControle::MULT(int origem1, int origem2){
	this->registradores->setValor(24, (this->registradores->getValor(origem1)) * (this->registradores->getValor(origem2)) );
	this->PC++;
}

UnidadeDeControle::DIV(int origem1, int origem2){
	this->registradores->setValor(25, (this->registradores->getValor(origem1)) / (this->registradores->getValor(origem2)) );
	this->PC++;
}



UnidadeDeControle::J(int imediato){
	this->PC = imediato
}



UnidadeDeControle::BNE(int origem1, int origem2, int imediato){
	if( this->registradores->getValor(origem1) != this->registradores->getValor(origem2) ){
	this->PC = imediato;
	}
	else this->PC++;
}

UnidadeDeControle::BEQ(int origem1, int origem2, int imediato){
	if( this->registradores->getValor(origem1) == this->registradores->getValor(origem2) ){
	this->PC = imediato;
	}
	else this->PC++;
}



UnidadeDeControle::LW(int destino, int imediato){
	if(imediato == NULL)
		this->registradores->getValor(destino) = 0;
	else
		this->registradores->getValor(destino) = this->dados->ler(imediato)->getValor();
	this->PC++;
}

//Consertar e terminar essa função!!!!!!!
UnidadeDeControle::SW(int destino, int imediato){
//	Dado* d(this->registradores->getValor(imediato));
		this->dados->escrever(destino, new Dado*(this->registradores->getValor(imediato)));
	this->PC++;
}

