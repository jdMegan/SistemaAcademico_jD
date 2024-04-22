#pragma once
#include "JPessoa.h"
#include "JUniversidade.h"
#include "stdafx.h"

class Professor : public Pessoa{
private:
    Universidade* UnivFiliado;
    Departamento* DptoFiliado;
public:
    Professor(int diaNa, int mesNa, int anoNa, const char* nome = "");
    Professor();
    ~Professor();
    void OndeTrabalho();
    void QualDepartamentoTrabalho();
    void setUnivFiliado(Universidade* pU);
    void setDepartamento(Departamento* pDep);
};

