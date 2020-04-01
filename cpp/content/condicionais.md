## Estruturas Condicionais

O C ++ suporta as condições lógicas usuais da matemática:

1. Menor que: a <b
2. Menor ou igual a: a <= b
3. Maior que: a> b
4. Maior ou igual a: a> = b
5. Igual a a == b
6. Não é igual a: a! = B

C ++ possui as seguintes instruções condicionais:

Use **if** para especificar um bloco de código a ser executado, se uma condição especificada for verdadeira
Use **else** para especificar um bloco de código a ser executado, se a mesma condição for falsa
Use **else if** para especificar uma nova condição para testar, se a primeira condição for falsa
Use **switch** para especificar muitos blocos alternativos de código a serem executados

Use a instrução **if** para especificar um bloco de código C ++ a ser executado se uma condição for true.

*Exemplo*
```c++
if (20 > 18) {
  cout << "20 is greater than 18";
}
```

Use a instrução **else** para especificar um bloco de código a ser executado se a condição for false.

*Exemplo*
```c++
int time = 20;
if (time < 18) {
  cout << "Good day.";
} else {
  cout << "Good evening.";
}
```
// Outputs "Good evening."


Use a instrução **else if** para especificar uma nova condição se a primeira condição for false.

*Exemplo*
```c++
int time = 22;
if (time < 10) {
  cout << "Good morning.";
} else if (time < 20) {
  cout << "Good day.";
} else {
  cout << "Good evening.";
}
// Outputs "Good evening."
```

Também existe o operador ternário, que consiste em três operandos. Pode ser usado para substituir várias linhas de código por uma única linha. É frequentemente usado para substituir instruções if if else simples:

*Sintaxe*
```c++
variable = (condition) ? expressionTrue : expressionFalse;
```

*Exemplo*
```c++
int time = 20;
string result = (time < 18) ? "Good day." : "Good evening.";
cout << result;
```

Use a instrução **switch** para selecionar um dos muitos blocos de código a serem executados.

*Sintaxe*

```c++
switch(expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // code block
}
```

É assim que funciona:

1. A expressão **switch** é avaliada uma vez
2. O valor da expressão é comparado com os valores de cada case
3. Se houver uma correspondência, o bloco de código associado será executado

*Exemplo*
```c++
int day = 4;
switch (day) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
}
// Outputs "Thursday" (day 4)
```
