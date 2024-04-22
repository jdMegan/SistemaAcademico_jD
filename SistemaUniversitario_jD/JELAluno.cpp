#include "JELAluno.h"
#include "stdafx.h"
ElAluno::ElAluno() {
}
ElAluno::~ElAluno() {
}
void ElAluno::setAluno(Aluno* pa) {
	pAl = pa;
}
Aluno* ElAluno::getAluno() {
	return pAl;
}
char* ElAluno::getNome() {
	return pAl->getNome();
}
