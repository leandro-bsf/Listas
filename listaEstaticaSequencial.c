#include <stdlib.h>
#include <stdio.h>
#include "cliente.h"
#include "listaEstaticaSequencial.h"

LES* criarLES()
{
    LES* li;
    li = (LES*) malloc(sizeof(LES));
    if(li != NULL)
    {
        li->index = 0;
    }
    return li;
}


void destruirLES(LES** li)
{
    free(*li);
    *li = NULL;
}

void inserirFinalLES(LES* lista, Cliente cliente)
{
    if(lista == NULL)
    {
        return 0;
    }
    lista->dados[lista->index] = cliente;
    lista->index++;
    return 1;
    //controlar se lista cheia!

}

int buscarLES(LES* lista, int cpf, Cliente* clienteRetornado)
{
    printf("Procurando cliente pelo CPF: %d\n", cpf);
    for(int i=0; i<=lista->index; i++)
    {
        if(lista->dados[i].cpf == cpf)
        {
            *clienteRetornado = lista->dados[i];
            return 1;
        }
    }
    return 0;
}

void removerLES(LES* lista, int cpf)
{
    printf("Removendo cliente com CPF: %d\n", cpf);
    for(int i=0; i<lista->index; i++)
    {
        if(lista->dados[i].cpf == cpf)
        {
            printf("achou cpf para remocao\n");
            lista->dados[i] = lista->dados[lista->index-1];
            printf("i=%d index=%d\n", i, lista->index);
            lista->index--;
            return 1;
        }
    }
    return 0;
}

void imprimirDadosLES(LES* lista)
{
    printf("Clientes cadastrados:\n");
    for(int i=0; i<lista->index; i++)
    {
        Cliente c = lista->dados[i];
        imprimirDadosCliente(&c);
    }
}








