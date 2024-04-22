#pragma once
#include "stdafx.h"
#include "JListaAlunos.h"





class Aluno;
class ElAluno;
class ListaAlunos;
class Departamento;



class Disciplina {
private:
	int id;
	char nome[150];
	char areaConhecimento[150];
	Departamento* pDeptoAssociado;
	ListaAlunos ObjLAlunos;


public:
	Disciplina* pProx;
	Disciplina* pAnte;
	
	Disciplina(int na = 45, const char* areaC = ""); 
	~Disciplina();

	void setID(int i);
	int getID();
	void setNome(const char* nom);
	char* getNome();

	void setDepto(Departamento* pd);
	Departamento* getDepto();

	void IncluaAluno(Aluno* pa);
	void listeAlunos();
	void listeAlunos2();
	
};