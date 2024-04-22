#include "stdafx.h"
#include "JPessoa.h"
#include "JAluno.h"
#include "JDepartamento.h" 



Aluno::Aluno(int diaNa, int mesNa, int anoNa, const char* nome) : //zip 5
	Pessoa(diaNa, mesNa, anoNa, nome)
{

}

//Ta entao eu posso por int e convalidar com o pessoa sem parametro? n tem como fazer no de cima ele q nem ta mas acrescentar o int i de parametro em aluno?
Aluno::Aluno(int i) :
	Pessoa()
{
	id = i;
	RA = 0;
}

Aluno::Aluno() : // antes eu tinha colocado construtora de aluno sem por q é de pessoa e n sei acho q n deu erro
	Pessoa()
{

}

Aluno::~Aluno() {} //n tem q por :~Pessoa()???

void Aluno::setRA(int ra) {
	RA=ra;
}
int Aluno::getRA() {
	return(RA);
}

//essas daqui sao novas 

void Aluno::setDepartamento(Departamento* d){
	DeptoAssociado = d;
}

Departamento* Aluno::getDepartamento(){
	return DeptoAssociado;
}

void Aluno::setId(int i){
	id = i;
}


int Aluno::getId(){
	return id;
}