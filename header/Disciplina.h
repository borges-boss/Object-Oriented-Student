#include <iostream>
#include <string>
#ifndef DISCIPLINA_H
#define DISCIPLINA_H


using namespace std;
class Disciplina{ 

private:string nome;
private:int cod;
private: float nota;


Disciplina(string nome, int cod, float nota);

Disciplina();


public:string getNome();

public:int getCod();

public:float getNota();

public: void setNome(string nome);

public: void setNota(float nota);

public: void setCod(int cod);




};

#endif


