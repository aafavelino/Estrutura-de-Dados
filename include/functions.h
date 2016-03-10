#ifndef _FUNCTIONS_H_
#define _FUNCTIONS_H_

using namespace std;

template <typename Obj, typename Obj2>
	int wrapper_bsearch(Obj vetor, Obj2 x, int e, int d, int k);

template <typename Obj, typename Obj2>
	long int busca_sequencial_iterativa(Obj &vetor, Obj2 x, int e, int d, Obj2 k);

template <typename Obj, typename Obj2>
	long int busca_binaria_iterativa(Obj &vetor, Obj2 x, int e, int d, int k);

template <typename Obj, typename Obj2>
	long int busca_ternaria_recursiva(Obj &vetor, Obj2 x, int e, int d, int k);
	
	int compare(const void *x, const void *y);
	
	//IRENE...
template <typename Obj, typename Obj2>
	int busca_binaria_recursiva( Obj &vetor, Obj2 x, int e, int d, int k);

	void randomFill( std::vector<int> &V, const int lower, const int upper, const unsigned int seed);

template <typename Obj, typename Obj2>
	long int busca_sequencial_recursiva(Obj &vetor, Obj2 x, int e, int d, Obj2 k);

template <typename Obj, typename Obj2>
	int busca_ternaria_iterativa( Obj &V, Obj2 x, int e, int d, int k);

template<typename C>
	int compara_search( const C& v1, const C& v2, int k);

#include "functions.inl"

#endif
