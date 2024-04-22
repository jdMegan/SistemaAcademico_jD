#pragma once

#include "JProfessor.h"
#include "JUniversidade.h"
#include "JAluno.h"
#include "JDisciplina.h"
#include "stdafx.h"

class Principal
{
private:
    Universidade UTFPR, Princeton, Cambridge;
    Departamento DAELN, EletronicaUTFPR, MatematicaUTFPR, FisicaUTFPR, MatematicaPrinceton, FisicaPrinceton, MatematicaCambridge, FisicaCambridge;
    Professor Simao, Einstein, Newton;
    Disciplina Computacao1_2006, Introd_Alg_2007, Computacao2_2007, Metodos2_2007;
    Aluno AAA, BBB, CCC, DDD, EEE, FFF;
    int diaAtual;
    int mesAtual;
    int anoAtual;

public:
    Principal();

    void Inicializa();
    void InicializaUniversidades();
    void InicializaDepartamentos();
    void InicializaProfessores();
    void InicializaAlunos();
    void InicializaDisciplinas();

    void Executar();

    void CalcIdadeProfs();
    void UnivOndeProfsTrabalham();
    void DepOndeProfsTrabalham();
    //void ConhecPessoa(); nem sei pq esse tava no slide nunca usamo

    void ListeDiscDeptos();

    void ListaAlunoDisc();
    
};


