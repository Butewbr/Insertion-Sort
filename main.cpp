#include "AbstractSort.h"
#include <iostream>

using namespace std;

//utilize este arquivo para fazer seus próprios testes. 
//NÃO implemente aqui o SelectionSort
//este arquivo será ignorado no momento de avaliar sua implementação

int main()
{
	
	Elemento e0, e1, e2, e3, e4;
  e0._chave = 5;
  e1._chave = 4;
  e2._chave = 3;
  e3._chave = 1;
  e4._chave = 2;

  Elemento** vetor = inicializa(5);
  vetor[0] = &e0;
  vetor[1] = &e1;
  vetor[2] = &e2;
  vetor[3] = &e3;
  vetor[4] = &e4;

	sort(vetor, 5);

	cout << "seu vetor organizado:" << endl;

	for (int i = 0; i < 5; ++i)
	{
		cout << vetor[i]->_chave << endl;
	}

	free(vetor);
}