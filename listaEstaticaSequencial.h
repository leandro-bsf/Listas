typedef struct{
    int index;
    Cliente dados[100];
}LES;

LES* criarLES();
void destruirLES(LES** lista);
void inserirFinalLES(LES* lista, Cliente c);
void inserirInicioLES(LES* lista, Cliente c);
int buscarLES(LES* lista, int cpf, Cliente* clienteEncontrado);
void removerLES(LES* lista, int cpf);
void imprimirDadosLES(LES* lista);
