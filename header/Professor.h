#include <iostream>
#include "Pessoa.h"
#ifndef PROFESSOR_H
#define PROFESSOR_H

using namespace std;

class Professor : Pessoa{

private:string email,dpto;
private:int codProfessor;


Professor(int,string,string,string);

Professor();

public: int getCodProfessor();

public : string getDepartamento();

public : void setDepartamento(string dpto);

public: void setCodProfessor(int codProfessor);





};

#endif