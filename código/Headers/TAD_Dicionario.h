#include "TAD_ListaDePalavras.h"


//ponteiro para celulaDicionario
typedef struct CelulaDicionario* ApontadorDicionario;
//celula da lista
typedef struct CelulaDicionario{
    char letra_lista;
    TLista_De_Palavras ListaDePalavras;
    struct CelulaDicionario* pProx;
}TCelulaDicionario;
//lista de listas - dicionario
typedef struct{
    ApontadorDicionario pPrimeiro;
    ApontadorDicionario pUltimo;
}TDicionario;


//operacoes do dicionario
void Inicializa_Dicionario(TDicionario* pDicionario);
void Constroi_Dicionario(TDicionario* pDicionario);
TLista_De_Palavras* Cria_e_Insere_Nova_Lista(TDicionario* pDicionario, char letra);
ApontadorDicionario Verifica_Lista(TDicionario* pDicionario, char letra);
int Dicionario_eh_vazio(TDicionario* pDicionario);
void Ordena_Dicionario(TDicionario* pDicionario);
void Imprime_Dicionario(TDicionario Dicionario);
void Insere_Palavra_Dicionario(TDicionario* pDicionario, char* palavra, int linha);
