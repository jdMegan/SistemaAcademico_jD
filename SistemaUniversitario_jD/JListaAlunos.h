#pragma once
class Aluno; //no do prof n tem no meu n funciona sem
class ElAluno; //no do prof n tem no meu n funciona sem

class ListaAlunos
{
private:
	int contAlunos;
	int numAlunos;
	char nome[150];
	ElAluno* pElAlunoPrim;
	ElAluno* pElAlunoAtual;
public:
	ListaAlunos(int na, const char* n);
	~ListaAlunos();
	void incluaAluno(Aluno* pa);
	void listeAlunos();
	void listeAlunos2();
};