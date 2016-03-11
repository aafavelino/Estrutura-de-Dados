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

	long int busca_sequencial_iterativa(long int vetor[], long int x, int e, long int d, int k){
		long int i, count = 0;
		for (i = e; i < d; i++){
			if (k==1){
				if(vetor[i] == x)
					count ++;
				if (count ==3)
					return i; 
			}else if(vetor[i] == x)
				return i;
		}
		return -1;
	}

long int busca_binaria_iterativa(long int vetor[], long int x, int e, long int d,int k){
		long int aux = 0;

		while(e <= d){

		long int n = (e + d)/2;
		printf("\n>>> m: %ld\n", n );
		if(x == vetor[n]){
			if (k==1) {
					if (x == vetor[n-1])
					{

						for (long int i = n-1; i >= 0; i--)
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



	long int busca_ternaria_recursiva(long int vetor[], long int x, int e, long int d, int k){
		if (e > d)
			return -1;

		long int aux = 0;

		long int t1 = (d-e)/3 + e;

		long int t2 = ((d-e)/3) * 2 + e;

		if(x == vetor[t1]){
			if (k==1) {
						if (x == vetor[t1-1])
						{

							for (long int i = t1-1; i >= 0; i--)
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


	long int busca_binaria_recursiva( long int vetor[], long int x, int e, long int d, int k){
		long int aux = 0;

	    if (e > d  )
	        return -1;

	    long int n = ( e + d ) / 2;

	   	if(x == vetor[n]){
			if (k==1) {
						if (x == vetor[n-1])
						{

							for (long int i = n-1; i >= 0; i--)
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

long int busca_ternaria_iterativa( long int vetor[], long int x, int e, long int d, int k){
	    long int t1, t2, aux = 0;
	    while (e <= d){
			t1 = (d - e)/3 + e;
			t2 = ((d - e)/3) *2 + e;
			if (x==vetor[t1]){
					if (k==1) {
								if (x == vetor[t1-1])
								{

									for (long int i = t1-1; i >= 0; i--)
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

									for (long int i = t2-1; i >= 0; i--)
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

template<typename C, typename C1>
int _search( const C& vetor, const C1& x,int e, int d, int k)
{
	vector <int> v1;
	vector <int> v2;

	for (int l = 0; l < d; l++){
		v1.push_back(vetor[l]);
	}
	v2.push_back(x);
     int t,f;
     vector<int>::const_iterator it = search(v1.begin(), v1.end(), v2.begin(), v2.end());
     vector<int>::const_iterator it1;
     if(it != v1.end())
    {
        int i = it - v1.begin();
        t=i+1;

        if (k==1){
               
                it1 = search(v1.begin()+t, v1.end(), v2.begin(), v2.end());
                f = it1 - v1.begin();
                it1 = search(v1.begin()+f+1, v1.end(), v2.begin(), v2.end());
                t = it1 - v1.begin();

                if(*it1 == x)
           			return t;
           		else
           			return -1;
                }



        

   	return i;
    }
    else
    {
    return -1;
    }

}
