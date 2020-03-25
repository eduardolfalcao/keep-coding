## Vector
é um tipo de contêiner sequêncial, baseado em arrays. Ele suporta iteradores de acesso aleatório, que são normalmente implementados como ponteiros para os elementos de um vetor.
Vetores desta classe podem ser de tipos de dados primitivos (inteiros, strings, pontos flutuante), bem como classes.
Como esta estrutura de dados trabalha com posições de memória contíguas, o acesso direto a seus elementos também pode ser feito através do operador subscrito [ ].
Para usar os recursos desta classe, basta inserir o seguinte trecho no cabecalho do código.
```c++
 #include <vector>
```

Para criar um objeto vector, usa-se:
```c++
    std::vector<tipo_do_objeto> nome_do_objeto
```

As principais operações utilizadas nas lists são :
- push_back(elemento)
- pop_back()
- insert(posição, elemento)
- erase(posição)
- clear()
- empty()
- size()
- begin() 
- end() 

### Ordenação de Vector

Para ordenar um VECTOR com tipos primitivos como int, float, char e double, chame a função sort da STL, conforme o trecho de código abaixo:

```c++
int main()
{
    vector <float> V;

    V.push_back(-4);
    V.push_back(4);
    V.push_back(-9);
    V.push_back(-12);
    V.push_back(40);

    cout << "IMPRIMINDO" << endl;
    for (int i=0;i<V.size();i++)
        cout << V[i] << endl;

    sort (V.begin(), V.end());
    cout << "IMPRIMINDO EM ORDEM" << endl;
    for (int i=0;i<V.size();i++)
        cout << V[i] << endl;

    cout << "Fim..." << endl;

    return 0;
}
```

### Vector com Classes
Além de armazenar tipos primitivos como int, float, char e double, as classes da STL permitem que se criem estruturas de dados a partir de classes ou structs definidadas pelo programador.
Para armazenar objetos de uma classe Pessoa em um vector, veja o exemplo abaixo.

```c++
#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

class Pessoa {
    string nome;
    int idade;
    public:
        Pessoa(string no, int id)
        {
            idade = id;
            nome = no;
        }
        string getNome()
        {
            return nome;
        }
        int getIdade()
        {
            return idade;
        }
};

int main(){

      vector <Pessoa> VP;
      vector <Pessoa>::iterator ptr;

      VP.push_back(Pessoa("James", 20));
      VP.push_back(Pessoa("Hiago", 19));
      VP.push_back(Pessoa("Matheus", 25));
      VP.push_back(Pessoa("Luccas", 25));
      VP.push_back(Pessoa("Samuel", 21));
      VP.push_back(Pessoa("Bitao", 25));
      VP.push_back(Pessoa("Eduardo", 30));

      // percorrendo a lista com indices
      for(int i = 0; i < VP.size(); i++)
      {
            cout << "Nome: " << VP[i].getNome();
            cout << " - Idade: " << VP[i].getIdade() << endl;
      }
}

```

### Ordenação de Vector com Classes
Para ordenar um vector criado a partir de uma classe, deve-se utilizar a função sort da STL. Neste caso, como há várias possibilidades de ordenação (pelos vários atributos da classe), é necessário criar uma função de comparação entre dois objetos da classe que forma o vector.

Esta função deve receber, por parâmetro, dois objetos (A e B) da classe que dá origem ao vector e deve retornar true caso o objeto A venha ANTES do objeto B segundo o critério de ordenação. Caso contrário, deve retirnar false.

No exemplo a seguir, a função de comparação compara dois objetos da classe Pessoa, com base no atributo nome. No caso a função define a ordem decrescente de nome. 


```c++
#include <iostream>
using namespace std;
#include <vector>

.......
.......
........

bool ordena_por_nome(Pessoa A, Pessoa B)
{
    if (A.getNome() > B.getNome())
       return true;
    return false;
}

int main(){

      vector <Pessoa> VP;
      vector <Pessoa>::iterator ptr;

      VP.push_back(Pessoa("Joao", 25));
      VP.push_back(Pessoa("Maria", 32));
      VP.push_back(Pessoa("Carla", 4));
      VP.push_back(Pessoa("Abel", 30));


      sort ( VP.begin(), VP.end(), ordena_por_nome);

      // percorrendo a lista com um ITERATOR
      for(ptr = VP.begin(); ptr != VP.end(); ptr++)
      {
            cout << "Nome: " << ptr->getNome();
            cout << " - Idade: " << ptr->getIdade() << endl;
      }
    system("pause");
}
```

