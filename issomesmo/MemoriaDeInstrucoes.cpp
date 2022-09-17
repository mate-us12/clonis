#include "MemoriaDeInstrucoes"
#include <iostream>
using namespace std;

MemoriaDeInstrucoes::MemoriaDeInstrucoes(int tamanho){
	int i = 0;
	this->tamanho = tamanho;
       	this->mem = new Instrucao*[tamanho];

        while(i < tamanho){
                this.mem[i] = NULL;
                i++;
        }	
}

MemoriaDeInstrucoes::~MemoriaDeInstrucoes(){
        int i = 0;
        while(i < this->tamanho){
                delete this->mem[i];
        }
        delete this->mem;
}

int MemoriaDeInstrucoes::getTamanho(){
        return this->tamanho;
}

Instrucao* MemoriaDeInstrucoes::ler(int posicao){
        return this->mem[posicao];
}

bool MemoriaDeInstrucoes::escrever(int posicao, Instrucao* d){
        if(posicao >= 0 && posicao < this->tamanho){
                this->mem[posicao] = d;
                return true;
        }
        else
                return false;
}

