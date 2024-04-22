#include "stdafx.h"
#include "JProfessor.h"

Professor::Professor(int diaNa, int mesNa, int anoNa, const char* nome) :
	Pessoa(diaNa, mesNa, anoNa, nome){
}

Professor::Professor()
	:Pessoa(){
}

Professor::~Professor(){
}

void Professor::OndeTrabalho() {
	cout << endl << nomeP << " trabalha para a " << UnivFiliado->getNome() << "." << endl;
}

void Professor::QualDepartamentoTrabalho() {
	cout << endl << " " << nomeP << " trabalha para a " << UnivFiliado->getNome()
		<< " no departamento " << DptoFiliado->getNome() << "." << endl;
}

void Professor::setUnivFiliado(Universidade* pU){
	UnivFiliado = pU;
}

void Professor::setDepartamento(Departamento* pDep){
	DptoFiliado = pDep;
}
