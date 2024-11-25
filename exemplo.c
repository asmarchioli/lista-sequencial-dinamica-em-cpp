#include <stdio.h>
#include <stdlib.h>

int main() {
    int* vetor;
    int tamanho_inicial = 5;
    int novo_tamanho = 10;

    // Alocando memória para 5 inteiros
    vetor = (int*)malloc(tamanho_inicial * sizeof(int));
    if (vetor == NULL) {
        printf("Erro de alocação de memória inicial.\n");
        return 1;
    }

    // Inicializando o vetor
    for (int i = 0; i < tamanho_inicial; i++) {
        vetor[i] = i + 1;
    }

    // Redimensionando o vetor para 10 inteiros
    vetor = (int*)realloc(vetor, novo_tamanho * sizeof(int));
    if (vetor == NULL) {
        printf("Erro de realocação de memória.\n");
        return 1;
    }

    // Inicializando os novos elementos do vetor
    for (int i = tamanho_inicial; i < novo_tamanho; i++) {
        vetor[i] = i + 1;
    }

    // Imprimindo o vetor
    for (int i = 0; i < novo_tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Liberando a memória
    free(vetor);

    return 0;
}
