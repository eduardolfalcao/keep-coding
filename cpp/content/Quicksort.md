## Quicksort
o QuickSort é um algoritmo de divisão e conquista. Ele seleciona um elemento como pivô e particiona a matriz fornecida em torno do pivô 
selecionado. Existem muitas versões diferentes do quickSort que selecionam o pivô de maneiras diferentes.

1.	Sempre escolha o primeiro elemento como pivô.
2.	Sempre escolha o último elemento como pivô (implementado abaixo)
3.	Escolha um elemento aleatório como pivô.
4.	Escolha a mediana como pivô.

O processo principal no quickSort é partition (). O destino das partições é que, dada uma matriz e um elemento x da matriz como pivô, 
coloque x em sua posição correta na matriz classificada e coloque todos os elementos menores (menores que x) antes de x e coloque todos
os elementos maiores (maiores que x) depois x. Tudo isso deve ser feito em tempo linear.
```c++
/ * esq -> índice inicial, dir -> índice final * /
quickSort (arr [], esq, dir)
{
    se (esq < dir)
    {
        / * pi está particionando índice, arr [pi] agora
           no lugar certo * /
        pi = partition (arr, esq, dir);

        quickSort (arr, esq, pi - 1); // Antes de pi
        quickSort (arr, pi + 1, dir); // Depois de pi
    }
}
```

Algoritmo de Partição
A lógica é simples: partimos do elemento mais à esquerda e controlamos o índice de elementos menores (ou iguais a) como i. Ao percorrer, se encontrarmos um elemento menor, trocamos o elemento atual por arr [i]. Caso contrário, ignoramos o elemento atual.


```c++
/ * Esta função recebe o último elemento como pivô, coloca
   o elemento pivô na sua posição correta em ordenado
    matriz e coloca todos menores (menores que o pivô)
   à esquerda do pivô e todos os elementos maiores à direita
   do pivô * /
partition (arr [], esq, dir)
{
    // pivô (elemento a ser colocado na posição correta)
    pivô = arr [dir];  
 
    i = (esq) // Índice do elemento menor

    for(int i = esq; i <= dir; i++){
        
        if (a[i] <= pivo){
            trocar(a, i, index_pivo);
            index_pivo++;
        }
    }

    return index_pivo--;
}
```
