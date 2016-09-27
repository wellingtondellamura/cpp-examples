#ifndef LISTA_H_
#define LISTA_H_

#include "dados.hpp"

#define MAX 5

struct Lista_setor{
    int size = 0;
    Setor items[MAX];

    bool inserir(Setor s){
        if (size < MAX){
            items[size] = s;
            size++;
            return true;
        } else {
            return false;
        }
    }
};

struct Lista_func{
    int size = 0;
    Funcionario items[MAX];

    bool criar(Funcionario f){
        if (size < MAX){
            items[size] = f;
            size++;
            return true;
        } else {
            return false;
        }
    }
};


#endif /* LISTA_H_ */
