# Atividade Avaliativa: Estruturas de Dados I - Ciências de Dados e Inteligência Artificial (UEL - 2024) - 2º Semestre
# LISTA SEQUENCIAL DINÂMICA

## Descrição da atividade

Nesta atividade, a missão é transformar uma lista sequencial ordenada em C/C++ para que ela se ajuste automaticamente conforme o número de elementos inseridos ou removidos.

Iniciamos com uma lista que pode armazenar até 50 elementos. Quando ela ficar cheia, duplicamos seu tamanho para continuar inserindo novos elementos. Para evitar o desperdício de memória, se o número de elementos cair para 25% da capacidade, a lista reduz seu tamanho pela metade.

A mágica acontece usando alocação dinâmica de memória, com malloc e realloc, para ajustar a capacidade da lista conforme necessário. O resultado é uma lista ágil e eficiente, que se adapta automaticamente à quantidade de dados que está armazenando.

## Funções implementadas

### Função *tamanho_maximo*
Esta função retorna o valor alocado (ou realocado) para lista, exibindo o valor da variável "MAX" presente na estrutura da lista.

### Função *redimensionar*
Essa função realoca o espaço para a lista dependendo de seu número de elementos. Isso é feito da seguinte forma:
- Quando o valor máximo de elementos alocado é igual ao número de elementos, essa função dobra o valor do número máximo de elementos;
- Quando a metade do valor máximo de elementos alocado é igual ou menor que o número de elementos, essa função reduz a metade o número máximo de elementos.

## Funções alteradas

### Função *reiniciarLista*
Essa função, além de mudar o número de elementos para 0, libera o espaço (usando free), muda o número máximo de elementos alocados para 0 e muda os elementos da lista para NULL.

### Função *inicializarLista*


### Funções de inserir elementos
As funções de inserção *inserirElemListaOrd* e *inserirElemListaOrdSemDup*, além de inserirem elementos, também verificam se a lista está cheia, e caso esteja, dobra o espaço e realoca na memória.

### Funções de excluir elementos
As funções de exclusão *excluirElemLista* e *excluirElemListaOrd*, além de excluírem elementos, também verificam se o número de elementos caiu para 25% da capacidade, e caso sim, reduz pela metade o espaço e realoca na memória.