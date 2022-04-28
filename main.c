#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cliente.h"
#include "listaEstaticaSequencial.h"
#include "listaSimplesmenteEncadeada.h"
#include "listaDuplamenteEncadeada.h"


int main()
{

    Cliente c1;
	strcpy(c1.nome, "Joao");
	c1.id = 1;
	c1.cpf = 123;

	Cliente c2;
	strcpy(c2.nome, "Maria");
	c2.id = 2;
	c2.cpf = 345;

	Cliente c3;
	strcpy(c3.nome, "jORGE");
	c3.id = 3;
	c3.cpf = 567;

	LES* les_cliente = criarLES();
	destruirLES(&les_cliente);


	LSE* lse_cliente;
	lse_cliente = criarLSE();
	inserirInicioLSE(lse_cliente, c1);
	inserirInicioLSE(lse_cliente, c2);
	inserirInicioLSE(lse_cliente, c3);
	imprimirDadosLSE(lse_cliente);
	removerLSE(lse_cliente, 345);
	imprimirDadosLSE(lse_cliente);

	//LDE* lde_cliente;
	//lde_cliente = criarLDE();
	//inserirInicioLDE(lde_cliente, c1);
	//inserirInicioLDE(lde_cliente, c2);
	//imprimirDadosLDE(lde_cliente);


    //implementar menu para;
    //criação e cadastro de clientes(final e inicio da lista);
    //localizar e imprimir um cliente
    //remover um cliente
    //imprimir todos os clientes da lista
    //opcao de sair

    //lerRegistros();

    //destruirLSE(&lse_cliente);
    //imprimirDadosLSE(lse_cliente);


    return 0;
}
