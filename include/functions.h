#ifndef _FUNCTIONS_H_
#define _FUNCTIONS_H_

using namespace std;

template <typename Obj, typename Obj2>
	int wrapper_bsearch(Obj vetor, Obj2 x, int e, int d);

template <typename Obj, typename Obj2>
	long int busca_sequencial_iterativa(Obj &vetor, Obj2 x, int e, int d);

template <typename Obj, typename Obj2>
	long int busca_binaria_iterativa(vector <Obj> vetor, Obj2 x, int e, int d);

template <typename Obj, typename Obj2>
	long int busca_ternaria_recursiva(Obj &vetor, Obj2 x, int e, int d);
	
	int compare(const void *x, const void *y);

	//IRENE...
template <typename Obj, typename Obj2>
	int busca_binaria_recursiva( Obj &vetor, Obj2 x, int e, int d);

	void randomFill( std::vector<int> &V, const int lower, const int upper, const unsigned int seed);

template <typename Obj, typename Obj2>
	long int busca_sequencial_recursiva(Obj &vetor, Obj2 x, int e, int d);

template <typename Obj, typename Obj2>
	int busca_ternaria_iterativa( Obj &vetor, Obj2 x, int e, int d);
//Falta Implementar...
template <typename Obj, typename Obj2>
	int wrapper_search( Obj &vetor, Obj2 x, int e, int d);

template <typename C>
	int compara_search(const C& V, const C& b);

#include "functions.inl"

#endif