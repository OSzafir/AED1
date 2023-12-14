#ifndef ALUNO_H
#define ALUNO_H

typedef struct Aluno {
    int matricula;
    char nome[50];
    int idade;
    struct Aluno* proximo;
} Aluno;

typedef struct ListaAlunos {
    Aluno* inicio;
} ListaAlunos;

void inicializarLista(ListaAlunos* lista);
void reiniciarLista(ListaAlunos* lista);
int tamanhoLista(ListaAlunos* lista);
int listaCheia(ListaAlunos* lista);
int listaVazia(ListaAlunos* lista);
void exibirLista(ListaAlunos* lista);
void inserirElemento(ListaAlunos* lista, int matricula, const char* nome, int idade);
void excluirElemento(ListaAlunos* lista, int matricula);

#endif
