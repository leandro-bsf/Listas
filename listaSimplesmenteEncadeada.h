typedef struct{
    Cliente cliente;
    struct NodoLSE* proximo;
}NodoLSE;

typedef struct{
    NodoLSE* inicio;
}LSE;

LSE* criarLSE();
void destruirLSE(LSE** lista);
void inserirFinalLSE(LSE* lista, Cliente c);
void inserirInicioLSE(LSE* lista, Cliente c);
int buscarLSE(LSE* lista, int cpf, Cliente* clienteEncontrado);
void removerLSE(LSE* lista, int cpf);
void imprimirDadosLSE(LSE* lista);
