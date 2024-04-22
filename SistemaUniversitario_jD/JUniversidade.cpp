#include "stdafx.h"
#include "JUniversidade.h"

Universidade::Universidade()
{
	setNome("");
};
Universidade::~Universidade()
{
};

void Universidade::setNome(const char* n){
	strcpy_s(nome, n);
}

char* Universidade::getNome(){
	return nome;
}

void Universidade::setDepartamento(Departamento* pdep){
	LpDptos.push_back(pdep);
}

void Universidade::imprimeDepartamentos(){
	list< Departamento* >::iterator iterador;
	for (iterador = LpDptos.begin();iterador != LpDptos.end();iterador++){
		cout << (*iterador)->getNome() << endl;
	}
}