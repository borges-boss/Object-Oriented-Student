#include <iostream>
#include <string>
#ifndef PESSOA_H
#define PESSOA_H

using namespace std;

 class Pessoa{


protected:string nome;
protected:string email;

Pessoa();

public: string getNome();

public: string getEmail();


public: void setNome(string nome);

public: void setEmail(string email);

};
#endif