#pragma once
#include "stdafx.h"
#include "JListaAlunos.h"
#include "JAluno.h"
#include "JELAluno.h"

ListaAlunos::ListaAlunos(int na, const char* n)
{
	numAlunos = na;
	contAlunos = 0;
	pElAlunoPrim = NULL;
	pElAlunoAtual = NULL;
	strcpy_s(nome, n);
}
ListaAlunos::~ListaAlunos(){
	ElAluno* paux1, * paux2;
	paux1 = pElAlunoPrim;
	paux2 = paux1;
	while (paux1 != NULL)
	{
		paux2 = paux1->pProx;
		delete (paux1);
		paux1 = paux2;
	}
	pElAlunoPrim = NULL;
	pElAlunoAtual = NULL;
}
void ListaAlunos::incluaAluno(Aluno* pa){
	if ((contAlunos < numAlunos) && (pa != NULL))	{
		ElAluno* paux = NULL;
		paux = new ElAluno();
		paux->setAluno(pa);
		if (pElAlunoPrim == NULL){
			pElAlunoPrim = paux;
			pElAlunoAtual = paux;
		}else{
			pElAlunoAtual->pProx = paux;
			paux->pAnte = pElAlunoAtual;
			pElAlunoAtual = paux;
		}
		contAlunos++;
	}else{
		if (pa != NULL)	{
			cout << "Aluno não incluído. Turma já lotada em "<< numAlunos << " alunos." << endl;
		}else{
			cout << " Ponteiro do Aluno está nulo! " << endl;
		}
	}
}
void ListaAlunos::listeAlunos(){
	// paux é um ponteiro de (objeto da classe) pElAluno
	ElAluno* paux = NULL;
	// paux recebe o mesmo endereço de pElAlunoPrim, que é outro ponteiro (de objeto da classe) pELAluno.
	paux = pElAlunoPrim;
	while (paux != NULL){
		// printf(" Aluno %s matriculado na Disciplina %s. \n", aux->getNome(), nome);
		cout << " Aluno " << paux->getNome() << " matriculado na Disciplina " << nome << "." << endl;
		paux = paux->pProx;
	}
}
void ListaAlunos::listeAlunos2(){
	ElAluno* paux = NULL;
	paux = pElAlunoAtual;
	while (paux != NULL){
		// printf (" Aluno %s matriculado na Disciplina %s \n", paux->getNome(), nome);
		cout << " Aluno " << paux->getNome() << " matriculado na Disciplina " << nome << "." << endl;
		paux = paux->pAnte;
	}
}
