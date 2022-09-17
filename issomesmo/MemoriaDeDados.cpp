#include "MemoriaDeDados.h"
#include <iostream>
using namespace std;

MemoriaDeDados::MemoriaDeDados(int tamanho){
	int i = 0;
	this->tamanho = tamanho;
	this->mem = new Dado*[tamanho];

	while(i < tamanho){
		this.mem[i] = NULL;
		i++;
	}
}


MemoriaDeDados::~MemoriaDeDados(){
	int i = 0;
	while(i < this->tamanho){
		delete this->mem[i];
	}
	delete this->mem;
}

int MemoriaDeDados::getTamanho(){
	return this->tamanho;
}

Dado* MemoriaDeDados::ler(int posicao){
	return this->mem[posicao];
}	

bool MemoriaDeDados::escrever(int posicao, Dado* d){
	if(posicao >= 0 && posicao < this->tamanho){
		this->mem[posicao] = d;
		return true;
	}
	else
	       	return false;
}


void MemoriaDeDados::imprimir(){
	while(i < this->tamanho){
		if(this->mem[i]->valor == NULL)
			cout << "i:  -" << endl;
		else
			cout << "i:  " << this->mem[i]->valor << endl;
	}
}


