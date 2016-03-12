#ifndef _FUNCTIONS_H_
#define _FUNCTIONS_H_

using namespace std;

template <typename Obj, typename Obj2>
	int wrapper_bsearch(Obj vetor, Obj2 x, int e, int d, int k);

long int busca_sequencial_iterativa(long int vetor[], long int x, int e, long int d, int k);

long int busca_binaria_iterativa(long int vetor[], long int x, int e, long int d,int k);

long int busca_ternaria_recursiva(long int vetor[], long int x, int e, long int d, int k);
	
	int compare(const void *x, const void *y);
	
	//IRENE...
long int busca_binaria_recursiva( long int vetor[], long int x, int e, long int d, int k);

	void randomFill( std::vector<int> &V, const int lower, const int upper, const unsigned int seed);

long int busca_sequencial_recursiva(long int vetor[], long int x, int e, long int d, int k);

long int busca_ternaria_iterativa( long int vetor[], long int x, int e, long int d, int k);

template<typename C, typename C1>
	int _search( const C& vetor, const C1& x,int e, int d, int k);

#include "functions.inl"

#endif
