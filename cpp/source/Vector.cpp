#include <iostream>
#include <vector>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;


int main()
{
    std::vector<int> meuVetor; // cria um vetor de inteiros vazio

    if (meuVetor.empty())
    { // testa se o vetor está vazio
        cout << "Vetor vazio!" << endl;
    }
    else
    {
        cout << "Vetor com elementos!" << endl;
    }
    meuVetor.push_back(7); // inclue no fim do vetor um elemento
    meuVetor.push_back(11);
    meuVetor.push_back(2006);

    // vai imprimir três elementos {7, 11, 2006}
    for (int i = 0; i < meuVetor.size(); i++)
    {
        cout << "Elemento " << i << " do vetor: " << meuVetor[i] << endl;
    }
        cout << endl;

    meuVetor.pop_back(); // retira o último elemento
    // agora, só vai imprimir dois {7, 11}
    for (int i = 0; i < meuVetor.size(); i++)
    {
        cout << "Elemento " << i << " do vetor: " << meuVetor[i] << endl;
    }

    return 0;
}