// main.c
#include "ListaOrdenada.h"
#include "ListaOrdenada.c"

int main() {
  LISTA lista;
  REGISTRO reg;
  // Inicializar a lista
  inicializarLista(&lista, 50);
  
  //INSERINDO 50 ELEMENTOS
  for(int i = 0; i < 50; i++){
    reg.chave = i;
    inserirElemListaOrd(&lista, reg);
  }
  exibirLista(&lista);
  printf("N de elementos da lista: %i.\n", tamanho(&lista));
  printf("Tamanho alocado para lista: %i.\n", tamanho_maximo(&lista));

  //INSERINDO MAIS UM ELEMENTO - LISTA SERÁ REALOCADA (PARA 100)
  reg.chave = 50;
  inserirElemListaOrd(&lista, reg);
  printf("N de elementos da lista: %i.\n", tamanho(&lista));
  printf("Tamanho alocado para lista: %i.\n", tamanho_maximo(&lista));

  //REMOVENDO METADE DOS ELEMENTOS - LISTA SERÁ REALOCADA (PARA 50)
  for(int i = 50; i > 24; i--){
    reg.chave = i;
    excluirElemLista(&lista, i);
  }
  printf("N de elementos da lista: %i.\n", tamanho(&lista));
  printf("Tamanho alocado para lista: %i.\n", tamanho_maximo(&lista));


  return 0;
}
