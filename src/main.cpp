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

			auto terk(0);

		    if ( argc > 1 )
		        std::stringstream( argv[1] ) >> terk;
		    else
		        terk = 0;




			/*
 			 *inicializa o gerador de números randômicos
 			 */
  		
 			srand(time(NULL));

			int vetor[12];
		
		  	for (int i = 0; i < 12; ++i){
			    vetor[i] = rand() % 1000;
			         
			}


			/*
			 * Ordenar vetor...
			 */

			std::sort(begin(vetor), end(vetor)); 
			 

			

		    for (int i = 0; i < 12; ++i){
			    cout << " " <<  vetor[i];//rand() % 100;

			}



			

	/*
	 * medir o tempo MODIFICADO... http://fr.cppreference.com/w/cpp/chrono
	 */

	std::chrono::time_point<std::chrono::system_clock> inicio, fim;

    inicio = std::chrono::system_clock::now();



			 cout << busca_binaria_recursiva(vetor,5,0,12, terk);
		
		

    fim = std::chrono::system_clock::now();
 
    int segundos_decorridos = std::chrono::duration_cast<std::chrono::seconds> (fim-inicio).count(); 

    unsigned long long int nanosegundos_decorridos = std::chrono::duration_cast<std::chrono::nanoseconds> (fim-inicio).count();                      

    std::time_t fimdoteste = std::chrono::system_clock::to_time_t(fim);
 
    std::cout << "\n>>>Teste finalizado em: " << std::ctime(&fimdoteste)
              << ">>Tempo gasto em segundos: " << segundos_decorridos << "s"<< endl 
              << ">>Tempo gasto em nanosegundos: " << nanosegundos_decorridos << "ns"<< endl;
		     
		  	
			return EXIT_SUCCESS;
		}
