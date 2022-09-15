#include <iostream>
using namespace std;

class Dado{
public:
	Dado(int valor);
	virtual ~Dado();
	int getValor();
	void imprimir();
	
private:
	int valor;
};
