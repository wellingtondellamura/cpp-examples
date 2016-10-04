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
    /*
        Esta função remove um elemento da lista de setores.
        Se a posição informada for válida, o elemento é removido e a função retorna true.
        Caso contrário retorna false.
    */
    bool remover(int pos){
        //validar a posição
        //a posição deve ser maior que zero e menor que o tamanho.
        if (pos < 0 || pos >= size){
            return false;
        }
        //diminui o tamanho da lista
        size--;
        for (int i = pos; i < size; i++){
            items[i] = items[i+1];
        }
        return true;
    }

    Setor ler(int pos){
        if (pos > 0 && pos < size){
            return items[pos];
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
