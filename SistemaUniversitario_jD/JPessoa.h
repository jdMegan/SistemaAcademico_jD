#pragma once
#include "stdafx.h"

class Pessoa{
protected:
	int diaP;
	int mesP;
	int anoP;
	int idadeP;
	char nomeP[30];
	int id;
public:
	Pessoa(int diaNa, int mesNa, int anoNa, const char* nome = "");
	Pessoa();
	//~Pessoa() { } // no do prof n tem esse n sei pq sera q é pq tem ja o destroi prof e alun?
	void Inicializa(int diaNa, int mesNa, int anoNa, const char* nome= "");
	void Calc_Idade(int diaAT, int mesAT, int anoAT);
	int getIdade();
	void informaIdade(); //essa printa a outra da o npumero	
	void setNome(const char* n);
	char* getNome();
	void setId(int i);
	int getId();
};