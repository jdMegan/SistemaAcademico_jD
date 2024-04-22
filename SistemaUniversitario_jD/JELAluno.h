#pragma once
#include "JAluno.h"
// Ele n ta reconhecendo o aluno vou por class de novo eu to tendo q por class de novo em tudo e n sei pq
class Aluno;
class ElAluno
{
private:
	Aluno* pAl;
public:
	ElAluno();
	~ElAluno();
	ElAluno* pProx;
	ElAluno* pAnte;
	void setAluno(Aluno* pa);
	Aluno* getAluno();
	char* getNome();
};