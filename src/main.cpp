#include <iostream>
#include <cstdlib>
#include <chrono>
#include <ctime>
#include <vector>
#include <fstream>
#include <sstream>
#include <random>
#include <string>
#include <new>
#include "functions.h"
#define N 536870912


	using namespace std;


		int main(int argc, char const *argv[])
		{
			long int tamvet;

		    if ( argc > 1 )
		    {
		        std::stringstream( argv[1] ) >> tamvet;
		    }
		    else
		    {
		        tamvet = N;
		    }

	/*
	 * std::srand inicializa a semente do gerador de números randômicos de acordo com o time do computador
	 */
  		
 			std::srand(10000);
			
 			long int aux = 0; //Variável usada para auxiliar no segundo caso de teste
 			long int sp1 = 0, sp2 = 0; // variáveis usadas para calcular as potências para buscas lineares
 			long double media = 0; // Variável para média
 			int escolha_fun; // Escolha da função
 			int escolha_ord; // Escolha da ordenação
 			int escolha_cen; // Escolha do cenário de testes
 			int k = 0; // Variável k para terceira ocorrência 
 			long int escolha_num; // Escolha de um número caso se queira encontrar algum específico
 			long int logtamvet = 0; // Variável para reduzir número a potencia utilizando log de base 2
			long int initamvet = 0; // Variável para diminuir 25 elementos para teste ou reduzir a 1
 			
 			std::cout << ">> Alocando vetor..." << std::endl;
			long int *vetor =  new long int [tamvet];
 			std::cout << ">> Vetor alocado com sucesso!" << std::endl << std::endl;


 			std::cout << ">> Preenchendo o vetor..." << std::endl;

			for (long int i = 0; i < tamvet; ++i){
					vetor[i] = rand()%10000;
			}	

			/*
			 *Alocação do -10 para testes da terceira ocorrência
			 */

			vetor[0] = -10;
			vetor[1] = -10;
			vetor[8] = -10;

			std::cout << ">> Vetor preenchido com sucesso!" << std::endl << std::endl;

			/*
			 * Função da biblioteca algorithm para ordenar o vetor caso se queira testar as buscas binárias e ternárias
			 */

			std::cout << ">>> Deseja ordenar o vetor? '1 - Sim'" << std::endl;
			std::cin >> escolha_ord;

			if (escolha_ord == 1)
				std::cout << ">> Ordenando Vetor" << std::endl,
				std::sort(vetor, vetor + tamvet),
				std::cout << ">> Vetor Ordenado" << std::endl;

	  		std::cout << std::endl;

			/*
			 * >>> Ponteiro para funcões :
			 *		0-busca_ternaria_iterativa
			 *		1-busca_ternaria_recursiva
			 *		2-busca_sequencial_iterativa
			 *		3-busca_sequencial_recursiva
			 *		4-busca_binaria_iterativa
			 *		5-busca_binaria_recursiva
			 *		6-_search
			 *		7-wrapper_bsearch
			 */

			std::cout << "0-busca_ternaria_iterativa"<< std::endl
					  << "1-busca_ternaria_recursiva"<< std::endl
					  << "2-busca_binaria_iterativa"<< std::endl
					  << "3-busca_binaria_recursiva"<< std::endl
					  << "4-busca_sequencial_iterativa"<< std::endl
					  << "5-busca_sequencial_recursiva" << std::endl
					  << "6-bsearch" << std::endl
					  << "7-search" << std::endl;
			std::cout << std::endl;
							
		    std::cout << ">>> Informe qual funcao deseja usar:" << std::endl;
		    std::cin >> escolha_fun;


			long int (*p[])(long int*, long int, int ,long int, int) = {
				busca_ternaria_iterativa, 
				busca_ternaria_recursiva,
				busca_binaria_iterativa,
				busca_binaria_recursiva,
				busca_sequencial_iterativa,
				busca_sequencial_recursiva,
				_search,
				wrapper_bsearch
				};

			std::cout << std::endl;
		    std::cout << ">>> Informe qual o numero que deseja procurar:" << std::endl;
		  	std::cin >> escolha_num;
		  	std::cout << std::endl;


		  	std::cout << "1 - Cenário de pior caso, em que o elemento procurado k não se encontra no arranjo." << std::endl;
		  	std::cout << "2 - Cenário em que o elemento procurado k se encontra distante ‘3/4 do comprimento do vetor’ a partir do local de início da busca." << std::endl;
		  	std::cout << "3 - Cenário um situação em que  é necessário encontrar, se existir, a terceira ocorrência de k no vetor a partir do início do arranjo." << std::endl;
		    std::cout << ">>> Escolha um Cenário:" << std::endl;
		    std::cin >> escolha_cen;





	/*
	 * 'logtamvet' foi usado o log do valor passado por linha de comando do tamanho do vetor para retornar a potência do número desejado...
	 */

	logtamvet = log2(tamvet);

	(logtamvet - 25) > 1 ? initamvet = logtamvet - 25 : initamvet = 1;

for (int j = initamvet; j <= logtamvet; ++j){	
	
		/*
		 * Essas variáveis sp1 e sp2 são para fazer os testes da terceira ocorrencia nas buscas lineares e vão sendo trocadas
		 * no decorrer que o vetor aumenta...
		 */	
			sp1 = pow(2,j-1);
			sp2 = pow(2,j);
			
			swap(vetor[sp1], vetor[sp2]);
			

		/*
		 * >>> Algoritmo utilizado para o cálculo do tempo:
		 * 		funciona colhendo o time inicial e diminuindo do tempo final.
		 *		foi utilizado o std::chrono para os testes.
		 */

		std::chrono::time_point<std::chrono::system_clock> inicio, fim;

	for (int i = 1; i <= 100; ++i)
	{
			aux = (pow(2,j)*3)/4;

			if(escolha_cen == 1)
				escolha_num = -100; // Número não existente no vetor
			else if (escolha_cen == 2)
				escolha_num = vetor[aux]; // Elemento na posicão 3/4 do vetor
			else if(escolha_cen == 3)
				k = 1, escolha_num = -10; // 'k' foi usado para determinar 3 buscas no vetor, se for 1 ele ativa a terceira busca e por default é 0 e o segundo parametro é número fixo para teste da terceira ocorrência 


			

		    inicio = std::chrono::system_clock::now();

				p[escolha_fun](vetor,escolha_num,0,pow(2,j), k);
				
		    fim = std::chrono::system_clock::now();	 

		    unsigned long long int nanosegundos_decorridos = std::chrono::duration_cast<std::chrono::nanoseconds> (fim-inicio).count();                      

		              media = media + ((nanosegundos_decorridos - media)/i);
		             
	}	

		 	std::cout << pow(2,j) << " " << media << endl;	   		

}

				delete []vetor;
		  	
			return EXIT_SUCCESS;
			
		}
