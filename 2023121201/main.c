#include "aluno.h"

int main() {
    ListaAlunos lista;
    inicializarLista(&lista);

    inserirElemento(&lista, 101, "Alice", 20);
    inserirElemento(&lista, 103, "Bob", 22);
    inserirElemento(&lista, 102, "Charlie", 21);

    printf("Lista inicial:\n");
    exibirLista(&lista);

    printf("\nTamanho da lista: %d\n", tamanhoLista(&lista));
    printf("A lista esta vazia? %s\n", listaVazia(&lista) ? "Sim" : "Nao");
    printf("A lista esta cheia? %s\n", listaCheia(&lista) ? "Sim" : "Nao");

    excluirElemento(&lista, 103);

    printf("\nLista apos excluir o aluno com matricula 103:\n");
    exibirLista(&lista);

    reiniciarLista(&lista);

    printf("\nLista reiniciada:\n");
    exibirLista(&lista);

    return 0;
}
