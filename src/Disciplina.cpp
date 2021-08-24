#include <iostream>
#include "../header/Disciplina.h"


using namespace std;


Disciplina::Disciplina(string nome, int cod, float nota){
    this->nome=nome;
    this->nota=nota;
    this->cod=cod;
}


Disciplina::Disciplina(){
    this->nome="";
    this->nota=0;
    this->cod=0;
}
string Disciplina::getNome(){
    return this->nome;
}

int Disciplina:: getCod(){ 
    return this->cod;
}

float Disciplina:: getNota(){
    return this->nota;
}

 void Disciplina::setNome(string nome){
     this->nome=nome;
 }

 void Disciplina:: setNota(float nota){
     this->nota=nota;
 }

 void Disciplina:: setCod(int cod){
     this->cod=cod;
 }