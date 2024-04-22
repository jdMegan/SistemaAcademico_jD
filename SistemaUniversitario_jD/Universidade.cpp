#include "stdafx.h"
#include "Universidade.h"

Universidade::Universidade(const char* n)
{
	strcpy_s(nome, n);
};

void Universidade::setNome( const char* n)
{
	strcpy_s(nome, n);
};
char* Universidade::getNome()
{
	return nome;
}