#include "aluno.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inicializarLista(ListaAlunos* lista) {
    lista->inicio = NULL;
}

void reiniciarLista(ListaAlunos* lista) {
    Aluno* atual = lista->inicio;
    Aluno* proximo;

    while (atual != NULL) {
        proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }

    lista->inicio = NULL;
}

int tamanhoLista(ListaAlunos* lista) {
    int tamanho = 0;
    Aluno* atual = lista->inicio;

    while (atual != NULL) {
        tamanho++;
        atual = atual->proximo;
    }

    return tamanho;
}

int listaCheia(ListaAlunos* lista) {
    return 0; 
}

int listaVazia(ListaAlunos* lista) {
    return (lista->inicio == NULL);
}

void exibirLista(ListaAlunos* lista) {
    Aluno* atual = lista->inicio;

    while (atual != NULL) {
        printf("Matricula: %d, Nome: %s, Idade: %d\n", atual->matricula, atual->nome, atual->idade);
        atual = atual->proximo;
    }
}

void inserirElemento(ListaAlunos* lista, int matricula, const char* nome, int idade) {
    
}

void excluirElemento(ListaAlunos* lista, int matricula) {
    
}
