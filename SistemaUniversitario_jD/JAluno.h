#pragma once
#include "stdafx.h"
#include "JPessoa.h"

//OK olhando o codigo do prof antes aqui tava universidade mas eu vi q no dele n precisa de universidade mas precisa de departamento mas eu n tinha departamento e fincionava
class Departamento; //ele n ta sabendo legal
class Aluno : public Pessoa{
private:
    int RA;
    int	id; // do zip nao dos slide
    Departamento* DeptoAssociado;
public:
  
  

    Aluno(int diaNa, int mesNa, int anoNa, const char* nome = "");
    Aluno(int i);
    Aluno();
    ~Aluno();

    void setRA(int ra);
    int getRA();

    //Daqui pra baixo n tinha no slide 5 mas tinha no zip 5
    void setDepartamento(Departamento* d);
    Departamento* getDepartamento();

    void setId(int i);
    int getId();

};
