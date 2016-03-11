#include <iostream>
#include <cstdlib>
#include <chrono>
#include <ctime>
#include <vector>
#include <fstream>
#include <sstream>
#include <random>
#include <string>
#include "functions.h"


	using namespace std;



		int main(int argc, char const *argv[])
		{

			/*
 			 *inicializa o gerador de números randômicos
 			 */
  		
 			srand(time(NULL));

			long int vetor[] = {1,1,1,2,2,2,3,3,4,5,6,7};

			/*
			 * Ordenar vetor...
			 */

			std::sort(begin(vetor), end(vetor)); 
			 

			

		    for (int i = 0; i < 12; ++i){
			    cout << " " <<  vetor[i];//rand() % 100;

			}

		long int (*p[])(long int*, long int, int ,long int, int) = {
			busca_ternaria_iterativa, 
			busca_ternaria_recursiva,
			busca_sequencial_iterativa,
			busca_binaria_iterativa,
			busca_binaria_recursiva
			};

			

	/*
	 * medir o tempo MODIFICADO... http://fr.cppreference.com/w/cpp/chrono
	 */

	std::chrono::time_point<std::chrono::system_clock> inicio, fim;

    inicio = std::chrono::system_clock::now();



			 cout << p[4](vetor,2,0,12, 1);
		
		

    fim = std::chrono::system_clock::now();
 
    int segundos_decorridos = std::chrono::duration_cast<std::chrono::seconds> (fim-inicio).count(); 

    unsigned long long int nanosegundos_decorridos = std::chrono::duration_cast<std::chrono::nanoseconds> (fim-inicio).count();                      

    std::time_t fimdoteste = std::chrono::system_clock::to_time_t(fim);
 
    std::cout << "\n>>>Teste finalizado em: " << std::ctime(&fimdoteste)
              << ">>Tempo gasto em segundos: " << segundos_decorridos << "s"<< endl 
              << ">>Tempo gasto em nanosegundos: " << nanosegundos_decorridos << "ns"<< endl;
		     
		  	
			return EXIT_SUCCESS;
		}
