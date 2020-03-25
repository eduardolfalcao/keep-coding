## Estruturas Condicionais
### Todas as linguagens de programação oferecem comandos para o desvio condicional. O mais simples é a sentença if. Em C++ , ele tem o formato:
```c++
 if (expressao) {
     corpododesvio
}
```
### O corpo do desvio, por sua vez, pode ser uma sentença simples ou composta (veja Seção 1.1). Quando uma sentença if é encontrada em um programa, 


#### - O teste na expressão em parênteses é avaliada. 

#### - Se o valor da expressão de teste for DIFERENTE de zero (ou FALSE), as sentenças que compõem o corpo do desvio que segue a expressão de teste são executadas.

```c++
#include <iostream>
using namespace std;
int main( ) {
    int a, b;
    cout << "Entre com uma fracao (numerador e denominador): ";
    cin >> a >> b;
    if (b != 0)
        cout << "A fracao em decimal eh " << 1.0 * a / b << endl;
}
```
### O formato do if-else é:
```c++
    if (expressao)
        sentenca1
    else
        sentenca2
```

```c++
#include <iostream>

using namespace std;
int main( ) {
    int num;
   // obtem um numero do usuario
   cout << "Entre com um inteiro: ";
   cin >> num;
   // imprime uma mensagem dizendo se o numero e par ou impar
   if (num % 2 == 0) {
       cout << "O numero eh par.\n";
  } else {
       cout << "O numero eh impar.\n";
  }     
}
```

### Alternar instrução em C / C ++
#### As instruções de alternância de caso substituem as instruções if que comparam uma variável a vários valores integrais
#### A instrução switch é uma instrução de filial múltipla. Ele fornece uma maneira fácil de despachar a execução para diferentes partes do código com base no valor da expressão.
### Switch é uma instrução de controle que permite que um valor altere o controle de execução.
![switch](https://user-images.githubusercontent.com/56180762/77486812-75e92580-6e0f-11ea-8b9e-fd2eb2252172.png)

```c++
include <iostream> 
using namespace std; 
  
int main() { 
int x = 2; 
    switch (x) 
    { 
        case 1:  
            cout << "Choice is 1"; 
            break; 
        case 2:  
            cout << "Choice is 2"; 
            break; 
        case 3:  
            cout << "Choice is 3"; 
            break; 
        default:  
            cout << "Choice other than 1, 2 and 3"; 
            break;   
    } 
return 0; 
}
```
