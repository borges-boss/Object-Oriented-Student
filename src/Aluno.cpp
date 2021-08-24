#include <iostream>
#include "../header/Aluno.h"

using namespace std;



Aluno::Aluno(int matricula,string nome, string email){
  this->matricula=matricula;
  this->nome=nome;
  this->email=email;
}

Aluno::Aluno(){
  this->matricula=0;
  this->nome="";
  this->email="";
}


int Aluno::getMatricula(){
return this->matricula;
}

string Aluno::getNome(){
return this->nome;
}

string Aluno::getEmail(){
    return this->email;
}

void Aluno::setEmail(string email){
     this->email=email;
}

void Aluno::setNome(string nome){
     this->nome=nome;
}

void Aluno::setMaticula(int maticula){
     this->matricula=maticula;
}






