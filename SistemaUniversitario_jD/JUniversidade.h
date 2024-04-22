#pragma once
#include "JDepartamento.h"
#include "stdafx.h"

class Departamento; //Tem q por isso? tive q colocar no departament.h a class uni tb se n n dava

class Universidade{
private:
	char nome[130];
	list< Departamento* > LpDptos;// nao sei usar ese list, ele apareceu num slide meti ele aqui e n falamos mais sobre, no zip ta um vetor normal
	int ctd;

	/*char nome[130];
	  int indice;
      Departamento* pDptos[50];
	  esse é o do zip, vou deixar q nem o 
	  */

public:
	Universidade();
	~Universidade();
	void setNome(const char* n);
	char* getNome();
	void setDepartamento(Departamento* pdep);
	void imprimeDepartamentos();
};

//VOU DEIXAR ESSE IGUAL PQ ACHO Q O DO ZIP N TA ATUALIZADO .. . . . . . . .