#import "../estrutura.h"

typedef struct NO *arvoreLLRB;

arvoreLLRB *cria_arvoreLLRB();

void liberar_arvoreLLRB(arvoreLLRB *raiz);

int vazia_arvoreLLRB(arvoreLLRB *raiz);

int altura_arvoreLLRB(arvoreLLRB *raiz);

int totalNO_arvoreLLRB(arvoreLLRB *raiz);

void preOrdem_arvoreLLRB(arvoreLLRB *raiz);

void emOrdem_arvoreLLRB(arvoreLLRB *raiz);

void posOrdem_arvoreLLRB(arvoreLLRB *raiz);

int insere_arvoreLLRB(arvoreLLRB *raiz, FUNC funcionario);

int remove_arvoreLLRB(arvoreLLRB *raiz, FUNC funcionario);

int consulta_arvoreLLRB(arvoreLLRB *raiz, int valor);
