#include "MemoriaDeInstrucoes.h"
#include <iostream>
using namespace std;

MemoriaDeInstrucoes(int tamanho){
	int i = 0;
	this->tamanho = tamanho;
	this->mem = new Dado*[tamanho];

	while(i < tamanho){
		this.mem[i] = NULL;
		i++;
	}
}


//virtual ~MemoriaDeDados();


Dado* ler(int posicao){
	return this->mem[posicao];
}	

bool escrever(int posicao, Dado* d){
	if(posicao >= 0 && posicao < this->tamanho){
		this->mem[posicao] = d;
		return true;
	}
	else
	       	return false;
}


void imprimir(){
	while(i < this->tamanho){
		if(this->mem[i]->valor == NULL)
			cout << "i:  -" << endl;
		else
			cout << "i:  " << this->mem[i]->valor << endl;
	}
}


