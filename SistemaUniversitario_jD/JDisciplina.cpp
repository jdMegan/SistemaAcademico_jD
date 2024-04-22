#include "stdafx.h"
#include "JDisciplina.h"
#include "JAluno.h"
#include "JELAluno.h"
#include "JListaAlunos.h"
#include "JDepartamento.h"
#include "JUniversidade.h"


Disciplina::Disciplina(int na, const char* ac) :
	ObjLAlunos(na, ac)
{
	pDeptoAssociado = NULL;
	pProx = NULL;
	pAnte = NULL;
	strcpy_s(areaConhecimento, ac);
}
Disciplina::~Disciplina() {
	pDeptoAssociado = NULL;
	pProx = NULL;
	pAnte = NULL;
}
void Disciplina::setID(int i) {
	id = i;
}
int Disciplina::getID() {
	return(id);
}
void Disciplina::setNome(const char* nom) {
	strcpy_s(nome, nom);
}
char* Disciplina::getNome() {
	return(nome);
}
void Disciplina::setDepto(Departamento* pd) {
	pDeptoAssociado = pd;
	pd->incluaDisciplina(this);
}
Departamento* Disciplina::getDepto() {
	return(pDeptoAssociado);
}
void Disciplina::IncluaAluno(Aluno* pa){
	ObjLAlunos.incluaAluno(pa);
}
void Disciplina::listeAlunos(){
	ObjLAlunos.listeAlunos();
}
void Disciplina::listeAlunos2(){
	ObjLAlunos.listeAlunos2();
}