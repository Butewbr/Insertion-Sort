#include "AbstractSort.h"

//Implemente o Algoritmo Insertion Sort para ordenar em ordem não decrescente um vetor de Elemento.

//implemente AQUI a funcao sort do Insertion Sort
//você DEVE utilizar a função swap para trocar dois elementos de posição

void sort(Elemento** umVetor, int quantidadeDeElmentos)
{
	int j = 1;
	int tmp, k;

	while(j < quantidadeDeElmentos)
	{
		tmp = umVetor[j]->_chave;
		k = j-1;

		while(k >= 0 and umVetor[k]->_chave > tmp)
		{
			umVetor[k+1]->_chave = umVetor[k]->_chave;
			k--;
		}
		umVetor[k+1]->_chave = tmp;

		j++;
	}
}