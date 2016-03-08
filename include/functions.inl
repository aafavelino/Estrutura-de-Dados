#include <iostream>
#include <cstdlib>
#include <chrono>
#include <ctime>
#include <vector>
#include <fstream>
#include <sstream>
#include <random>
#include "functions.h"


	using namespace std;

template <typename Obj, typename Obj2>
	int wrapper_bsearch(Obj vetor, Obj2 x, int e, int d){
		Obj p1 = (Obj) std::bsearch(&x, vetor, d-e, sizeof(*vetor) , compare);
		    if(p1 == 0)
		    	return -1;
		    else
		    	return p1 - &vetor[0];

	}

template <typename Obj, typename Obj2>
	long int busca_sequencial_iterativa(Obj &vetor, Obj2 x, int e, int d){
		
		for (int i = e; i < d; i++)
			if(x == vetor[i])
				return i;
		return -1;	
	}

template <typename Obj, typename Obj2>
	long int busca_binaria_iterativa(vector <Obj> vetor, Obj2 x, int e, int d){
		while(e <= d){

		Obj2 n = (e + d)/2;
		if(x == vetor[n])
			return n;
		else if(x > vetor[n])
			e = n + 1;
		else
			d = n - 1;
		}

		return -1;
	}

template <typename Obj, typename Obj2>
	long int busca_ternaria_recursiva(Obj &vetor, Obj2 x, int e, int d){
		if (e > d)
			return -1;

		Obj2 t1 = (d-e)/3 + e;
		
		Obj2 t2 = ((d-e)/3) * 2 + e;

		if(x == vetor[t1])
			return t1;
		if(x == vetor[t2])
			return t2;
		if(x < vetor[t1])
			return busca_ternaria_recursiva(vetor, x, e, t1-1);
		else if(x > vetor[t1] && x < vetor[t2])
			return busca_ternaria_recursiva(vetor, x, t1+1, t2-1);
		else if (x > vetor[t2])
			return busca_ternaria_recursiva(vetor, x, t2+1, d);
	}

	int compare(const void *x, const void *y){
			   return  *(int*)x - *(int*)y;
	}

	//IRENE...

template <typename Obj, typename Obj2>
	int busca_binaria_recursiva( Obj &vetor, Obj2 x, int e, int d){
	    if (e > d  ) 
	        return -1; 

	    int n = ( e + d ) / 2;
	
	   	if(x == vetor[n])
	    {   
	        return n;
	    }
	    else if ( x > vetor[n] ) 
	    {
	        return busca_binaria_recursiva( vetor, x, n+1, d);
	    }
	    else 
	    {
	        return busca_binaria_recursiva( vetor, x, e, n-1);
	    }
	}


template <typename Obj, typename Obj2>
	long int busca_sequencial_recursiva(Obj &vetor, Obj2 x, int e, int d){
		for (int i = e; i < d; ++i){
			if(e > d)
				return -1;
			else if(x == vetor[i])
				return i;
			 else
				return busca_sequencial_recursiva(vetor, x, e + 1, d);
		}

	}



void randomFill( std::vector<int> &V, const int lower, const int upper, const unsigned int seed){

 
    std::default_random_engine eng(seed);
    std::uniform_real_distribution<double> distr(lower, upper);

    for( auto &elem : V){
        elem = distr(eng);
    }
}

template <typename Obj, typename Obj2>
	int busca_ternaria_iterativa( Obj &vetor, Obj2 x, int e, int d){
	    int met, met1;
	    while (e <= d){
			met = (d - e)/3 + e;
			met1 = ((d - e)/3) *2 + e; 
			if (x==vetor[met]){
				return met;
			}
			if (x == vetor[met1])
			{
				return met1;
			}
			 if (x<vetor[met])
			{	
	        d = met-1;   
			}
			else if ((x > vetor[met]) && (x < vetor[met1]))
			{
			e  = met + 1;
	        d = met1-1;

			}
			else if (x>vetor[met1])
			{
	         e = met1 +1;

			}
				
		}

	  return -1;
	}

template <typename Obj, typename Obj2>
	int wrapper_search( Obj &vetor, Obj2 x, int e, int d){
		//Falta Implementar...
	}
	
	int compara_search(const C& V, const C& b)
	{
	  return std::search(V.begin(), V.end(), b.begin(), b.end()) != V.end();

	}

	

