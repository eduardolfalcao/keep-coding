#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void swap(int numeros[], int i, int j){
	cout << "trocado " << numeros[i] << " por " << numeros[j] << endl;
	int temp = numeros[i];
	numeros[i] = numeros[j];
	numeros[j] = temp;
	
}

void selectionSort(int numeros[], int tam){	
	int menorIndice = 0;
	//i controla a extremidade do sub-array da esquerda que estah ordenado
	for(int i = 0; i < tam - 1; i++){		      
		//for para encontrar o menor valor
		for(int j = i; j < tam; j++){
			if(numeros[j] < numeros[menorIndice]){
				menorIndice = j;
			}
		}
		swap(numeros,i,menorIndice);
	}
}

int main(){
	
	int numeros[6] = {2, 7, 4, 1, 5, 3};
	selectionSort(numeros, 6);
	for(int i = 0; i < sizeof(numeros)/sizeof(numeros[0]); i++){
		cout << numeros[i] << " ";
	}

	return 0;
}

