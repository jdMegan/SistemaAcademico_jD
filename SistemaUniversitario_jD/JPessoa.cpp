#include "stdafx.h"
#include "JPessoa.h"

Pessoa::Pessoa(int diaNa, int mesNa, int anoNa, const char* nome){
	Inicializa(diaNa, mesNa, anoNa, nome);
}

Pessoa::Pessoa(){
	Inicializa(0, 0, 0);
}

void Pessoa::Inicializa(int diaNa, int mesNa, int anoNa, const char* nome){
	diaP = diaNa;
	mesP = mesNa;
	anoP = anoNa;
	idadeP = -1;
	strcpy_s(nomeP, nome);
	id = -1;
}

void Pessoa::Calc_Idade(int diaAT, int mesAT, int anoAT){
	idadeP = anoAT - anoP;
	if (mesP < mesAT) {
		idadeP = idadeP - 1;
	}
	else {
		if (mesP == mesAT) {
			if (diaP > diaAT) {
				idadeP = idadeP - 1;
			}
		}
	}
	informaIdade();
}

int Pessoa::getIdade() {
	return(idadeP);
}

void Pessoa::informaIdade() {
	cout << "\n" << nomeP << " teria " << idadeP << " anos de idade."<< endl;
}

void Pessoa::setNome(const char* n) {
	strcpy_s(nomeP, n);
}

char* Pessoa::getNome() {
	return nomeP;
}

void Pessoa::setId(int i) {
	id = i;
}

int Pessoa::getId() {
	return id;
}