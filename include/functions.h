#ifndef _FUNCTIONS_H_
#define _FUNCTIONS_H_

using namespace std;

	/*
	 * >>> Wrapper para a busca binária do c++ 'bsearch' 
	 */

long int wrapper_bsearch(long int vetor[], long int x, int e, long int d, int k);

	/*
	 * >>> Algoritmo implementado para busca sequencial iterativa
 	 */

long int busca_sequencial_iterativa(long int vetor[], long int x, int e, long int d, int k);

	/*
	 * >>> Algoritmo implementado para busca binária iterativa
 	 */

long int busca_binaria_iterativa(long int vetor[], long int x, int e, long int d,int k);

	/*
	 * >>> Algoritmo implementado para busca ternária recursiva
 	 */

long int busca_ternaria_recursiva(long int vetor[], long int x, int e, long int d, int k);

	/*
	 * >>> Algoritmo implementado para usar no bsearch afim de comparar retornando -1, 0 ou 1;
 	 */
	
	int compare(const void *x, const void *y);

	/*
	 * >>> Algoritmo implementado para busca binária recursiva
 	 */
	
long int busca_binaria_recursiva( long int vetor[], long int x, int e, long int d, int k);

	/*
	 * >>> Algoritmo implementado para busca sequencial recursiva
 	 */

long int busca_sequencial_recursiva(long int vetor[], long int x, int e, long int d, int k);
	
	/*
	 * >>> Algoritmo implementado para busca ternária iterativa
 	 */

long int busca_ternaria_iterativa( long int vetor[], long int x, int e, long int d, int k);

	/*
	 * >>> Wrapper para a busca linear do c++ 'search'
 	 */

long int _search( long int vetor[], long int x, int e, long int d, int k);

#include "functions.inl"

#endif
