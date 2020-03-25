#include <iostream>
#include <list>
#include <algorithm>  // necessário para o método find
using std::cout;
using std::cin;
using std::endl;

int main()
{
  std::list<double> minhaLista;   // cria uma lista de floats vazia
  std::list<double>::iterator k;  // cria um iterador de float

  minhaLista.push_back(7.5);
  minhaLista.push_back(27.26);
  minhaLista.push_back(69.09);
  minhaLista.push_front(-44);    // inserindo no início da lista 
  minhaLista.push_front(7.5);    // inserindo no início da lista

  // vai imprimir seis elementos {7.5, -44, 7.5, 27.26, 69.09}
  for ( k = minhaLista.begin(); k != minhaLista.end(); k++ )
    cout << "Imprimindo a lista...: " << *k << endl;

  cout << endl;
  // insere -2.888 como último elemento
  minhaLista.insert( minhaLista.end(), -2.888);

  // retira o elemento -44 da lista
  minhaLista.remove(-44);

  // remove elementos duplicados da lista (no caso, 7.5 aparece 2x)
  minhaLista.unique();

  // ordena a lista, em ordem ascendente
  minhaLista.sort();

  // agora, tem que imprimir quatro elementos {-2.888, 7.5, 27.26, 69.09}
  for ( k = minhaLista.begin(); k != minhaLista.end(); k++ )
    cout << "Lista final ordenada...: " << *k << endl;

  cout << endl;

  // para usar find, informe o ponto inicial e final de procura, mais o elemento
  k = find(minhaLista.begin(), minhaLista.end(), 27.26);
  if( *k == 27.26 ) cout << "Elemento 27.26 encontrado!!!" << endl;
  else cout << "Não existe o elemento procurado!!!" << endl;

  if (minhaLista.empty())
    cout << "Lista vazia!" << endl;
  else
    cout << "Lista com " << minhaLista.size() << " elementos!" << endl;

  minhaLista.clear();  // limpa toda a lista

  return 0;
}