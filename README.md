# 🔢 QuickSort em C

Projeto desenvolvido em linguagem C para implementar o algoritmo de ordenação QuickSort de forma modularizada.

# 📌 Sobre o projeto

O programa recebe um vetor de números inteiros, realiza sua ordenação utilizando o algoritmo QuickSort e exibe o resultado no terminal.

A estrutura do projeto foi dividida em módulos independentes, separando a lógica de ordenação da lógica de particionamento. Essa organização facilita a leitura, a manutenção e a reutilização do código.

O algoritmo utiliza o último elemento do vetor como pivô e aplica recursividade para ordenar os elementos à esquerda e à direita do pivô, até que todo o vetor esteja em ordem crescente.

# ⚙️ Funcionalidades
Inicialização de um vetor de números inteiros;
Ordenação dos elementos utilizando o algoritmo QuickSort;
Escolha do último elemento como pivô;
Particionamento do vetor com base no pivô;
Aplicação de recursividade para ordenar os subvetores;
Organização do código em módulos independentes;
Exibição do vetor ordenado no terminal.

# 📂 Organização dos arquivos

## Main.c

Inicialização do vetor;
Chamada da função de ordenação;
Exibição dos resultados.

Reorganizacao.c

Implementação da função quickSort();
Controle das chamadas recursivas.

## Particionamento.c

Implementação da função particionar();
Reorganização dos elementos em torno do pivô;
Definição da posição correta do pivô.

## Reorganizacao.h

Declaração do protótipo da função quickSort().

## Particionamento.h

Declaração do protótipo da função particionar().
🚀 Funcionamento

O processo de ordenação ocorre em três etapas principais:

Escolha do pivô: o último elemento do vetor é selecionado como referência.
Particionamento: os elementos menores ou iguais ao pivô são posicionados à esquerda, enquanto os maiores ficam à direita.
Recursividade: o mesmo procedimento é aplicado aos subvetores até que todos os elementos estejam ordenados.
Exemplo

## Entrada:

text
8 3 1 7 0 10 2


## Saída:

text
0 1 2 3 7 8 10

# 🛠️ Tecnologias
Linguagem C;
GCC;
Terminal/Console;
Algoritmo QuickSort.

# 📚 Conceitos aplicados
Programação modular em C;
Utilização de arquivos .h e .c;
Recursividade;
Algoritmos de ordenação;
Manipulação de vetores;
Separação de responsabilidades entre módulos.

# ▶️ Como executar o projeto
1. Compilar o programa
bash
gcc Main.c Reorganizacao.c Particionamento.c -o quicksort

2. Executar no Linux
bash
./quicksort

3. Executar no Windows
bash
quicksort.exe
