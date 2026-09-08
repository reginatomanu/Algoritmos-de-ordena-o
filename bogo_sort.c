#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * esta_ordenado
 * --------------
 * Verifica se o vetor v de tamanho n está em ordem crescente.
 * Percorre o vetor comparando cada elemento com o seguinte:
 * se em algum ponto v[i] for maior que v[i+1], a ordem foi
 * quebrada e a função retorna 0 (falso). Se chegar ao fim sem
 * encontrar nenhuma inversão, o vetor está ordenado e retorna 1 (verdadeiro).
 */
int esta_ordenado(int v[], int n) {
    for (int i = 0; i < n - 1; i++)
        if (v[i] > v[i + 1])
            return 0;
    return 1;
}

/*
 * embaralhar
 * ----------
 * Embaralha o vetor v de tamanho n de forma aleatória.
 * Para cada posição i, sorteia um índice j entre 0 e n-1
 * e troca o conteúdo de v[i] com v[j]. Repetindo isso para
 * todas as posições, o vetor fica em uma ordem essencialmente
 * aleatória a cada chamada.
 */
void embaralhar(int v[], int n) {
    for (int i = 0; i < n; i++) {
        int j = rand() % n;   // sorteia posição para trocar com i
        int tmp = v[i];
        v[i] = v[j];
        v[j] = tmp;
    }
}

/*
 * bogo_sort
 * ---------
 * Implementação do algoritmo Bogo Sort (também chamado de
 * "stupid sort" ou "permutation sort").
 *
 * Ideia do algoritmo:
 *   1. Verifica se o vetor já está ordenado.
 *   2. Se não estiver, embaralha o vetor aleatoriamente.
 *   3. Repete os passos 1 e 2 até que o vetor esteja ordenado.
 *
 * Não há nenhuma lógica de comparação/ordenação real acontecendo:
 * o algoritmo apenas tenta permutações aleatórias até acertar por sorte.
 */
void bogo_sort(int v[], int n) {
    while (!esta_ordenado(v, n)) {
        embaralhar(v, n);
    }
}

int main(void) {
    // Inicializa a semente do gerador de números aleatórios com o
    // horário atual, para que os embaralhamentos sejam diferentes
    // a cada execução do programa.
    srand(time(NULL));

    int v[] = {5, 2, 8, 1, 9, 3};
    int n = sizeof(v) / sizeof(v[0]);

    printf("Antes: ");
    for (int i = 0; i < n; i++) printf("%d ", v[i]);
    printf("\n");

    bogo_sort(v, n);

    printf("Depois: ");
    for (int i = 0; i < n; i++) printf("%d ", v[i]);
    printf("\n");

    return 0;
}
