#include <stdlib.h>
#include <stdio.h>
#include "cliente.h"
#include "listaSimplesmenteEncadeada.h"

LSE* criarLSE()
{
    LSE* li;
    li = (LSE*) malloc(sizeof(LSE));
    if(li != NULL)
    {
        li->inicio = NULL;
    }
    return li;
}

void destruirLSE(LSE** lista)
{
    if(*lista != NULL)
    {
        NodoLSE* nodo;
        while((*lista)->inicio != NULL)
        {
            nodo = (*lista)->inicio;
            (*lista)->inicio = nodo->proximo;
            free(nodo);
        }
        (*lista)->inicio = NULL;
        free(*lista);
    }

    *lista = NULL;
}


void inserirInicioLSE(LSE* lista, Cliente c)
{
    NodoLSE* novo = (NodoLSE*)malloc(sizeof(NodoLSE));
    novo->cliente = c;
    novo->proximo = lista->inicio;
    lista->inicio = novo;
}

int buscarLSE(LSE* lista, int cpf, Cliente* clienteEncontrado)
{
    //implementar
    return 0;
}

void removerLSE(LSE* lista, int cpf)
{
    if(lista != NULL){
        NodoLSE* auxAnterior;
        NodoLSE* aux = lista->inicio;
        while(aux != NULL && aux->cliente.cpf != cpf){
            auxAnterior = aux;
            aux = aux->proximo;
        }
        if(aux == NULL){
            printf("Erro: Cliente não encontrado\n");
        }
        if(aux == lista->inicio){
            printf("remover o primeiro\n");
            lista->inicio = aux->proximo;
        }
        else{
            auxAnterior->proximo = aux->proximo;
        }
        free(aux);
    }
    else{
        printf("Erro: Lista não inicializada\n");
    }
}
void imprimirDadosLSE(LSE* lista)
{
    if(lista != NULL)
    {
        if(lista->inicio == NULL)
        {
            printf("Erro, lista não foi inicilizada");
        }

        NodoLSE* aux = lista->inicio;
        while(aux!=NULL)
        {
            imprimirDadosCliente(&aux->cliente);
            aux = aux->proximo;
        }
    }
    else
    {
        printf("Erro, lista não foi inicilizada");
    }
    printf("\n\n");
}
