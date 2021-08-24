#include <iostream>
#include <string>
#include "Pessoa.h"
#ifndef ALUNO_H
#define ALUNO_H

using namespace std;

class Aluno: Pessoa{
public:int matricula; 
private:string nome,email;

public:Aluno(int matricula,string nome, string email);

public:Aluno();

public:int getMatricula();
public:void setMaticula(int maticula);
public:void setNome(string nome);
public:void setEmail(string email);

};
#endif