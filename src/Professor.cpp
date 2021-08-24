#include <iostream>
#include <string>
#include "../header/Aluno.h"
#include "../header/Professor.h"


using namespace std;


Professor::Professor(int codProfessor,string nome,string email, string dpto ){

    this->codProfessor=codProfessor;
    this->nome=nome;
    this->email;
    this->dpto=dpto;
}


string Pessoa:: getNome(){
return this->nome;
}

string Pessoa:: getEmail(){
    return this->email;
}

int Professor :: getCodProfessor(){
    return this->codProfessor;
}

string Professor :: getDepartamento(){
return this->dpto;
}

void Professor:: setDepartamento(string dpto){
     this->dpto=dpto;
}

void Pessoa:: setNome(string nome){
  this->nome=nome;
}

void Pessoa:: setEmail(string email){
    this->email=email;
}

void Professor:: setCodProfessor(int codProfessor){
    this->codProfessor=codProfessor;
}



