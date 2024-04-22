#include "stdafx.h"
#include "JDepartamento.h"
#include "JDisciplina.h"
#include "JUniversidade.h"

Departamento::Departamento(){
	//strcpy_s(nome, ""); // no dele n tem isso
	// falta id
	pDisciPrim = NULL;
	pDisciAtual = NULL;
}
Departamento::~Departamento(){
	pDisciPrim = NULL;
	pDisciAtual = NULL;
}
/*int Departamento::getID() {
	return(id);
}*/
void Departamento::setNome(const char* n){
	strcpy_s(nome, n);
}
char* Departamento::getNome(){
	return nome;
}
void Departamento::setUniv(Universidade* pU){
	pUniv = pU;
}
Universidade* Departamento::getUniversidade(){
	return pUniv;
}
void Departamento::incluaDisciplina(Disciplina* pd) {
	if (pDisciAtual == NULL)
	{
		pDisciPrim = pd;
		pDisciAtual = pd;
	}
	else
	{
		pDisciAtual->pProx = pd;
		pd->pAnte = pDisciAtual;
		pDisciAtual = pd;
	}
}
void Departamento::listeDisciplinas() {
	Disciplina* pAux;
	pAux = pDisciPrim;
	while (pAux != NULL)
	{
		cout << " A disciplina " << pAux->getNome() << " pertence ao Departamento " << nome << endl;
		pAux = pAux->pProx;
	}
}
void Departamento::listeDisciplinas2(){
	Disciplina* pAux;
	pAux = pDisciAtual;
	while (pAux != NULL)
	{
		cout << " A disciplina" << pAux->getNome() << "pertence ao Departamento" << nome << endl;
		pAux = pAux->pAnte;
	}
}