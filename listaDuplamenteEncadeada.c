#include <stdlib.h>
#include <stdio.h>
#include "cliente.h"
#include "listaDuplamenteEncadeada.h"

LDE* criarLDE()
{
    LDE* li;
    li = (LDE*) malloc(sizeof(LDE));
    if(li != NULL)
    {
        li->inicio = NULL;
    }
    return li;
}

void destruirLDE(LDE** lista){
    if(*lista != NULL)
    {
        NodoLDE* nodo;
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


void liberarLDE(LDE* lista){
    if(lista){
        NodoLDE* nodo;
        while(lista->inicio != NULL){
            nodo = lista->inicio;
            lista->inicio = nodo->proximo;
            free(nodo);
        }
        free(lista);
    }
}

void inserirInicioLDE(LDE* lista, Cliente c)
{
    NodoLDE* novo = (NodoLDE*)malloc(sizeof(NodoLDE));
    if(novo)
    {
        //configurando o novo nodo
        novo->cliente = c;
        novo->proximo = lista->inicio;
        novo->anterior=NULL;

        //configurando o primeiro nodo anteriormente inserido caso exista
        if(lista->inicio)
        {
            lista->inicio->anterior = novo;
        }
        lista->inicio = novo;
    }
    else
    {
        printf("Erro ao alocar memoria para o novo cliente\n");
    }
}

void imprimirDadosLDE(LDE* lista){
    NodoLDE* aux = lista->inicio;
    while(aux!=NULL){
        imprimirDadosCliente(&aux->cliente);
        aux = aux->proximo;
    }
    printf("\n\n");
}

