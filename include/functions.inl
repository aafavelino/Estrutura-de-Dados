template <typename Obj, typename Obj2>
	int wrapper_bsearch(Obj vetor, Obj2 x, int e, int d, int k){
		int aux;
		Obj p1 = (Obj) std::bsearch(&x, vetor, d-e, sizeof(*vetor) , compare);
		    if(p1 == 0){
		    	return -1;
		    }else{ 
		    	if(k==1){
		    		for (int i = (p1 - &vetor[0]); i >= 0; i--)
		    		{	
		    			if (x == vetor [i])
		    				aux = i;
		    		}
		    		if (x == vetor [aux+2])
		    		{
		    			return aux+2;
		    		}else{
		    			return 0;
		    		}
		    	}
		    	return p1 - &vetor[0];
		    }
	}

template <typename Obj, typename Obj2>
	long int busca_sequencial_iterativa(Obj &vetor, Obj2 x, int e, int d, Obj2 k){
		int cont = 0;
		int i;
		int aux;
		for (i = e; i < d; i++){
			if(x == vetor[i]){
				cont++;
				aux = i;
				if(cont==k)
					return aux;
			}
		}
		return -1;	
	}

template <typename Obj, typename Obj2>
	long int busca_binaria_iterativa(Obj &vetor, Obj2 x, int e, int d,int k){
		int aux = 0;
	
		while(e <= d){

		Obj2 n = (e + d)/2;
		printf("\n>>> m: %d\n", n );
		if(x == vetor[n]){
			if (k==1) {
					if (x == vetor[n-1])
					{
					
						for (int i = n-1; i >= 0; i--)
						{
							
							if (x == vetor[i])
							{
								aux = i;
							}
						
							
					}
						return x == vetor[aux+2] ? aux+2: 0;
			}else{
				return x == vetor[n+2] ? n+2: 0;
			}

		}

			return n;

		} else if(x > vetor[n])
			e = n + 1;
		else
			d = n - 1;
		

		
	}
	return -1;
}

template <typename Obj, typename Obj2>
	long int busca_ternaria_recursiva(Obj &vetor, Obj2 x, int e, int d, int k){
		if (e > d)
			return -1;

		int aux = 0;

		Obj2 t1 = (d-e)/3 + e;
		
		Obj2 t2 = ((d-e)/3) * 2 + e;

		if(x == vetor[t1]){
			if (k==1) {
						if (x == vetor[t1-1])
						{
						
							for (int i = t1-1; i >= 0; i--)
							{
								
								if (x == vetor[i])
								{
									aux = i;
								}
							
								
						}
							return x == vetor[aux+2] ? aux+2: 0;
				}else{
					return x == vetor[t1+2] ? t1+2: 0;
				}

			}
			return t1;
		}
		if(x == vetor[t2]){
			if (k==1) {
						if (x == vetor[t2-1])
						{
						
							for (int i = t2-1; i >= 0; i--)
							{
								
								if (x == vetor[i])
								{
									aux = i;
								}
							
								
						}
							return x == vetor[aux+2] ? aux+2: 0;
				}else{
					return x == vetor[t2+2] ? t2+2: 0;
				}

			}
			return t2;
		}
		if(x < vetor[t1])
			return busca_ternaria_recursiva(vetor, x, e, t1-1, k);
		else if(x > vetor[t1] && x < vetor[t2])
			return busca_ternaria_recursiva(vetor, x, t1+1, t2-1, k);
		else if (x > vetor[t2])
			return busca_ternaria_recursiva(vetor, x, t2+1, d, k);
	}

	int compare(const void *x, const void *y){
			   return  *(int*)x - *(int*)y;
	}

	//IRENE...

template <typename Obj, typename Obj2>
	int busca_binaria_recursiva( Obj &vetor, Obj2 x, int e, int d, int k){
		int aux = 0;
		
	    if (e > d  ) 
	        return -1; 

	    int n = ( e + d ) / 2;
	
	   	if(x == vetor[n]){
			if (k==1) {
						if (x == vetor[n-1])
						{
						
							for (int i = n-1; i >= 0; i--)
							{
								
								if (x == vetor[i])
								{
									aux = i;
								}
							
								
						}
							return x == vetor[aux+2] ? aux+2: 0;
				}else{
					return x == vetor[n+2] ? n+2: 0;
				}

			}
			return n;
	    }
	    else if ( x > vetor[n] ) 
	    {
	        return busca_binaria_recursiva( vetor, x, n+1, d, k);
	    }
	    else 
	    {
	        return busca_binaria_recursiva( vetor, x, e, n-1, k);
	    }
	}


template <typename Obj, typename Obj2>
	long int busca_sequencial_recursiva(Obj &vetor, Obj2 x, int e, int d, Obj2 k){

		int cont = 0;
		int i;
		int aux;

		for (i = e; i < d; ++i){
			if(e > d)
				return -1;
			else if(x == vetor[i]){
				cont++;
				aux = i;
				if(cont==k)
					return aux;
			} else
				return busca_sequencial_recursiva(vetor, x, e + 1, d, k);
		}

	}



void randomFill( std::vector<int> &V, const int lower, const int upper, const unsigned int seed) {

 
    std::default_random_engine eng(seed);
    std::uniform_real_distribution<double> distr(lower, upper);

    for( auto &elem : V){
        elem = distr(eng);
    }
}

template <typename Obj, typename Obj2>
	int busca_ternaria_iterativa( Obj &vetor, Obj2 x, int e, int d, int k){
	    int t1, t2, aux = 0;
	    while (e <= d){
			t1 = (d - e)/3 + e;
			t2 = ((d - e)/3) *2 + e; 
			if (x==vetor[t1]){
					if (k==1) {
								if (x == vetor[t1-1])
								{
								
									for (int i = t1-1; i >= 0; i--)
									{
										
										if (x == vetor[i])
										{
											aux = i;
										}
									
										
								}
									return x == vetor[aux+2] ? aux+2: 0;
						}else{
							return x == vetor[t1+2] ? t1+2: 0;
						}

					}

				return t1;
			}
			if (x == vetor[t2])
			{
					if (k==1) {
								if (x == vetor[t2-1])
								{
								
									for (int i = t2-1; i >= 0; i--)
									{
										
										if (x == vetor[i])
										{
											aux = i;
										}
									
										
								}
									return x == vetor[aux+2] ? aux+2: 0;
						}else{
							return x == vetor[t2+2] ? t2+2: 0;
						}

					}
				return t2;
			}
			 if (x<vetor[t1])
			{	
	        d = t1-1;   
			}
			else if ((x > vetor[t1]) && (x < vetor[t2]))
			{
			e  = t1 + 1;
	        d = t2-1;

			}
			else if (x>vetor[t2])
			{
	         e = t2 +1;

			}
				
		}

	  return -1;
	}

template <typename C>
	int compara_search(const C& V, const C& b)
	{
	  return std::search(V.begin(), V.end(), b.begin(), b.end()) != V.end();

	}
	

