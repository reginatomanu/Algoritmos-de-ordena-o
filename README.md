# Bogo Sort em C

Trabalho desenvolvido para a disciplina de **Estratégias de Programação**, da UTFPR – Campus Cornélio Procópio (UTFPR-CP), no semestre **2026/2**.

## O que é o Bogo Sort

O Bogo Sort (também conhecido como *stupid sort*, *permutation sort* ou *shotgun sort*) é um algoritmo de ordenação propositalmente ineficiente, usado principalmente como exemplo didático e "piada" acadêmica sobre o que **não** fazer ao ordenar dados.

O funcionamento é simples:

1. Verifica se o vetor já está ordenado.
2. Se não estiver, embaralha o vetor de forma aleatória.
3. Repete os passos acima até que, por sorte, o vetor esteja ordenado.

Ou seja, o algoritmo não possui nenhuma lógica de comparação ou movimentação inteligente de elementos — ele apenas fica sorteando permutações até acertar.

## Complexidade

| Caso | Complexidade |
|---|---|
| Melhor caso | O(n) — vetor já vem ordenado |
| Caso médio | O(n · n!) |
| Pior caso | Não limitado (teoricamente infinito) |
| Espaço | O(1) |

O crescimento fatorial faz o algoritmo se tornar impraticável rapidamente: com poucos elementos (10 ou mais) o tempo esperado de execução já se torna absurdamente alto.

## Prós

- **Simplicidade extrema**: fácil de entender e implementar.
- **Valor didático**: ótimo exemplo para discutir complexidade de algoritmos, análise de pior/médio caso e por que algoritmos determinísticos (como Quick Sort, Merge Sort etc.) são necessários na prática.
- **Ilustra bem o conceito de aleatoriedade** aplicada (ou mal aplicada) a um problema computacional.

## Contras

- **Extremamente ineficiente**: complexidade média fatorial o torna inutilizável para qualquer entrada de tamanho real.
- **Sem garantia de término**: teoricamente pode nunca terminar, já que depende de sorte.
- **Não tem aplicação prática**: nenhum sistema real usa Bogo Sort para ordenar dados; existe apenas como curiosidade acadêmica.

## Como compilar e executar

```bash
gcc bogo_sort.c -o bogo_sort
./bogo_sort
```

## Exemplo de saída

```
Antes: 5 2 8 1 9 3
Depois: 1 2 3 5 8 9
```

## Autor

Renan Cáceres Anselmo — Tecnologia em Análise e Desenvolvimento de Sistemas (TADS), UTFPR-CP.
