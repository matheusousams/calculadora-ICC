#include "funcoesvetmat.c"

//Funções de vetores


//Declaração da função de leitura do vetor
void LerVetor(float *ponteiro, int tamanho);

//Declaração da função de soma dos vetores
void SomaVetores(float *ponteiro1, float *ponteiro2, int tamanho1, int tamanho2);

//Declaração da função de multiplicar um dos vetores por um escalar
void MultEscVetor(float esc,float *ponteiro, int tamanho);

//Declaração da função do produto escalar entre os vetores
void ProdEsc(float *ponteiro1, float *ponteiro2, int tamanho);



//Funções de matrizes


//Declaração da função de leitura de matriz
void LerMatriz(float **ponteiro, int linha, int coluna);

//Declaração da função de somar duas matrizes
void SomarMatrizes(float **ponteiro1, int linha1, int coluna1, float **ponteiro2);

//Declaração da função para multiplicar as matrizes
void MultiplicarMatrizes(float **ponteiro1, int linha1, float **ponteiro2, int coluna2);

//Declaração da função para a transposta da matriz
void TranspostaMatriz(float **ponteiro, int linha, int coluna);

//Declaração da função para cálculo do determinante da matriz
void DetMatriz(float **ponteiro, int linha, int coluna);

//Declaração da função para saber se a matriz é simétrica
void MatrizSimetrica(float **ponteiro, int linha, int coluna);
