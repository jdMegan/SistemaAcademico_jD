#pragma once
#include "stdafx.h"

class Universidade;//n tem outro jeito ?? essa é a resposta certa msm?
class Disciplina; // precisa desse? NO SLIDE N TINHA MAS NO CODIGO TEM EU ACHEI Q EU ERA BURRA

class Departamento{
private:
	// int id; // Precisando de ums set TEM NO SLIDE MAS N TEM NO ZIP
	char nome[130];
	Universidade* pUniv;// = NULL; //no zip n inicializa null
	Disciplina* pDisciPrim;
	Disciplina* pDisciAtual;
public:
	Departamento();// no projeto ta dizendo q cria com um int mas no codigo do slide n
	~Departamento();

	//int getID(); id morreu
	void setNome(const char* n);
	char* getNome();
	void setUniv(Universidade* pU);
	Universidade* getUniversidade();
	void incluaDisciplina(Disciplina* pd);
	void listeDisciplinas();
	void listeDisciplinas2();//lista de tras pra frente
};