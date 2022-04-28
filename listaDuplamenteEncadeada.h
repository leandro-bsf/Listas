typedef struct{
    Cliente cliente;
    struct NodoLDE* proximo;
    struct NodoLDE* anterior;
}NodoLDE;

typedef struct{
    NodoLDE* inicio;
}LDE;

LDE* criarLDE();
void destruirLDE(LDE** lista);
void inserirFinalLDE(LDE* lista, Cliente c);
void inserirInicioLDE(LDE* lista, Cliente c);
int buscarClienteListaLDE(LDE* lista, int cpf, Cliente* clienteEncontrado);
void removerClienteLDE(LDE* lista, int cpf);
void imprimirDadosLDE(LDE* lista);
