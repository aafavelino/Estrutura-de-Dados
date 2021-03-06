# Lista do que fazer...

- [x] Encontrar o tamanho maximo que pode ser alocado dinamicamente (long int)
- [x] Encontrar 25 faixas de tamanho para realizar o teste
- [x] Organização das amostras:
 - [x] Valores pseudo aleatorios (em qualquer ordem)
 - [x] Valores em ordem nao decrescente
 - Obs: Em ambos os casos, podem haver valores repetidos
- [x] Resultados da busca:
 - [x] Pior caso (quando k não está no vetor)
 - [x] Quando k encontra-se distante 3/4 do comprimento de A
 - [x] A terceira ocorrencia de k no arranjo (se existir)
- [x] Algoritmos: 
 - [x] busca sequencial interativa
 - [x] busca sequencial recursiva
 - [x] busca sequencial padrão (std::search -> algorithm)
 - [x] busca binária interativa                          // Apenas em arranjos ordenados
 - [x] busca binária recursiva                           // Apenas em arranjos ordenados
 - [x] busca binária padrão (std::bsearch -> cstdlib)    // Apenas em arranjos ordenados
 - [x] busca ternária interativa                         // Apenas em arranjos ordenados
 - [x] busca ternária recursiva                          // Apenas em arranjos ordenados
- [x] Adaptações:
 - [x] fazer as funções retornarem a 3º ocorrencia
- [x] Criação de wrappers:
 - [x] Criar uma nova função para chamar as funções std::search e std::bsearch
- [x] Armazenar as 8 funções (item 5) em um vetor de ponteiros para função (por isso o wrapper), com a mesma assinatura
- [x] Receber por linha de comando um valor k, limite de amostras a serem testadas (num_Amostras = 2^i, com i ∈ [5, k+5])
- [x] Gerar um arquivo .dat com os dados para serem plotados no gnuplot
- [x] Armazenar o valor de 100 execuções para cada instância (gerando a média progressiva)
- [x] Não alocar os vetores a cada execução, mas alocar uma unica vez com o tamanho máximo
- [x] Gerar um gráfico (n x tempo) para cada algoritmo
- [x] Criação do relatório:
 - [x] Introdução com o propósito do relatório
 - [x] Método
  - [x] Materiais
   - [x] Configurações da máquina utilizada (processador, memória, placa mãe)
   - [x] Linguagem de programação
   - [x] Tipo e versão do SO
   - [x] Tipo e versão do compilador
   - [x] Lista dos algoritmos utilizados (com o código)
   - [x] Cenários considerados
  - [x] Metodologia
   - [x] Descrição do método ou procedimento empregado para a geração dos dados
   - [x] Quais e como as medições foram tomadas para comparação (tempo, passos, memória...)
  - [x] Resultados Alcançados (Gŕaficos e Tabelas)
  - [x] Discussão dos Resultados
   - [x] O que foi descoberto
   - [x] Quais algoritmos são recomendados para quais cenários
   - [x] Existe um ganho em termos de processamento se dividirmos o arranjo em 3 partes?
    - [x] Se sim, por que não continuar dividindo-o?
   - [x] Aconteceu algo inesperado nas medições? (picos ou vales nos gráficos) Por que?
   - [x] Que função matemática melhor se aproxima para descrever o gráfico gerado?
   - [x] É possível estimar o tempo necessário para cada algoritmo executar com 100 milhões de elementos?
   - [x] A análise empírica é compatível com a análise matemática?
- [x] Entrega
 - [x] Um arquivo compactado contendo as pastas do projeto e o PDF com o relatório técnico
