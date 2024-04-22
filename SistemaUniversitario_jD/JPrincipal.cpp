#include "stdafx.h"
#include "JPrincipal.h"
#include <Windows.h>

Principal::Principal(){

    SYSTEMTIME st;
    GetSystemTime(&st);

    diaAtual = st.wMonth;
    mesAtual = st.wDay;
    anoAtual = st.wYear;

    Inicializa();

    

}
void Principal::Inicializa(){

    InicializaUniversidades();
    InicializaDepartamentos();
    InicializaDisciplinas();
    InicializaProfessores();
    InicializaAlunos();
    Executar();

}
void Principal::InicializaUniversidades() { // UTFPR, Princeton, Cambridge;
    
    UTFPR.setNome("UTFPR");
    Princeton.setNome("Princeton");
    Cambridge.setNome("Cambridge");
}
void Principal::InicializaDepartamentos() { 
    
    DAELN.setNome("DAELN");
    EletronicaUTFPR.setNome("Eletronica UTFPR");//redundante ne pq a daeln é a de eletronica nos slide ele usa um no codigo outro eu vou usar daeln
    MatematicaUTFPR.setNome("Matematica UTFPR");
    FisicaUTFPR.setNome("Fisica UTFPR");
    MatematicaPrinceton.setNome("Matematica Princeton");
    FisicaPrinceton.setNome("Fisica Princeton");
    MatematicaCambridge.setNome("Matematica Cambridge");
    FisicaCambridge.setNome("Fisica Cambridge");

    //esse tempo inteiro eu n tava agregando os departamento as universidades
    UTFPR.setDepartamento(&EletronicaUTFPR);
    UTFPR.setDepartamento(&MatematicaUTFPR);
    UTFPR.setDepartamento(&FisicaUTFPR);

    Princeton.setDepartamento(&MatematicaPrinceton);
    Princeton.setDepartamento(&FisicaPrinceton);
    Cambridge.setDepartamento(&MatematicaCambridge);
    Cambridge.setDepartamento(&FisicaCambridge);
}
void Principal::InicializaProfessores() {
    
    Simao.setNome("Simao");
    Einstein.setNome("Einstein");
    Newton.setNome("Newton");

    Simao.setUnivFiliado(&UTFPR);
    Einstein.setUnivFiliado(&Princeton);
    Newton.setUnivFiliado(&Cambridge);

    Simao.setDepartamento(&DAELN);
    Einstein.setDepartamento(&FisicaPrinceton);
    Newton.setDepartamento(&MatematicaCambridge);
}
void Principal::InicializaAlunos() {
    AAA.setNome("AAA");
    BBB.setNome("BBB");
    CCC.setNome("CCC");
    DDD.setNome("DDD");
    EEE.setNome("EEE");
   
}
void Principal::InicializaDisciplinas() {
    
    Computacao1_2006.setNome("Computacao I 2006");
    Introd_Alg_2007.setNome("Intro de Algde Programacao 2007");
    Computacao2_2007.setNome("Computao II");
    Metodos2_2007.setNome("Métodos II");

    //pqp, no codigo o prof faz a função Disciplina::setdepto mas aqui dos slider era Depto::setDisciplica, ambas as funcoes continuam a existir msm assim
    //AHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH
    //vou copiar e colar se n der merda n pensarei sobre novamente, mas um aviso para o futuro se der merd pode ser aqui
    //deu merda a versao do zip ta fodida pq n usa o ElAluno
    DAELN.incluaDisciplina(&Computacao1_2006);
    DAELN.incluaDisciplina(&Introd_Alg_2007);
    DAELN.incluaDisciplina(&Computacao2_2007);
    DAELN.incluaDisciplina(&Metodos2_2007);    

    Metodos2_2007.IncluaAluno(&AAA);
    Metodos2_2007.IncluaAluno(&BBB);
    Metodos2_2007.IncluaAluno(&CCC);
    Metodos2_2007.IncluaAluno(&DDD);
    Metodos2_2007.IncluaAluno(&EEE);

    Computacao2_2007.IncluaAluno(&AAA);
    Computacao2_2007.IncluaAluno(&EEE);
    Computacao2_2007.IncluaAluno(&FFF);

}
void Principal::CalcIdadeProfs() {
    
    Simao.Calc_Idade(diaAtual, mesAtual, anoAtual);
    Einstein.Calc_Idade(diaAtual, mesAtual, anoAtual);
    Newton.Calc_Idade(diaAtual, mesAtual, anoAtual);
    printf("\n");
}
void Principal::UnivOndeProfsTrabalham(){
   
    Simao.OndeTrabalho();
    Einstein.OndeTrabalho();
    Newton.OndeTrabalho();
    printf("\n");
}
void Principal::DepOndeProfsTrabalham(){
   
    Simao.QualDepartamentoTrabalho();
    Einstein.QualDepartamentoTrabalho();
    Newton.QualDepartamentoTrabalho();
    printf("\n");
}
//void Principal::ConhecPessoa(){}
void Principal::ListeDiscDeptos()
{
    DAELN.listeDisciplinas();
    printf("\n");
}
void Principal::ListaAlunoDisc(){
    Metodos2_2007.listeAlunos();
    printf(" \n");
    Metodos2_2007.listeAlunos2();
    printf("\n");

    Computacao2_2007.listeAlunos2();
    printf("\n");
    Computacao2_2007.listeAlunos();
    printf(" \n");
    
}
void Principal::Executar()
{
    CalcIdadeProfs();
    UnivOndeProfsTrabalham();
    DepOndeProfsTrabalham();
    //ListeDepPorUniv();  prof colocou aqui no slide mas n mostrou implementação vou me matar
    // Metodos2.listeAlunos();
    ListeDiscDeptos();
    ListaAlunoDisc();

    /*AAA.setNome("Teste");
    printf("O novo nome de AAA eh: %s \n", AAA.getNome());
    Computacao2_2007.listeAlunos();*/


}