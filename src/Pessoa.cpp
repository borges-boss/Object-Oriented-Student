#include <iostream>
#include "../header/Pessoa.h"

using namespace std;


Pessoa::Pessoa(){}

 string Pessoa:: getNome(){return this->nome;}

 string Pessoa:: getEmail(){return this->email;}

 void Pessoa:: setNome(string email){
     this->nome=nome;
 }

 void Pessoa::setEmail(string email){
   this->email=email;
 }



