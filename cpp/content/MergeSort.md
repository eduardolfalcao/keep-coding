# MERGE SORT

O merge sort é um algoritmo de ordenação que usa o metodo de "divisão e conquista" para resolver problemas.
É um método estável e possui C(n) = O(n log n) de complexidade de tempo (em todos os casos) e O(n) em complexidade de espaço.

# DIVISÃO E CONQUISTA
A divisão em conquista é constituida por 3 partes, são Divisão, Conquista e Combinação.
Antes de realizar a divisão e conquista é necessario encontrar o ponto central da lista (tLista/2).
Após encontrar o ponto central da lista começa a primeira etapa:
## DIVISÃO E CONQUISTA

Na divisão, a lista principal as vai ser dividida pela metade.
Então as listas que são resultado da primeira divisão vão ser divididas na metade.
Então as listas que são resultado da segunda divisão vão ser divididas na metade.
E irá se repetir até chegar em sublistas que possuem no maximo dois numeros. Após chegar a esse ponto, a etapa de Conquista foi realizada.

## COMBINAÇÃO
Na combinação, é o momento onde juntamos as sublistas em uma unica lista.
Durante esse processo de combinação, os numeros vão sendo ordenados.


Vemos um exemplo:

[14, 7, 3, 12, 9, 11, 6, 2]   - lista desordenada

[14, 7, 3, 12] - [ 9, 11, 6, 2]   - lista dividida pela metade no indice 3 (7/2 = 3.5 = 3)

[14, 7] - [3, 12] - [9, 11] - [6, 2]   - sublistas divididas pela metade (tamanho/2)

[14] - [7] - [3] - [12] - [9] - [11] - [6] - [2]   - sublistas dividias até o ponto máximo, aqui vai começar a combinação e ordenação

[7, 14] - [3, 12] - [9, 11] - [2, 6]    - primeira etapa de combinação e ordenação

[3, 7, 12, 14] - [2, 6, 9, 11]    - segunda etapada de combinação e ordenação

[2, 3, 6, 7, 9, 11, 12, 14] - ultima etapa de combinação e ordenação, aqui a lista já está ordenada

